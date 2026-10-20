// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A87E0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_587a87e0_587A87E0() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 8], eax
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        mov edi, dword ptr [esp + 1ch]
        test esi, esi
        ; Exact mapped bytes 74 1D: je 0x587a8819
        __asm _emit 0x74
        __asm _emit 0x1d
        push 8
        lea eax, [esp + 0ch]
        push eax
        push esi
        ; Exact mapped bytes E8 E7 EA FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes E8 9A 6D FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 0D 11 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587a883d
        __asm _emit 0x74
        __asm _emit 0x13
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 8]
        xor ecx, esp
        ; Exact mapped bytes E8 17 88 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ret
        movzx ecx, byte ptr [esp + 0ch]
        movzx eax, byte ptr [esp + 0dh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 0eh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 0fh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 9]
        push ecx
        movzx ecx, byte ptr [esp + 0ch]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 0eh]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 0fh]
        shl ecx, 8
        add ecx, eax
        push ecx
        push edi
        push esi
        ; Exact mapped bytes E8 24 87 FF FF: call 0x587a0fb0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        add esp, 10h
        mov eax, 3
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 AF 87 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ret
    }
}
