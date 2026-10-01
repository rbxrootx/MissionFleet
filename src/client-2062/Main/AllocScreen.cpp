// Unverified behavior-level candidate for 2062 Main.dll AllocScreen.
// Do not count this function as a byte match until its compiler output is exact.
// The declarations intentionally leave the constructor and globals unresolved;
// their addresses are supplied by the byte-match verification manifest.
struct Screen {
    Screen* ConstructScreen(void* hostConfig);
};

extern void* __cdecl AllocateScreenObject(unsigned int size);
extern Screen* g_screen_current;
extern Screen* g_screen_renderer;

extern "C" void __cdecl AllocScreen(void* unused, void* hostConfig)
{
    Screen* screen = static_cast<Screen*>(AllocateScreenObject(0x7c));
    if (screen != 0) {
        screen = screen->ConstructScreen(hostConfig);
        g_screen_current = screen;
        g_screen_renderer = screen;
        return;
    }

    g_screen_current = screen;
    g_screen_renderer = screen;
}
