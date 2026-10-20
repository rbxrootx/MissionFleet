// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58726B40 .. +0x38F bytes.
extern "C" __declspec(naked) void FUN_58726b40_58726B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 140h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        mov byte ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 108h]
        mov byte ptr [ecx + 0adh], 0
        mov edx, dword ptr [ebp - 108h]
        mov byte ptr [edx + 0aeh], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 FE D5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 E1 8F DE FF: call 0x5850fb80
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8f
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + 3dch], eax
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58726bc6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 114h]
        add edx, 1
        mov dword ptr [ebp - 114h], edx
        cmp dword ptr [ebp - 114h], 2
        ; Exact mapped bytes 7D 1B: jge 0x58726bea
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + eax*4 + 3d4h]
        ; Exact mapped bytes E8 D9 9C 09 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x58726bb7
        __asm _emit 0xeb
        __asm _emit 0xcd
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 2C 02 00 00: je 0x58726e23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x58726e23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 47 DE D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xde
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, word ptr [eax + 48h]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        shr edx, 10h
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B FA DC FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 1E: je 0x58726c72
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 120h]
        cmp dword ptr [eax + 554h], 1
        ; Exact mapped bytes 74 0F: je 0x58726c72
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x58726e23
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 90 D8 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x58726dcb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 BC B6 02 00: call 0x58752350
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 2F 01 00 00: jne 0x58726dcb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 39 DD D5 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdd
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x58726dcb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 96 DD D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B FF DC FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 124h]
        add edx, 33ch
        push edx
        mov eax, dword ptr [ebp - 124h]
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
        push edx
        ; Exact mapped bytes E8 81 B4 DF FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b40e8h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 3d4h]
        mov dword ptr [ebp - 130h], ecx
        push 0ffffffh
        mov edx, dword ptr [ebp - 10ch]
        push edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 BF 97 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 3d4h]
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 D9 DC D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 134h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 BD DC D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xd5
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 138h], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 56 97 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 108h]
        mov dl, byte ptr [ecx + 0ach]
        add dl, 1
        mov eax, dword ptr [ebp - 108h]
        mov byte ptr [eax + 0ach], dl
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 52 D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x52
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 74 12: je 0x58726e0b
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [ecx + 0ach]
        cmp edx, 64h
        ; Exact mapped bytes 75 02: jne 0x58726e0d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 16: jmp 0x58726e23
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 98 52 D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x52
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes E9 D4 FD FF FF: jmp 0x58726bf7
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58726e3e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 64h
        ; Exact mapped bytes 7D 30: jge 0x58726e77
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [edx + ecx*4 + 240h], 0
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + eax*4 + 0b0h], 0
        ; Exact mapped bytes EB B8: jmp 0x58726e2f
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58726e92
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 118h]
        add edx, 1
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 7
        ; Exact mapped bytes 7D 26: jge 0x58726ec1
        __asm _emit 0x7d
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 118h]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 78h]
        mov dword ptr [ebp - 140h], edx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 22 F0 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x58726e83
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 85 A1 10 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
