/** @file LinkDef.h
    @brief for rootcint
 $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/LinkDef.h,v 1.6 2004/12/03 23:32:10 jrb Exp $

*/

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace commonRootData;
#pragma link C++ class RelTable+;
#pragma link C++ class Relation+;
#pragma link C++ class BaseException;
#pragma link C++ class IndexOutOfBoundsException;
#pragma link C++ class commonRootData::AcdId+;
#pragma link C++ class commonRootData::CalXtalId+;
#pragma link C++ class commonRootData::TowerId+;
#pragma link C++ class commonRootData::TkrId+;
#pragma link C++ class commonRootData::VolumeIdentifier+;
//#pragma link C++ class BadPointerException;

#pragma link C++ class RootObj<Int_t>+;
#pragma link C++ class RootObj<Double_t>+;
#pragma link C++ class FileHeader+;

#endif
