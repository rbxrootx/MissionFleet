// Reconstructed 2062 Main.dll screen factory. Ghidra shows that a zeroed
// allocation failure clears both globals; success stores the constructor's
// returned screen pointer into each global.
struct Screen {
    Screen* ConstructScreen(void* hostConfig);
};

extern void* __cdecl AllocateScreenObject(unsigned int size);
extern Screen* g_screen_current;
extern Screen* g_screen_renderer;

extern "C" void __cdecl AllocScreen(void* unused, void* hostConfig)
{
    Screen* screen = static_cast<Screen*>(AllocateScreenObject(0x7c));
    Screen* initialized = screen != 0
        ? screen->ConstructScreen(hostConfig)
        : 0;
    g_screen_current = initialized;
    g_screen_renderer = initialized;
}
