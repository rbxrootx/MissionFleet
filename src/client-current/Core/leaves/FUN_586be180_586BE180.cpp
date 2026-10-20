// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BE180 .. +0x4AB bytes.
extern "C" __declspec(naked) void FUN_586be180_586BE180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 168h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [edx + 80h], 0
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586be1d0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 5
        ; Exact mapped bytes 7D 1B: jge 0x586be1f4
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + ecx*4 + 22ch]
        ; Exact mapped bytes E8 CF 26 10 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x586be1c1
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 B4 E2 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 11: jmp 0x586be222
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 94 DE DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xde
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 E2 03 00 00: je 0x586be611
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 A6 DC DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 51 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x51
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 64h], 10000000h
        ; Exact mapped bytes 0F 85 BE 03 00 00: jne 0x586be60c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 87 DC DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 51 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 12: mov ax, word ptr [eax + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 85 EE FE FF FF: mov word ptr [ebp - 0x112], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 112h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 9D E3 FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        push 588b0dcfh
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 0F 84 66 03 00 00: je 0x586be60c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 14 DC DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 66 DC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x66
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 29 22 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x22
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1
        mov dword ptr [ebp - 118h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 A8 DB DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xdb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 19 DF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x19
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, al
        xor edx, 55h
        mov dword ptr [ebp - 12ch], edx
        push 0ffffffh
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 67 21 10 00: call 0x587c04d0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x21
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 134h], edx
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 11ch]
        add eax, 33ch
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 7E 21 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x21
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 32 DB DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB 4F E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4f
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 51: jne 0x586be40f
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 FD DA DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 E1 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        push 0ffffffh
        push 8
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 17 21 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x21
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x586be4ec
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 C6 DA DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 4F E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4f
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 4E: jne 0x586be478
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 144h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 91 DA DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A E1 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        push 0ffffffh
        push 9
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 AB 20 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x20
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 74: jmp 0x586be4ec
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 150h], edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 43 DA DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC 4E E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4e
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
        mov dword ptr [ebp - 148h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 20 DA DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B9 E0 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 35 20 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 11ch]
        movzx edx, byte ptr [ecx + 35ch]
        test edx, edx
        ; Exact mapped bytes 75 4D: jne 0x586be54a
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 158h], edx
        push 588b0e14h
        ; Exact mapped bytes E8 CE 3A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        push 4848ceh
        push -1
        mov eax, dword ptr [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 DC 1F 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x586be5f4
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 8B D9 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 14 4E E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 74 4A: je 0x586be5ac
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 160h], eax
        push 588b0e28h
        ; Exact mapped bytes E8 69 3A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        push 4848ceh
        push -1
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 77 1F 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x586be5f4
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 168h], ecx
        push 588b0e38h
        ; Exact mapped bytes E8 1F 3A E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3a
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        push 0ffffffh
        push 1
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 2D 1F 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1f
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 8B 48 78: mov cx, word ptr [eax + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x78
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 89 4A 78: mov word ptr [edx + 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x78
        ; Exact mapped bytes E9 00 FC FF FF: jmp 0x586be211
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 64 46 00 00: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 29 2A 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2a
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
