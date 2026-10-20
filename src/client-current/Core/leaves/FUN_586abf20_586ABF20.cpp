// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ABF20 .. +0x261 bytes.
extern "C" __declspec(naked) void FUN_586abf20_586ABF20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 75 01 00 00: jne 0x586ac0a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes 75 05: jne 0x586abf46
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x586ac0a3
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0d0h]
        ; Exact mapped bytes 75 10: jne 0x586abf64
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 10 00 00: call 0x586acf60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x586ac0a3
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 75 10: jne 0x586abf82
        __asm _emit 0x75
        __asm _emit 0x10
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 0F 00 00: call 0x586acf60
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x586ac0a3
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes 75 4B: jne 0x586abfdb
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 76 FC FF: call 0x586735b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 64h
        ; Exact mapped bytes 7D 1D: jge 0x586abfbd
        __asm _emit 0x7d
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80011034h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 09 18 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x586abfd6
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 2E B2 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 12h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B CD E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcd
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x586ac0a3
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 75 10: jne 0x586abff9
        __asm _emit 0x75
        __asm _emit 0x10
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 10 00 00: call 0x586ad0b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x586ac0a3
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 75 10: jne 0x586ac017
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 10 00 00: call 0x586ad0b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x586ac0a3
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 75 0D: jne 0x586ac032
        __asm _emit 0x75
        __asm _emit 0x0d
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 10 00 00: call 0x586ad0b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 71: jmp 0x586ac0a3
        __asm _emit 0xeb
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 75 0D: jne 0x586ac04d
        __asm _emit 0x75
        __asm _emit 0x0d
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 10 00 00: call 0x586ad0b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 56: jmp 0x586ac0a3
        __asm _emit 0xeb
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 98h]
        ; Exact mapped bytes 75 48: jne 0x586ac0a3
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 89 DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x89
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x586ac08a
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes E8 7C B1 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb1
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 79h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 57 E3 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x57
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 19: jmp 0x586ac0a3
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 61 B1 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb1
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 79h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CE CC E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcc
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x586ac179
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x586ac163
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes 75 2D: jne 0x586ac0ed
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588b0a8ch
        ; Exact mapped bytes E8 26 5F E7 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5f
        __asm _emit 0xe7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 8F E2 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 74: jmp 0x586ac161
        __asm _emit 0xeb
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 75 2D: jne 0x586ac128
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588b0ab4h
        ; Exact mapped bytes E8 EB 5E E7 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5e
        __asm _emit 0xe7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 8E E2 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x586ac161
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0d8h]
        ; Exact mapped bytes 75 2B: jne 0x586ac161
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b0ae0h
        ; Exact mapped bytes E8 B0 5E E7 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5e
        __asm _emit 0xe7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 8E E2 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x586ac179
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x586ac179
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 7E E2 FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
