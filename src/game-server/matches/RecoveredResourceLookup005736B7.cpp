extern "C" void Recovered00573516();
extern "C" void Recovered005735B2();
// Exact recovered resource-record lookup helper.
extern "C" __declspec(naked) void Recovered005736B7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x14
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call dword ptr [edx + 0x38]
    __asm mov dword ptr [ebp - 8], eax
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm jne loc_00573748
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [ebp - 0xc], eax
loc_005736D7:
    __asm cmp dword ptr [ebp - 0xc], 0
    __asm je loc_00573748
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov dword ptr [ebp - 4], edx
loc_005736E6:
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0x18], -1
    __asm je loc_0057373E
    __asm mov ecx, dword ptr [ebp - 4]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx + 0xc]
    __asm cmp edx, 0xfff
    __asm jne loc_00573733
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov dword ptr [ebp + 0xc], ecx
    __asm cmp dword ptr [ebp + 0xc], -1
    __asm jne loc_0057372E
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 8]
    __asm push ecx
    __asm call Recovered005735B2
    __asm mov dword ptr [ebp + 0xc], eax
    __asm cmp dword ptr [ebp + 0xc], -1
    __asm jne loc_0057372E
    __asm xor eax, eax
    __asm jmp loc_0057382A
loc_0057372E:
    __asm jmp loc_00573825
loc_00573733:
    __asm mov edx, dword ptr [ebp - 4]
    __asm add edx, 0x20
    __asm mov dword ptr [ebp - 4], edx
    __asm jmp loc_005736E6
loc_0057373E:
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm jmp loc_005736D7
loc_00573748:
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm jle loc_005737DE
    __asm mov dword ptr [ebp - 0x10], 0
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [ebp - 0xc], edx
loc_0057375F:
    __asm cmp dword ptr [ebp - 0xc], 0
    __asm je loc_0057378D
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm shr eax, 0x10
    __asm and eax, 0xffff
    __asm and eax, 0xffff
    __asm cmp dword ptr [ebp - 0x10], eax
    __asm jae loc_0057378D
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 0xc], edx
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm add eax, 1
    __asm mov dword ptr [ebp - 0x10], eax
    __asm jmp loc_0057375F
loc_0057378D:
    __asm cmp dword ptr [ebp - 0xc], 0
    __asm je loc_005737DE
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm push ecx
    __asm call Recovered00573516
    __asm mov dword ptr [ebp - 0x14], eax
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm and edx, 0xffff
    __asm cmp edx, dword ptr [ebp - 0x14]
    __asm ja loc_005737DE
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 0xffff
    __asm shl eax, 5
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [ecx + 4]
    __asm lea eax, [edx + eax - 0x20]
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 4], -1
    __asm je loc_005737D9
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 4]
    __asm cmp eax, dword ptr [ebp + 0xc]
    __asm jne loc_005737DE
loc_005737D9:
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_0057382A
loc_005737DE:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov dword ptr [ebp - 0xc], ecx
loc_005737E4:
    __asm cmp dword ptr [ebp - 0xc], 0
    __asm je loc_00573821
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx + 4]
    __asm mov dword ptr [ebp - 4], eax
loc_005737F3:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x18], -1
    __asm je loc_00573817
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 4]
    __asm cmp eax, dword ptr [ebp + 0xc]
    __asm jne loc_0057380C
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_0057382A
loc_0057380C:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 0x20
    __asm mov dword ptr [ebp - 4], ecx
    __asm jmp loc_005737F3
loc_00573817:
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx]
    __asm mov dword ptr [ebp - 0xc], eax
    __asm jmp loc_005737E4
loc_00573821:
    __asm xor eax, eax
    __asm jmp loc_0057382A
loc_00573825:
    __asm jmp loc_00573748
loc_0057382A:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
