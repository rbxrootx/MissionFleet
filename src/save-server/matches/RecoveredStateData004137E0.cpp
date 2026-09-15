// Exact recovered state/data leaf.
extern "C" __declspec(naked) void Recovered004137E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 44h
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm push ecx
    __asm lea edi, dword ptr [ebp-44h]
    __asm mov ecx, 11h
    __asm mov eax, 0cccccccch
    __asm rep stosd
    __asm pop ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [eax], ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+12]
    __asm mov dword ptr [edx+4], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+16]
    __asm mov dword ptr [ecx+8], edx
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 12
}
