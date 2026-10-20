// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BF2C0 .. +0x4BC bytes.
extern "C" __declspec(naked) void FUN_586bf2c0_586BF2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 170h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 80h], 0
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586bf310
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 114h]
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 5
        ; Exact mapped bytes 7D 1B: jge 0x586bf334
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + ecx*4 + 22ch]
        ; Exact mapped bytes E8 8F 15 10 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x586bf301
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 11ch], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 85 F0 FE FF FF: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 118h], ecx
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 22: je 0x586bf37b
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp - 118h], 1
        ; Exact mapped bytes 74 27: je 0x586bf389
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [ebp - 118h], 2
        ; Exact mapped bytes 74 02: je 0x586bf36d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x586bf395
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, 1
        ; Exact mapped bytes 66 89 95 F0 FE FF FF: mov word ptr [ebp - 0x110], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x586bf395
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, 0ah
        ; Exact mapped bytes 66 89 85 F0 FE FF FF: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x586bf395
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, 64h
        ; Exact mapped bytes 66 89 8D F0 FE FF FF: mov word ptr [ebp - 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 A2 E2 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 11: jmp 0x586bf3b9
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 FD CC DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 0F 84 9A 03 00 00: je 0x586bf760
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0F CB DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 3F E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 8]
        xor edx, 55h
        mov dword ptr [ebp - 160h], edx
        push 588b0db3h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 124h], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B7 CA DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xca
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 55 DC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x55
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 120h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 CC 10 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 11ch]
        add edx, 1
        mov dword ptr [ebp - 11ch], edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 4B CA DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xca
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 07 DF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov dword ptr [ebp - 12ch], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 0A 10 10 00: call 0x587c04d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F4 C9 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D 3E E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3e
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        add eax, 5890bfd0h
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 C6 C9 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF A0 E2 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa0
        __asm _emit 0xe2
        __asm _emit 0xff
        imul ecx, eax, 0e0h
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 134h]
        add edx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 13ch], edx
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C8 0F 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 7C C9 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 3E E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3e
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 51: jne 0x586bf5c5
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 47 C9 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 CF F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        push 0ffffffh
        push 8
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 61 0F 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x586bf6a2
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 10 C9 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 3D E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 4E: jne 0x586bf62e
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 150h], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 DB C8 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 CF F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        push 0ffffffh
        push 9
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 F5 0E 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 74: jmp 0x586bf6a2
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 15ch], edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 8D C8 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 3D E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        mov dword ptr [ebp - 154h], ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 6A C8 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 CF F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 154h]
        push edx
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 7F 0E 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        movzx ecx, word ptr [ebp - 110h]
        cmp dword ptr [ebp - 160h], ecx
        ; Exact mapped bytes 73 4A: jae 0x586bf6fb
        __asm _emit 0x73
        __asm _emit 0x4a
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 168h], ecx
        push 588b0de4h
        ; Exact mapped bytes E8 1A 29 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x29
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        push 4848ceh
        push -1
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 28 0E 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x586bf743
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 170h], edx
        push 588b0e00h
        ; Exact mapped bytes E8 D0 28 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x28
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        push 0ffffffh
        push 1
        mov eax, dword ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 DE 0D 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 66 8B 51 78: mov dx, word ptr [ecx + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x78
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 66 89 50 78: mov word ptr [eax + 0x78], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x78
        ; Exact mapped bytes E9 48 FC FF FF: jmp 0x586bf3a8
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 15 35 00 00: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DA 18 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
