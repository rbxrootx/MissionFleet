// Original x86 member ABI: ECX is the object under construction.
// Initialize only its leading vtable pointer and return with EAX unchanged.
extern "C" char Vtable00582104;
extern "C" __declspec(naked) void Recovered005309A7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax], offset Vtable00582104
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
