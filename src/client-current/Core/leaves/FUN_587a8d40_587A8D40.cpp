// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A8D40 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_587a8d40_587A8D40() {
    __asm {
        sub esp, 10h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0ch], eax
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push edi
        mov edi, dword ptr [esp + 1ch]
        test edi, edi
        ; Exact mapped bytes 74 1D: je 0x587a8d79
        __asm _emit 0x74
        __asm _emit 0x1d
        push 9
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes E8 87 E5 FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        push 9
        lea eax, [esp + 18h]
        push eax
        push edi
        ; Exact mapped bytes E8 3A 68 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 AD 0B 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587a8d9d
        __asm _emit 0x74
        __asm _emit 0x13
        pop edi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 0ch]
        xor ecx, esp
        ; Exact mapped bytes E8 B7 82 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
        mov al, byte ptr [esp + 8]
        test al, al
        ; Exact mapped bytes 79 2D: jns 0x587a8dd2
        __asm _emit 0x79
        __asm _emit 0x2d
        movzx edx, byte ptr [esp + 0bh]
        movzx ecx, al
        neg edx
        movzx eax, byte ptr [esp + 9]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 0ah]
        shl ecx, 8
        add ecx, eax
        shl ecx, 8
        sub edx, ecx
        and edx, 7fffffffh
        neg edx
        ; Exact mapped bytes EB 21: jmp 0x587a8df3
        __asm _emit 0xeb
        __asm _emit 0x21
        movzx edx, al
        movzx eax, byte ptr [esp + 9]
        shl edx, 8
        add edx, eax
        movzx eax, byte ptr [esp + 0ah]
        shl edx, 8
        add edx, eax
        movzx eax, byte ptr [esp + 0bh]
        shl edx, 8
        add edx, eax
        mov al, byte ptr [esp + 0ch]
        push esi
        test al, al
        ; Exact mapped bytes 79 2D: jns 0x587a8e29
        __asm _emit 0x79
        __asm _emit 0x2d
        movzx esi, byte ptr [esp + 13h]
        movzx ecx, al
        neg esi
        movzx eax, byte ptr [esp + 11h]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esp + 12h]
        shl ecx, 8
        add ecx, eax
        shl ecx, 8
        sub esi, ecx
        and esi, 7fffffffh
        neg esi
        ; Exact mapped bytes EB 21: jmp 0x587a8e4a
        __asm _emit 0xeb
        __asm _emit 0x21
        movzx esi, al
        movzx eax, byte ptr [esp + 11h]
        shl esi, 8
        add esi, eax
        movzx eax, byte ptr [esp + 12h]
        shl esi, 8
        add esi, eax
        movzx eax, byte ptr [esp + 13h]
        shl esi, 8
        add esi, eax
        movzx eax, byte ptr [esp + 14h]
        push eax
        push esi
        push edx
        push ebx
        push edi
        ; Exact mapped bytes E8 67 85 FF FF: call 0x587a13c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        add esp, 14h
        mov eax, 3
        pop esi
        pop edi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 E1 81 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
