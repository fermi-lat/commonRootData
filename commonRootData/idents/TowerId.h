#ifndef commonRootData_GLAST_TOWERID_H
#define commonRootData_GLAST_TOWERID_H 1

#include "TObject.h"
#include <string>

/** @class TowerId
 * @brief ROOT version of the Tower identifier following Ritz specs.
 *
 * $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/idents/TowerId.h,v 1.4 2005/04/18 05:51:52 heather Exp $
*/
class TowerId: public TObject
{
public:
    
/*! Number of Y towers is used for the tower arithmetic
Luckily, this works for the BTEM/BFEM, because the tower
id is always zero anyway. 
This won't necessarily work for the 2x2 configuration,
unless we agree to number the towers 0, 1, 4, 5.
    */
    enum {xNum=4, yNum=4}; // not likely to change again
    
    //! create from another Id (0..15)
    TowerId (UShort_t id = 0);
    
    //! create from x, y indices (each 0..3)
    TowerId (UInt_t ix, UInt_t iy);

    ~TowerId() { };

    void Clear(Option_t *option ="");

    Bool_t CompareInRange( const TowerId &, const std::string & ="unknown TowerId" ) const ; // for tests

    void Print(Option_t *option="") const;

    //! access the id itself
    Int_t id () const { return m_id; }
    
    //! access to the x index (0..3)
    Int_t ix () const { return (m_id % xNum); }
    
    //! access to the y index (0..3)
    Int_t iy () const { return (m_id / yNum); }
    
    //! is this module a neighbor?
    Bool_t neighbor (const TowerId& n) const;
    
private:
    UShort_t m_id;
    
    ClassDef(TowerId,1)
};

#endif // digiRootData_GLAST_TOWERID_H

