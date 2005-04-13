// File and Version Information:
//      $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/src/Relation.cxx,v 1.1.1.1 2002/12/03 17:39:27 heather Exp $
//
// Description:
//                                                
// Author:  Heather Kelly                       

#include "commonRootData/Relation.h"
#include <iostream>
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


