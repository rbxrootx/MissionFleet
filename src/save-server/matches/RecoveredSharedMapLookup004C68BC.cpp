extern "C" void Call004C6D80();
// Exact recovered shared map/framework lookup.
extern "C" __declspec(naked) void Recovered004C68BC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov ax, word ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call004C6D80
    __asm mov ecx, dword ptr [ebp - 8]
    __asm xor edx, edx
    __asm div dword ptr [ecx + 8]
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [eax], edx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm cmp dword ptr [ecx + 4], 0
    __asm jne loc_004C68EC
    __asm xor eax, eax
    __asm jmp loc_004C692C
loc_004C68EC:
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov eax, dword ptr [edx + eax*4]
    __asm mov dword ptr [ebp - 4], eax
    __asm jmp loc_004C6907
loc_004C68FF:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
loc_004C6907:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004C692A
    __asm mov eax, dword ptr [ebp - 4]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax + 4]
    __asm mov edx, dword ptr [ebp + 8]
    __asm and edx, 0xffff
    __asm cmp ecx, edx
    __asm jne loc_004C6928
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004C692C
loc_004C6928:
    __asm jmp loc_004C68FF
loc_004C692A:
    __asm xor eax, eax
loc_004C692C:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
