// Exact recovered 16-byte OLE variant detach operation.
extern "C" __declspec(naked) void Recovered0049D2F7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 20
    __asm mov dword ptr [ebp-20], ecx
    __asm mov eax, dword ptr [ebp-20]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp-16], ecx
    __asm mov edx, dword ptr [eax+4]
    __asm mov dword ptr [ebp-12], edx
    __asm mov ecx, dword ptr [eax+8]
    __asm mov dword ptr [ebp-8], ecx
    __asm mov edx, dword ptr [eax+12]
    __asm mov dword ptr [ebp-4], edx
    __asm mov eax, dword ptr [ebp-20]
    __asm mov word ptr [eax], 0
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ebp-16]
    __asm mov dword ptr [ecx], edx
    __asm mov eax, dword ptr [ebp-12]
    __asm mov dword ptr [ecx+4], eax
    __asm mov edx, dword ptr [ebp-8]
    __asm mov dword ptr [ecx+8], edx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+12], eax
    __asm mov eax, dword ptr [ebp+8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
