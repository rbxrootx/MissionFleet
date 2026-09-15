// Exact recovered default rectangle initializer.
extern "C" unsigned char RectState005115EA;
extern "C" void RectCall005321D5();
void Target005115E0();
__declspec(naked) void Target005115E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm push 0
    __asm push 80000000h
    __asm push 80000000h
    __asm mov ecx, offset RectState005115EA
    __asm call RectCall005321D5
    __asm pop ebp
    __asm ret
}
