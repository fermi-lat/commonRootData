#ifndef ROOT_RELATION_H
#define ROOT_RELATION_H

#include "TObject.h"
#include "TRef.h"
#include "TRefArray.h"

/** @class Relation
* @brief GLAST Relation class.
*
*  
*  $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/Relation.h,v 1.1.1.1 2002/12/02 21:41:30 heather Exp $
*/

class Relation : public TObject  
{
public:
    
    Relation();
    
    Relation(TRef key, const TRefArray& valueCol);
    
    void initialize(TRef key, const TRefArray& valueCol);
    
    virtual ~Relation();
    
    /// clear lists, free pointers, etc., after read from / write to file
    void Clear(Option_t *option ="");
    
    void Print(Option_t *option="") const;
    
    const TObject* getKey() const { return m_key.GetObject(); };
    
    const TRefArray& getValueCol() const { return m_valueCol; };
    
private:
    
    TRef m_key;
    TRefArray m_valueCol;
    
    ClassDef(Relation,1) // Relation Class
};

#endif
