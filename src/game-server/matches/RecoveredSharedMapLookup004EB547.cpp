extern "C" void Call004EB9F0();
// Exact recovered shared map/framework lookup.
extern "C" __declspec(naked) void Recovered004EB547()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm cmp dword ptr [eax + 4], 0
    __asm jne loc_004EB55D
    __asm xor eax, eax
    __asm jmp loc_004EB5AA
loc_004EB55D:
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call Call004EB9F0
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm xor edx, edx
    __asm div dword ptr [ecx + 8]
    __asm mov dword ptr [ebp - 8], edx
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx + 4]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax + ecx*4]
    __asm mov dword ptr [ebp - 4], edx
    __asm jmp loc_004EB58D
loc_004EB585:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
loc_004EB58D:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004EB5A8
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 4]
    __asm cmp eax, dword ptr [ebp + 8]
    __asm jne loc_004EB5A6
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ecx + 8]
    __asm jmp loc_004EB5AA
loc_004EB5A6:
    __asm jmp loc_004EB585
loc_004EB5A8:
    __asm xor eax, eax
loc_004EB5AA:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
