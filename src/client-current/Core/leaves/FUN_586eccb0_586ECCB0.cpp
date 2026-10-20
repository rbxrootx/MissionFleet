// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ECCB0 .. +0x2D5 bytes.
extern "C" __declspec(naked) void FUN_586eccb0_586ECCB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 0C 06 96 58: cmp eax, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 09: jne 0x586ecccf
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [ebp - 1], 2
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x586ecd87
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 14 06 96 58: cmp ecx, dword ptr [0x58960614]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 5C: jne 0x586ecd39
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 C8 DC FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc8
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x586ecd0c
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 C8 DC FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 C5 DC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc5
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 06: jne 0x586ecd0c
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 4
        ; Exact mapped bytes EB 2B: jmp 0x586ecd37
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        cmp ecx, 7
        ; Exact mapped bytes 74 0F: je 0x586ecd2a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        cmp eax, 8
        ; Exact mapped bytes 75 06: jne 0x586ecd30
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 8
        ; Exact mapped bytes EB 07: jmp 0x586ecd37
        __asm _emit 0xeb
        __asm _emit 0x07
        mov al, 3
        ; Exact mapped bytes E9 4A 02 00 00: jmp 0x586ecf81
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4E: jmp 0x586ecd87
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 2C 06 96 58: cmp ecx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 06: jne 0x586ecd4d
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 5
        ; Exact mapped bytes EB 3A: jmp 0x586ecd87
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 06: jne 0x586ecd61
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 6
        ; Exact mapped bytes EB 26: jmp 0x586ecd87
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 28 06 96 58: cmp eax, dword ptr [0x58960628]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 06: jne 0x586ecd74
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 7
        ; Exact mapped bytes EB 13: jmp 0x586ecd87
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        cmp edx, 7
        ; Exact mapped bytes 74 04: je 0x586ecd87
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 E1 01 00 00: je 0x586ecf7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ecdaf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D C5 01 00 00: jge 0x586ecf7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x586ece82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 10h], ecx
        push 0edh
        push 11ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3B 88 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 14h], ecx
        push 0edh
        push 11ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1C 88 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b7ch]
        mov dword ptr [ebp - 18h], eax
        push 1f3h
        push 12fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FE 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0b88h]
        mov dword ptr [ebp - 1ch], edx
        push 1f3h
        push 241h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E0 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0b80h]
        mov dword ptr [ebp - 20h], ecx
        push 1f3h
        push 270h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C2 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b84h]
        mov dword ptr [ebp - 24h], eax
        push 1f3h
        push 2a1h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A4 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x586ecf39
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 28h], eax
        push 99h
        push 0adh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7F 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 2ch], eax
        push 99h
        push 0adh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 60 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0b7ch]
        mov dword ptr [ebp - 30h], edx
        push 19fh
        push 0c0h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 42 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0b88h]
        mov dword ptr [ebp - 34h], ecx
        push 19fh
        push 1d2h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 24 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b80h]
        mov dword ptr [ebp - 38h], eax
        push 19fh
        push 201h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 06 87 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0b84h]
        mov dword ptr [ebp - 3ch], edx
        push 19fh
        push 232h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E8 86 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [ebp - 1]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x586ecf79
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 64h]
        ; Exact mapped bytes E8 40 89 DA FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0xda
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x586ecf79
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 72 8F D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E8 FC FF FF: call 0x586ecc60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 28 FE FF FF: jmp 0x586ecda6
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 1]
        mov esp, ebp
        pop ebp
        ret
    }
}
