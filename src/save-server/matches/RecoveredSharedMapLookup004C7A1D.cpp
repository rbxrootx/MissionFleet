extern "C" void Call004C7F30();
// Exact recovered shared map/framework lookup.
extern "C" __declspec(naked) void Recovered004C7A1D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call004C7F30
    __asm mov ecx, dword ptr [ebp - 8]
    __asm xor edx, edx
    __asm div dword ptr [ecx + 8]
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [eax], edx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm cmp dword ptr [ecx + 4], 0
    __asm jne loc_004C7A4C
    __asm xor eax, eax
    __asm jmp loc_004C7A81
loc_004C7A4C:
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov eax, dword ptr [edx + eax*4]
    __asm mov dword ptr [ebp - 4], eax
    __asm jmp loc_004C7A67
loc_004C7A5F:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
loc_004C7A67:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004C7A7F
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 4]
    __asm cmp ecx, dword ptr [ebp + 8]
    __asm jne loc_004C7A7D
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004C7A81
loc_004C7A7D:
    __asm jmp loc_004C7A5F
loc_004C7A7F:
    __asm xor eax, eax
loc_004C7A81:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
