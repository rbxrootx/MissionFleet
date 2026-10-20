// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764BA0 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_58764ba0_58764BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1274h], 0
        ; Exact mapped bytes 7E 1A: jle 0x58764bdd
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1274h]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1274h], edx
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x58764d2a
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1274h], 0ch
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58764bfc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 8D 24 01 00 00: jge 0x58764d2a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 4
        mov ecx, dword ptr [ebp - 8]
        lea ecx, [ecx + eax + 11f4h]
        ; Exact mapped bytes E8 A5 1D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 4
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 11f4h]
        ; Exact mapped bytes E8 8D 1D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58764c43
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 74 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x74
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x58764d1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 72 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 0E D3 FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x58764d18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 4
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 11f4h]
        ; Exact mapped bytes E8 47 1D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 10: jne 0x58764c8e
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 72 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x72
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 AB D3 FF: call 0x5849f7e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xab
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 72 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x72
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 A8 D3 FF: call 0x5849f4a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa8
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 1D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 61: jne 0x58764d0f
        __asm _emit 0x75
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 1D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 77 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 FD D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 1D: jne 0x58764cf4
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 0D D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F A4 F2 FF: call 0x5868f190
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa4
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x58764d0f
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 0C D3 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F2 F1 F1 FF: call 0x58683f00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf1
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 05: jmp 0x58764d1d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 1B FF FF FF: jmp 0x58764c38
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 02: je 0x58764d25
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x58764d2a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 C9 FE FF FF: jmp 0x58764bf3
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
