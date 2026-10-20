// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851BCA0 .. +0x328 bytes.
extern "C" __declspec(naked) void FUN_5851bca0_5851BCA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 85 FB 01 00 00: jne 0x5851beb2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 02 F7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x5851bcd2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 04 F7 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 D1 01 00 00: je 0x5851bead
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC 12 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 BC 01 00 00: jne 0x5851bea8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 AA 01 00 00: je 0x5851bea8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BA AC F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xac
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 F9 52 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x52
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8E 03 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 DD 52 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x52
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ebp - 24h]
        imul eax, edx, 75h
        cdq
        mov esi, 64h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 BA 52 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x52
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 22 55 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x55
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes 0F 83 25 01 00 00: jae 0x5851bea8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x5851be9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 03 00 00: call 0x5851c0e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x5851bdfe
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 33 03 00 00: call 0x5851c0e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5851bded
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 81 06 F7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A 8C F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 70 06 F7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 8C F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [esi + 68h]
        cmp edx, dword ptr [eax + 68h]
        ; Exact mapped bytes 73 0C: jae 0x5851bdeb
        __asm _emit 0x73
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ach], ecx
        ; Exact mapped bytes EB 0C: jmp 0x5851bdf9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ach], eax
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x5851be9a
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 D4 02 00 00: call 0x5851c0e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x5851be9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 1E 06 F7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 8B F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8b
        __asm _emit 0xf6
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
        movzx esi, ax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 04 06 F7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D 8B F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp esi, edx
        ; Exact mapped bytes 7D 0E: jge 0x5851be60
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ach], ecx
        ; Exact mapped bytes EB 3A: jmp 0x5851be9a
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 D2 05 F7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6B 8B F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 05 F7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5A 8B F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 73 0C: jae 0x5851be9a
        __asm _emit 0x73
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ach], eax
        ; Exact mapped bytes EB 0C: jmp 0x5851bea8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ach], edx
        ; Exact mapped bytes E9 1A FE FF FF: jmp 0x5851bcc7
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x5851bfc3
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 1
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x5851bfc3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0ffffffffh
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5851bedf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 8D BE 00 00 00: jge 0x5851bfa7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 8ch], 0
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x5851bfa2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 8ch]
        ; Exact mapped bytes E8 D1 11 F7 FF: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 8ch]
        ; Exact mapped bytes E8 D4 11 F7 FF: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        sub ecx, eax
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [ebp - 2ch]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C4 50 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 2C 53 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x53
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 76 13: jbe 0x5851bf88
        __asm _emit 0x76
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 8ch], 0
        ; Exact mapped bytes EB 1A: jmp 0x5851bfa2
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7C 06: jl 0x5851bf96
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 75 0C: jne 0x5851bfa2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x5851bed6
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 7E 16: jle 0x5851bfc3
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [edx + 0b0h], eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
