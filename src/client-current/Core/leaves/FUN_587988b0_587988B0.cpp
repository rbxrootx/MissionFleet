// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587988B0 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_587988b0_587988B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889165dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov dword ptr [ebp - 10h], edi
        mov esi, dword ptr [ebp + 8]
        lea eax, [edi + 4]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [edi], 58894ccch
        push eax
        ; Exact mapped bytes 66 0F D6 00: movq qword ptr [eax], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x00
        lea eax, [esi + 4]
        push eax
        ; Exact mapped bytes E8 69 4A 0B 00: call 0x5884d360
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x4a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 8
        lea eax, [esi + 0ch]
        mov dword ptr [ebp - 4], 0
        push eax
        lea ecx, [edi + 0ch]
        mov dword ptr [edi], 588b6c94h
        ; Exact mapped bytes E8 0D 11 D1 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x11
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [edi], 588b6cach
        mov eax, edi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
