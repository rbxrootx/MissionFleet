// Exact recovered VC6 96-bit left shift.
extern "C" __declspec(naked) void Recovered004C5160()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax]
    __asm and ecx, 80000000h
    __asm neg ecx
    __asm sbb ecx, ecx
    __asm neg ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+4]
    __asm and eax, 80000000h
    __asm neg eax
    __asm sbb eax, eax
    __asm neg eax
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx]
    __asm shl edx, 1
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax], edx
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+4]
    __asm shl edx, 1
    __asm or edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax+4], edx
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+8]
    __asm shl edx, 1
    __asm or edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax+8], edx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
