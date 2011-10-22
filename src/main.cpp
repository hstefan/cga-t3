#include <Ogre.h>

#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32 && !defined(_DEBUG)
    INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT )
#else

#include <iostream>
    int main(int argc, char *argv[])
#endif
    {
#ifdef _DEBUG
        std::cout << "Hello World" << std::endl;
#endif
    }
