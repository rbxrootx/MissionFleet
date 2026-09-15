// Preserve a pending WM_QUIT while the CRT assertion reporter runs.
// Explicit 32-bit MSG layout avoids dependence on host SDK headers.
struct RecoveredMessage {
    unsigned window, message, wParam;
    long lParam;
    unsigned time;
    long x, y;
};
extern "C" __declspec(dllimport) int __stdcall PeekMessageA(
    RecoveredMessage *, void *, unsigned, unsigned, unsigned);
extern "C" __declspec(dllimport) void __stdcall PostQuitMessage(int);
extern "C" int __cdecl Report004B0B30(int, const char *, int, const char *, const char *, ...);
extern "C" int __stdcall Recovered00534A00(const char *file, int line)
{
    int result;
    int hadQuit;
    RecoveredMessage message;
    hadQuit = PeekMessageA(&message, 0, 0x12, 0x12, 1);
    result = Report004B0B30(2, file, line, 0, 0);
    if (hadQuit != 0)
        PostQuitMessage(message.wParam);
    return result;
}
