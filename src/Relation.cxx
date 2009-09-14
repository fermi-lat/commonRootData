// File and Version Information:
//      $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/src/Relation.cxx,v 1.3 2006/03/02 17:35:31 heather Exp $
//
// Description:
//                                                
// Author:  Heather Kelly                       

#include "commonRootData/Relation.h"
#include "Riostream.h"
#include "TCollection.h"  // Declares TIter

ClassImp(Relation)

Relation::Relation() {
    Clear();
}

Relation::Relation(TRef key, const TRefArray& valueCol) {
    m_key = key;
    Int_t irel;
    for (irel = 0; irel < valueCol.GetEntries(); irel++) {
        m_valueCol.Add(valueCol.At(irel));
    }
}

Relation::~Relation() {    
    Clear();
}


void Relation::initialize(TRef key, const TRefArray& valueCol) {
    m_key = key;
    Int_t irel;
    for (irel = 0; irel < valueCol.GetEntries(); irel++) {
        m_valueCol.Add(valueCol.At(irel));
}}

void Relation::Clear(Option_t *option) {
    TObject::Clear(option);
    m_key = 0;
    m_valueCol.Clear();
}

void Relation::Print(Option_t *option) const {
    using namespace std;
    TObject::Print(option);
    cout << "Key: ";
    m_key.GetObject()->Print();
    cout << endl;
    
    Int_t irel;
    for (irel = 0; irel < m_valueCol.GetEntries(); irel++) {
        (m_valueCol.At(irel))->Print();
        cout << endl;
    }
}


