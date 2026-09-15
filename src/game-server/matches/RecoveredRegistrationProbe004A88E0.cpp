// Exact registration/probe adapter used by static initialization.
extern "C" void ProbeCore004A8820();
extern "C" __declspec(naked) void Recovered004A88E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call ProbeCore004A8820
    __asm add esp, 4
    __asm neg eax
    __asm sbb eax, eax
    __asm neg eax
    __asm dec eax
    __asm pop ebp
    __asm ret
}
