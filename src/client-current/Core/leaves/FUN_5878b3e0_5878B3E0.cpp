// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B3E0 .. +0x249 bytes.
extern "C" __declspec(naked) void FUN_5878b3e0_5878B3E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 138h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 0bh]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 64 F6 FF FF: call 0x5878aa70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        lea edx, [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 0bh]
        push ecx
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 DD F6 FF FF: call 0x5878ab10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 11ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 49 AC CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + 8]
        mov byte ptr [ebp - 114h], cl
        cmp byte ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 12: je 0x5878b47f
        __asm _emit 0x74
        __asm _emit 0x12
        cmp byte ptr [ebp - 114h], 1
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x5878b544
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x5878b5f9
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, 8fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 0e0h
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 6B A1 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5878b4d1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10ch]
        add edx, 1
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 7D 65: jge 0x5878b53f
        __asm _emit 0x7d
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 0c0h]
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 99h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        add eax, 0d6h
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 0A A1 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 128h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 54 AA CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xaa
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 83: jmp 0x5878b4c2
        __asm _emit 0xeb
        __asm _emit 0x83
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x5878b5f9
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 2fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        add eax, 4fh
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 AC A0 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5878b590
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 110h]
        add ecx, 1
        mov dword ptr [ebp - 110h], ecx
        cmp dword ptr [ebp - 110h], 3
        ; Exact mapped bytes 7D 60: jge 0x5878b5f9
        __asm _emit 0x7d
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        sub eax, 37h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        add edx, 47h
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 50 A0 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 134h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 9A A9 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 88: jmp 0x5878b581
        __asm _emit 0xeb
        __asm _emit 0x88
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 138h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 78 A9 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2D 5A 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
