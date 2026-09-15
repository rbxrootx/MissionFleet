// Exact recovered command-target constructor chain.
extern "C" int Vtable00582104;
extern "C" __declspec(naked) void Recovered00530990()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax], offset Vtable00582104
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
