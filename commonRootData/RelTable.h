#ifndef ROOT_RELTABLE_H
#define ROOT_RELTABLE_H

#include "TObject.h"
#include "Relation.h"
#include "TObjArray.h"


/** @class RelTable
* @brief GLAST Relational Table class.
*
*  
*  $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/RelTable.h,v 1.1.1.1 2002/12/02 21:41:30 heather Exp $
*/

class RelTable : public TObject  
{
public:
    
    RelTable();
    
    RelTable(const RelTable& copy);
    
    virtual ~RelTable();
    
    /// clear lists, free pointers, etc., after read from / write to file
    void Clear(Option_t *option ="");
    
    void Print(Option_t *option="") const;
    
    void addRelation(Relation *rel);
    
    const Relation* getRelByFirst(const TObject *key) const;
    
    const TObjArray* getRelationTable() const { return m_table; };
    
    
private:
    
    TObjArray *m_table;
    
    ClassDef(RelTable,1) // Relational Table Class
};

#endif
