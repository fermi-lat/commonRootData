
#ifndef commonRootData_VOLUMEIDENTIFIER_H
#define commonRootData_VOLUMEIDENTIFIER_H

#include "TObject.h"
#include <string>

/** @class VolumeIdentifier
* @brief This is the ROOT version of the idents::VolumeIdentifier
*
* ROOT is not yet able to store 64 bit longs as a machine independent type.
* Instead, we split the VolumeId into two 32 bit UInt_t.
*
* @author Heather Kelly
*  
* $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/idents/VolumeIdentifier.h,v 1.4 2005/04/18 05:51:52 heather Exp $
*/
class VolumeIdentifier: public TObject {
    
public:
    
    VolumeIdentifier();

    VolumeIdentifier(const VolumeIdentifier &id);
    
    virtual ~VolumeIdentifier() { };

    void Clear(Option_t *option ="");
    
    Bool_t CompareInRange( const VolumeIdentifier &, const std::string & ="unknown VolumeIdentifier" ) const ; // for tests

    void Print(Option_t *option="") const;

    /** 
    * This method initialize the VolumeIdentifier with a 64 bit integer and a size
    * and is used by the overloaded operator<< to build an identifier reading from
    * a persistent data store
    */
    void initialize(UInt_t bits0to31, UInt_t bits32to63, unsigned int size); 
    
    /// append an int
    void append(unsigned int id);
    
    /// number of single ids which constitute the volume identifier
    Int_t size() const { return m_size;}
    
    /// return a name made up with slash delimiters
    std::string name(const char* delimiter="/")const ;
    
    /// return a long word for sorting 
    //operator int64()const{ return m_value;}
    UInt_t getBits0to31()const{ return m_bits0to31;};
    UInt_t getBits32to63()const{ return m_bits32to63;};
    
    /// access single ids which constitute the volume identifier
    UInt_t operator[](unsigned int) const;
    
private:
    
    /// ROOT does not yet support a machine independent Long64
    /// Splitting the int64 into 2 variables
    /// Internal representation of Volumne Identifier
    UInt_t m_bits0to31;
    UInt_t m_bits32to63;
    
    /// number of single ids which constitute the volume identifier
    UInt_t m_size;
    
    ClassDef(VolumeIdentifier,1) // Volume Identifier Class
};

#endif
