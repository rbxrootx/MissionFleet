
// Exact recovered shared map/framework lookup.
extern "C" __declspec(naked) void Recovered0044BBE1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call dword ptr [edx + 0x44]
    __asm mov dword ptr [ebp - 4], eax
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm xor ecx, ecx
    __asm cmp dword ptr [eax], 0
    __asm setne cl
    __asm mov dword ptr [ebp - 8], ecx
loc_0044BC03:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_0044BC8F
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 4]
    __asm mov dword ptr [ebp - 0xc], eax
loc_0044BC16:
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm cmp dword ptr [ecx + 0x18], -1
    __asm je loc_0044BC82
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov ecx, dword ptr [edx + 4]
    __asm cmp ecx, dword ptr [eax + 4]
    __asm jne loc_0044BC77
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx + 0x18]
    __asm cmp eax, dword ptr [ebp - 8]
    __asm jne loc_0044BC77
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm cmp dword ptr [ecx + 0x24], -1
    __asm jne loc_0044BC5C
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm cmp dword ptr [edx + 0x20], -1
    __asm je loc_0044BC55
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov ecx, dword ptr [eax + 0x20]
    __asm cmp ecx, dword ptr [ebp + 0xc]
    __asm jne loc_0044BC5A
loc_0044BC55:
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm jmp loc_0044BC91
loc_0044BC5A:
    __asm jmp loc_0044BC77
loc_0044BC5C:
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx + 0x20]
    __asm cmp eax, dword ptr [ebp + 0xc]
    __asm ja loc_0044BC77
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm cmp edx, dword ptr [ecx + 0x24]
    __asm ja loc_0044BC77
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm jmp loc_0044BC91
loc_0044BC77:
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm add eax, 0x28
    __asm mov dword ptr [ebp - 0xc], eax
    __asm jmp loc_0044BC16
loc_0044BC82:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
    __asm jmp loc_0044BC03
loc_0044BC8F:
    __asm xor eax, eax
loc_0044BC91:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
