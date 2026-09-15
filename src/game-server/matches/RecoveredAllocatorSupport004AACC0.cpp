// Exact recovered allocator/runtime support bridge.
extern "C" void Call004AACF0();
extern "C" void Call004B51F0();
extern "C" void Call004B5290();
extern "C" __declspec(naked) void Recovered004AACC0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 9
    __asm call Call004B51F0
    __asm add esp, 4
    __asm mov eax, dword ptr [ebp+12]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm call Call004AACF0
    __asm add esp, 8
    __asm push 9
    __asm call Call004B5290
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
