# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/commonRootData/SConscript,v 1.5 2009/07/30 21:57:32 jrb Exp $
# Authors: Heather Kelly <heather@milkyway.gsfc.nasa.gov>
# Version: commonRootData-02-15-05
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

libEnv.Tool('commonRootDataLib', depsOnly = 1)
commonRootDataRootcint =libEnv.Rootcint('commonRootData/commonRootData_rootcint',
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
                                         includes = ['.'])


commonRootDataLib = libEnv.SharedLibrary('commonRootData',
                                         listFiles(['src/*.cxx',
                                                    'src/idents/*.cxx',
                                                    'src/adf/*.cxx']) + ['commonRootData/commonRootData_rootcint.cxx'])

libEnv['rootcint_node'] = commonRootDataRootcint

libEnv.Tool('registerTargets', package = 'commonRootData',
            rootcintSharedCxts = [[commonRootDataLib, libEnv]],
            includes = listFiles(['commonRootData/*'], recursive = True)
            )





