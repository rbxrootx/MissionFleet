// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0E50 .. +0x2D8 bytes.
extern "C" __declspec(naked) void FUN_585b0e50_585B0E50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        push 5
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 0B 6D F1 FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6d
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 2F F7 FF: call 0x58523df0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes A3 EC 90 94 58: mov dword ptr [0x589490ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 46 FE FF: call 0x58595570
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F5 76 F2 FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD C3 FF FF: call 0x585ad260
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 CB 11 00: call 0x586cda30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        push 30000h
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 C2 17 00: call 0x5872d130
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dach]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8E 88 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        movzx eax, word ptr [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9D 61 1C 00: call 0x58777070
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x61
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dach]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0dach]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 AF ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x585b0f16
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dcch]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0dcch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        push 1
        push 0
        push 0ffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 F3 FF FF: call 0x585b02d0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x585b0f44
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A F4 FF FF: call 0x585b03d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D 3E 16 00: call 0x58714de0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3e
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0e0ch], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0e14h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0e18h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0e1ch], 0
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1030h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1030h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1034h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1034h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1038h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1038h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B 45 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x45
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 08 06 96 58 00: cmp dword ptr [0x58960608], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x585b1042
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 08 06 96 58: mov eax, dword ptr [0x58960608]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 08 06 96 58: mov ecx, dword ptr [0x58960608]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 75 1A: jne 0x585b1065
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0dbch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0dbch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0dd4h]
        ; Exact mapped bytes E8 03 F5 0B 00: call 0x58670580
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf5
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 70 06 96 58: mov edx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 74 F3 FF: call 0x584e84b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e08h], 1
        ; Exact mapped bytes 75 50: jne 0x585b10f8
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 47: je 0x585b10f8
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 54 6B ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x585b10f8
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 60 F2 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x60
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 3
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 5C F9 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0e08h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 42 00 00: call 0x585b5350
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        push 0c4h
        push 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 60 F2 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 F8 BC 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbc
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7D 6B FF FF: call 0x585a7ca0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
