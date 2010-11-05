#ifndef ROOT_RELATION_H
#define ROOT_RELATION_H

#include "TObject.h"
#include "TRef.h"
#include "TRefArray.h"

/** @class Relation
* @brief GLAST Relation class.
*
*  
*  $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/Relation.h,v 1.2 2010/11/03 19:55:16 usher Exp $
*/

class Relation : public TObject  
{
public:
    
    Relation();
    
    Relation(TRef& first, TRef& second, const TObjArray& infos);
    
    void initialize(TRef& first, TRef& second, const TObjArray& infos);
    
    virtual ~Relation();
    
    /// clear lists, free pointers, etc., after read from / write to file
    void Clear(Option_t *option ="");
    
    void Print(Option_t *option="") const;
    
    const TObject* getFirst()   const {return m_first.GetObject();};
    
    const TObject* getSecond()  const {return m_second.GetObject();};
    
    const TObjArray& getInfos() const {return m_infos; };
    
private:
    
    TRef      m_first;
    TRef      m_second;
    TObjArray m_infos;
    
    ClassDef(Relation,2) // Relation Class
};

#endif
