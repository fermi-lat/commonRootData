# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/commonRootData/SConscript,v 1.13 2010/11/03 19:55:16 usher Exp $
# Authors: Heather Kelly <heather@milkyway.gsfc.nasa.gov>
# Version: commonRootData-02-16-01
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

locInc = listFiles(['commonRootData/*'], recursive=True)
libEnv.Tool('addLinkDeps', package='commonRootData', toBuild='rootlib')
commonRootDataRootcint = libEnv.Rootcint('commonRootData/commonRootData_rootcint.cxx',
                                         ['commonRootData/RelTable.h',
                                          'commonRootData/Relation.h',
                                          'commonRootData/RootDataUtil.h',
                                          'commonRootData/RootObj.h',
                                          'commonRootData/FileHeader.h',
                                          'commonRootData/Exception.h',
                                          'commonRootData/idents/VolumeIdentifier.h',
                                          'commonRootData/idents/AcdId.h',
                                          'commonRootData/idents/AcdGapId.h',
                                          'commonRootData/idents/CalXtalId.h',
                                          'commonRootData/idents/TkrId.h',
                                          'commonRootData/idents/TowerId.h',
                                          'commonRootData/adf/TaggerHit.h',
                                          'commonRootData/adf/ScalerHit.h',
                                          'commonRootData/adf/QdcHit.h',
                                          'commonRootData/LinkDef.h'],
                                         localIncludes=locInc,
                                         packageName='commonRootData',
                                         includes = ['.'])

libEnv['rootcint_node'] = commonRootDataRootcint

commonRootDataLib = libEnv.RootDynamicLibrary('commonRootData',
                                              listFiles(['src/*.cxx',
                                                         'src/idents/*.cxx',
                                                         'src/adf/*.cxx']) + ['commonRootData/commonRootData_rootcint.cxx'])

libEnv['rootcint_node'] = commonRootDataRootcint

libEnv.Tool('registerTargets', package = 'commonRootData',
            rootcintSharedCxts = [[commonRootDataLib, libEnv]],
            includes = listFiles(['commonRootData/*'], recursive = True)
            )





