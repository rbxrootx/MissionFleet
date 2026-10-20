// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885E380 .. +0x282 bytes.
extern "C" __declspec(naked) void FUN_5885e380() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 0F 85 72 02 00 00: jne 0x5885e5fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [eax + 104e0h], 0
        mov dword ptr [eax + 104e4h], 320h
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 0fch]
        ; Exact mapped bytes 75 5B: jne 0x5885e40b
        __asm _emit 0x75
        __asm _emit 0x5b
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 28: je 0x5885e3e5
        __asm _emit 0x74
        __asm _emit 0x28
        push 40000000h
        push 80h
        push 0ah
        ; Exact mapped bytes E8 F2 76 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20c9ch]
        push 0ah
        ; Exact mapped bytes E8 00 92 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 80h
        push 0ah
        ; Exact mapped bytes E8 CD 76 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 20c9ch]
        push 29h
        ; Exact mapped bytes E8 DA 91 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 100h]
        ; Exact mapped bytes 75 4A: jne 0x5885e45d
        __asm _emit 0x75
        __asm _emit 0x4a
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 18: je 0x5885e438
        __asm _emit 0x74
        __asm _emit 0x18
        push 40000000h
        push 100h
        push 0bh
        ; Exact mapped bytes E8 8F 76 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0bh
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x5885e5b0
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 100h
        push 0ah
        ; Exact mapped bytes E8 7A 76 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20c9ch]
        push 2ah
        ; Exact mapped bytes E8 88 91 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 104h]
        ; Exact mapped bytes 75 4B: jne 0x5885e4b0
        __asm _emit 0x75
        __asm _emit 0x4b
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 29: je 0x5885e49b
        __asm _emit 0x74
        __asm _emit 0x29
        push 40000000h
        push 800h
        push 6
        ; Exact mapped bytes E8 3D 76 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 20c9ch]
        push 6
        ; Exact mapped bytes E8 4A 91 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 800h
        push 6
        ; Exact mapped bytes E8 17 76 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        push 25h
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x5885e5b0
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 108h]
        ; Exact mapped bytes 75 5B: jne 0x5885e513
        __asm _emit 0x75
        __asm _emit 0x5b
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 28: je 0x5885e4ed
        __asm _emit 0x74
        __asm _emit 0x28
        push 40000000h
        push 1000h
        push 7
        ; Exact mapped bytes E8 EA 75 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20c9ch]
        push 7
        ; Exact mapped bytes E8 F8 90 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 1000h
        push 7
        ; Exact mapped bytes E8 C5 75 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 20c9ch]
        push 26h
        ; Exact mapped bytes E8 D2 90 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 10ch]
        ; Exact mapped bytes 75 47: jne 0x5885e562
        __asm _emit 0x75
        __asm _emit 0x47
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 15: je 0x5885e53d
        __asm _emit 0x74
        __asm _emit 0x15
        push 40000000h
        push 200h
        push 4
        ; Exact mapped bytes E8 87 75 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        push 4
        ; Exact mapped bytes EB 73: jmp 0x5885e5b0
        __asm _emit 0xeb
        __asm _emit 0x73
        push 0
        push 200h
        push 4
        ; Exact mapped bytes E8 75 75 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20c9ch]
        push 23h
        ; Exact mapped bytes E8 83 90 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 110h]
        ; Exact mapped bytes 75 5C: jne 0x5885e5c6
        __asm _emit 0x75
        __asm _emit 0x5c
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 29: je 0x5885e5a0
        __asm _emit 0x74
        __asm _emit 0x29
        push 40000000h
        push 400h
        push 5
        ; Exact mapped bytes E8 38 75 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 20c9ch]
        push 5
        ; Exact mapped bytes E8 45 90 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 400h
        push 5
        ; Exact mapped bytes E8 12 75 F8 FF: call 0x587e5ac0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        push 24h
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 20c9ch]
        ; Exact mapped bytes E8 1F 90 F4 FF: call 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 114h]
        ; Exact mapped bytes 75 0C: jne 0x5885e5da
        __asm _emit 0x75
        __asm _emit 0x0c
        push 3
        ; Exact mapped bytes E8 AB EB FF FF: call 0x5885d180
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 118h]
        ; Exact mapped bytes 75 0C: jne 0x5885e5ee
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 97 EB FF FF: call 0x5885d180
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 11ch]
        ; Exact mapped bytes 75 07: jne 0x5885e5fd
        __asm _emit 0x75
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 83 EB FF FF: call 0x5885d180
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
