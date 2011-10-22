#include <Ogre.h>
#include "core/debugging/debug.hpp"

#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32 && !defined(_DEBUG)
    INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT )
#else
    int main(int argc, char *argv[])
#endif
    {
        DEBUG_ERR("FooBar\n");
    }
