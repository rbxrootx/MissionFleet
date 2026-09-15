
// Exact recovered shared map/framework lookup.
extern "C" __declspec(naked) void Recovered00493311()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 0xffff
    __asm and eax, 0x4000
    __asm test eax, eax
    __asm je loc_00493343
    __asm mov cx, word ptr [ebp + 0xc]
    __asm and cx, 0xbfff
    __asm mov word ptr [ebp + 0xc], cx
    __asm mov dx, word ptr [ebp + 0xc]
    __asm or dl, 0x40
    __asm mov word ptr [ebp + 0xc], dx
loc_00493343:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 0xffff
    __asm cmp eax, 8
    __asm jne loc_00493356
    __asm mov word ptr [ebp + 0xc], 0xe
loc_00493356:
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm and ecx, 0xffff
    __asm and ecx, 0x8000
    __asm test ecx, ecx
    __asm je loc_0049337E
    __asm mov word ptr [ebp - 4], 8
    __asm mov dx, word ptr [ebp + 0xc]
    __asm and dx, 0x7fff
    __asm mov word ptr [ebp + 0xc], dx
    __asm jmp loc_00493399
loc_0049337E:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 0xffff
    __asm cmp eax, 9
    __asm jne loc_00493393
    __asm mov word ptr [ebp - 4], 8
    __asm jmp loc_00493399
loc_00493393:
    __asm mov word ptr [ebp - 4], 4
loc_00493399:
    __asm mov cl, byte ptr [ebp + 0xc]
    __asm mov byte ptr [ebp - 8], cl
    __asm mov byte ptr [ebp - 7], 0
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm lea eax, [ebp - 8]
    __asm push eax
    __asm push 0
    __asm push 0
    __asm mov cx, word ptr [ebp - 4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0x60]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
