extern "C" void *ResourceAssertFile005CBCC4;
extern "C" void *ResourceIAT005E2208;
extern "C" void Recovered00534A00();
extern "C" void Recovered00573516();
// Exact recovered resource-record lookup helper.
extern "C" __declspec(naked) void Recovered005735B2()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp - 4], 0
loc_005735C2:
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_005736AB
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Recovered00573516
    __asm mov dword ptr [ebp - 0xc], eax
    __asm mov dword ptr [ebp - 0x10], 0
    __asm jmp loc_005735F3
loc_005735EA:
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm add eax, 1
    __asm mov dword ptr [ebp - 0x10], eax
loc_005735F3:
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm cmp ecx, dword ptr [ebp - 0xc]
    __asm jae loc_00573695
    __asm mov edx, dword ptr [ebp - 8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx + 0xc]
    __asm cmp eax, 0xfff
    __asm je loc_00573687
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [edx]
    __asm push eax
    __asm call dword ptr [ResourceIAT005E2208]
    __asm test eax, eax
    __asm jne loc_00573687
    __asm mov ecx, dword ptr [ebp - 8]
    __asm cmp dword ptr [ecx + 4], -1
    __asm jne loc_0057367F
loc_0057362C:
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm add edx, 1
    __asm and edx, 0xffff
    __asm mov eax, dword ptr [ebp - 4]
    __asm and eax, 0xffff
    __asm shl eax, 0x10
    __asm or edx, eax
    __asm cmp edx, -1
    __asm jne loc_0057365E
    __asm push 0xd5
    __asm push offset ResourceAssertFile005CBCC4
    __asm call Recovered00534A00
    __asm test eax, eax
    __asm je loc_0057365E
    __asm _emit 0cch
loc_0057365E:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne loc_0057362C
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm add eax, 1
    __asm and eax, 0xffff
    __asm mov edx, dword ptr [ebp - 4]
    __asm and edx, 0xffff
    __asm shl edx, 0x10
    __asm or eax, edx
    __asm jmp loc_005736AE
loc_0057367F:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [eax + 4]
    __asm jmp loc_005736AE
loc_00573687:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm add ecx, 0x20
    __asm mov dword ptr [ebp - 8], ecx
    __asm jmp loc_005735EA
loc_00573695:
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [edx]
    __asm mov dword ptr [ebp + 8], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp - 4], ecx
    __asm jmp loc_005735C2
loc_005736AB:
    __asm or eax, 0xffffffff
loc_005736AE:
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
