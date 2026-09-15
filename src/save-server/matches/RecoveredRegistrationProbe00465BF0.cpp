// Exact registration/probe adapter used by static initialization.
extern "C" void ProbeCore00465B30();
extern "C" __declspec(naked) void Recovered00465BF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call ProbeCore00465B30
    __asm add esp, 4
    __asm neg eax
    __asm sbb eax, eax
    __asm neg eax
    __asm dec eax
    __asm pop ebp
    __asm ret
}
