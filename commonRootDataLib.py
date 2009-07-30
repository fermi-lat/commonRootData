# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/commonRootData/commonRootDataLib.py,v 1.1 2008/07/09 21:13:45 glastrm Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['commonRootData'])

    env.Tool('addLibrary', library = env['rootLibs'])

def exists(env):
    return 1;
