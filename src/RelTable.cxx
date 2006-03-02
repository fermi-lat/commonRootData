// File and Version Information:
//      $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/src/RelTable.cxx,v 1.2 2005/04/13 19:49:50 heather Exp $
//
// Description:
//                                                
// Author:  Heather Kelly                       

#include "commonRootData/RelTable.h"
#include "Riostream.h"
#include "TCollection.h"  // Declares TIter

ClassImp(RelTable)

RelTable::RelTable() {
    m_table = 0;
    Clear();
}

RelTable::RelTable(const RelTable& copy) : TObject(copy) {
    Clear();
    TIter it(copy.m_table);
    Relation *rel = 0;
    while ((rel = (Relation*)it.Next())) {
        addRelation(rel);
    }
}

RelTable::~RelTable() {    
    Clear();
}


void RelTable::addRelation(Relation *rel) {
    if (!m_table) m_table = new TObjArray();
    m_table->Add(rel);
}

const Relation* RelTable::getRelByFirst(const TObject *key) const {
    TIter it(m_table);
    Relation *rel = 0;
    while ((rel = (Relation*)it.Next())) {
        if (rel->getKey() == key) return rel;
    }
    
    return 0;
}

void RelTable::Clear(Option_t *option) {
    if (m_table) m_table->Clear();
    m_table = 0;
}

void RelTable::Print(Option_t *option) const {
    using namespace std;
    TObject::Print(option);
    TIter it(m_table);
    Relation *rel = 0;
    while ((rel = (Relation*)it.Next())) {
        rel->Print();
    }
}


