// Exact recovered default rectangle initializer.
extern "C" unsigned char RectState00529EEA;
extern "C" void RectCall00535D5F();
void Target00529EE0();
__declspec(naked) void Target00529EE0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm push 0
    __asm push 80000000h
    __asm push 80000000h
    __asm mov ecx, offset RectState00529EEA
    __asm call RectCall00535D5F
    __asm pop ebp
    __asm ret
}
