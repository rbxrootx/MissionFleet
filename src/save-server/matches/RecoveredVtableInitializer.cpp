// Original x86 member ABI: ECX is the object under construction.
// Initialize only its leading vtable pointer and return with EAX unchanged.
extern "C" char Vtable00634F74;
extern "C" __declspec(naked) void Recovered00449DB0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax], offset Vtable00634F74
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
