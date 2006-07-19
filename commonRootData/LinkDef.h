/** @file LinkDef.h
    @brief for rootcint
 $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/commonRootData/LinkDef.h,v 1.10 2006/07/06 20:34:26 heather Exp $

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
#pragma link C++ class AcdId+;
#pragma link C++ class AcdGapId+;
#pragma link C++ class CalXtalId+;
#pragma link C++ class TowerId+;
#pragma link C++ class commonRootData::TkrId+;
#pragma link C++ class VolumeIdentifier+;
//#pragma link C++ class BadPointerException;

#pragma link C++ class commonRootData::TaggerHit+;
#pragma link C++ class commonRootData::ScalerHit+;
#pragma link C++ class commonRootData::QdcHit+;

#pragma link C++ class RootObj<Int_t>+;
#pragma link C++ class RootObj<Double_t>+;
#pragma link C++ class FileHeader+;

#endif
