
#ifndef ROOT_QdcHit_H
#define ROOT_QdcHit_H

#include "TObject.h"

/** @class QdcHit
 * @brief The digitization ancillary data for beamtest 2006  
 * 
 * $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/adf/QdcHit.h,v 1.1 2006/07/06 20:34:26 heather Exp $
*/

namespace commonRootData {

class QdcHit: public TObject {

public:
    
    QdcHit();

    QdcHit(UInt_t channel, UInt_t pulseHeight, UInt_t module, Bool_t isPedSubtracted);

    QdcHit(const QdcHit& copy);

    void initialize(UInt_t channel, UInt_t pulseHeight, UInt_t module,
                    Bool_t isPedSubtracted);

    QdcHit& operator=(const QdcHit& copy);

    virtual ~QdcHit();

    void Clear(Option_t *option ="");

    void Print(Option_t *option="") const;

    UInt_t getChannel() const { return m_channel; }
    UInt_t getPulseHeight() const { return m_pulseHeight; }
    Bool_t isPedestalSubtracted() const { return m_isPedestalSubtracted; }
    UInt_t getModule() const { return m_module; }

    Bool_t CompareInRange( const QdcHit &ref, const std::string& name="" ) const;

private:

    UInt_t m_channel;
    UInt_t m_pulseHeight;
    UInt_t m_module;
    Bool_t m_isPedestalSubtracted;

    ClassDef(QdcHit,2) // Digitization Ancillary data beamtest 2006
};

} //end namespace

#endif
