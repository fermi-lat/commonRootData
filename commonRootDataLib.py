# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/commonRootData/commonRootDataLib.py,v 1.2 2009/07/30 21:06:13 jrb Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['commonRootData'])
        if env['PLATFORM']=='win32' and env.get('CONTAINERNAME','')=='GlastRelease':
	    env.Tool('findPkgPath', package = 'commonRootData') 

    env.Tool('addLibrary', library = env['rootLibs'])

def exists(env):
    return 1;
