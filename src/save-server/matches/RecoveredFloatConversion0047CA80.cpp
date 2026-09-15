extern "C" void Recovered0047C7F0();
extern "C" void Recovered0047C8D0();
extern "C" void Recovered0047C920();
extern "C" void Recovered0047C950();
extern "C" void Recovered0047C990();
// Exact recovered extended-float to integer conversion routine.
extern "C" __declspec(naked) void Recovered0047CA80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x34
    __asm mov eax, dword ptr [ebp + 8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax + 0xa]
    __asm and ecx, 0x7fff
    __asm sub ecx, 0x3fff
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx + 0xa]
    __asm and eax, 0x8000
    __asm mov dword ptr [ebp - 0x20], eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 6]
    __asm mov dword ptr [ebp - 0x18], edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 2]
    __asm mov dword ptr [ebp - 0x14], ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx]
    __asm shl eax, 0x10
    __asm mov dword ptr [ebp - 0x10], eax
    __asm cmp dword ptr [ebp - 4], 0xffffc001
    __asm jne loc_0047CB10
    __asm mov dword ptr [ebp - 8], 0
    __asm lea ecx, [ebp - 0x18]
    __asm push ecx
    __asm call Recovered0047C950
    __asm add esp, 4
    __asm test eax, eax
    __asm je loc_0047CAF8
    __asm mov dword ptr [ebp - 0x1c], 0
    __asm jmp loc_0047CB0B
loc_0047CAF8:
    __asm lea edx, [ebp - 0x18]
    __asm push edx
    __asm call Recovered0047C920
    __asm add esp, 4
    __asm mov dword ptr [ebp - 0x1c], 2
loc_0047CB0B:
    __asm jmp loc_0047CC5C
loc_0047CB10:
    __asm lea eax, [ebp - 0x18]
    __asm push eax
    __asm lea ecx, [ebp - 0x30]
    __asm push ecx
    __asm call Recovered0047C8D0
    __asm add esp, 8
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm mov eax, dword ptr [edx + 8]
    __asm push eax
    __asm lea ecx, [ebp - 0x18]
    __asm push ecx
    __asm call Recovered0047C7F0
    __asm add esp, 8
    __asm test eax, eax
    __asm je loc_0047CB40
    __asm mov edx, dword ptr [ebp - 4]
    __asm add edx, 1
    __asm mov dword ptr [ebp - 4], edx
loc_0047CB40:
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [eax + 4]
    __asm sub edx, dword ptr [ecx + 8]
    __asm cmp dword ptr [ebp - 4], edx
    __asm jge loc_0047CB70
    __asm lea eax, [ebp - 0x18]
    __asm push eax
    __asm call Recovered0047C920
    __asm add esp, 4
    __asm mov dword ptr [ebp - 8], 0
    __asm mov dword ptr [ebp - 0x1c], 2
    __asm jmp loc_0047CC5C
loc_0047CB70:
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp edx, dword ptr [ecx + 4]
    __asm jg loc_0047CBE0
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov ecx, dword ptr [eax + 4]
    __asm sub ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ebp - 0x34], ecx
    __asm lea edx, [ebp - 0x30]
    __asm push edx
    __asm lea eax, [ebp - 0x18]
    __asm push eax
    __asm call Recovered0047C8D0
    __asm add esp, 8
    __asm mov ecx, dword ptr [ebp - 0x34]
    __asm push ecx
    __asm lea edx, [ebp - 0x18]
    __asm push edx
    __asm call Recovered0047C990
    __asm add esp, 8
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov ecx, dword ptr [eax + 8]
    __asm push ecx
    __asm lea edx, [ebp - 0x18]
    __asm push edx
    __asm call Recovered0047C7F0
    __asm add esp, 8
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov ecx, dword ptr [eax + 0xc]
    __asm add ecx, 1
    __asm push ecx
    __asm lea edx, [ebp - 0x18]
    __asm push edx
    __asm call Recovered0047C990
    __asm add esp, 8
    __asm mov dword ptr [ebp - 8], 0
    __asm mov dword ptr [ebp - 0x1c], 2
    __asm jmp loc_0047CC5C
loc_0047CBE0:
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp ecx, dword ptr [eax]
    __asm jl loc_0047CC2B
    __asm lea edx, [ebp - 0x18]
    __asm push edx
    __asm call Recovered0047C920
    __asm add esp, 4
    __asm mov eax, dword ptr [ebp - 0x18]
    __asm or eax, 0x80000000
    __asm mov dword ptr [ebp - 0x18], eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ecx + 0xc]
    __asm push edx
    __asm lea eax, [ebp - 0x18]
    __asm push eax
    __asm call Recovered0047C990
    __asm add esp, 8
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ecx]
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm add edx, dword ptr [eax + 0x14]
    __asm mov dword ptr [ebp - 8], edx
    __asm mov dword ptr [ebp - 0x1c], 1
    __asm jmp loc_0047CC5C
loc_0047CC2B:
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ebp - 4]
    __asm add edx, dword ptr [ecx + 0x14]
    __asm mov dword ptr [ebp - 8], edx
    __asm mov eax, dword ptr [ebp - 0x18]
    __asm and eax, 0x7fffffff
    __asm mov dword ptr [ebp - 0x18], eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ecx + 0xc]
    __asm push edx
    __asm lea eax, [ebp - 0x18]
    __asm push eax
    __asm call Recovered0047C990
    __asm add esp, 8
    __asm mov dword ptr [ebp - 0x1c], 0
loc_0047CC5C:
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ecx + 0xc]
    __asm add edx, 1
    __asm mov eax, 0x20
    __asm sub eax, edx
    __asm mov dword ptr [ebp - 0xc], eax
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm shl edx, cl
    __asm mov eax, dword ptr [ebp - 0x18]
    __asm or eax, edx
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm neg ecx
    __asm sbb ecx, ecx
    __asm and ecx, 0x80000000
    __asm or eax, ecx
    __asm mov dword ptr [ebp - 0x24], eax
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm cmp dword ptr [edx + 0x10], 0x40
    __asm jne loc_0047CCAA
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp - 0x24]
    __asm mov dword ptr [eax + 4], ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [ebp - 0x14]
    __asm mov dword ptr [edx], eax
    __asm jmp loc_0047CCBB
loc_0047CCAA:
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm cmp dword ptr [ecx + 0x10], 0x20
    __asm jne loc_0047CCBB
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [ebp - 0x24]
    __asm mov dword ptr [edx], eax
loc_0047CCBB:
    __asm mov eax, dword ptr [ebp - 0x1c]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
