// Exact recovered command-target constructor chain.
extern "C" void Parent00530990();
extern "C" int Vtable00583140;
extern "C" __declspec(naked) void Recovered004F7CE0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov ecx, dword ptr [ebp-4]
    __asm call Parent00530990
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax], offset Vtable00583140
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+4], 1
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+8], 0
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+12], 0
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+16], 0
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+20], 1
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+24], 0
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
