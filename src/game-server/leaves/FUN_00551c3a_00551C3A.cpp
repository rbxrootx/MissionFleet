// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551C3A .. +0x2C6 bytes.
extern "C" __declspec(naked) void FUN_00551c3a_00551C3A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f8a4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 24h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x551ca4
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A6 E1 F7 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe1
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x551ca4
        __asm _emit 0x75
        __asm _emit 0x14
        push 22dh
        push 5cf7b8h
        ; Exact mapped bytes E8 61 2D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x551ca4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x551c7b
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 75 3A: jne 0x551ced
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 31: jne 0x551ced
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x551cd6
        __asm _emit 0x75
        __asm _emit 0x14
        push 232h
        push 5cf7b8h
        ; Exact mapped bytes E8 2F 2D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x551cd6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x551cbc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2F B0 FB FF: call 0x50cd17
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 0E 03 00 00: jmp 0x551ffb
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1B: je 0x551d15
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 20h
        ; Exact mapped bytes E8 A1 F2 FD FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 2B E0 FA FF: call 0x4ffd3a
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 7ch], eax
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x551df3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x551df3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 09: jne 0x551d62
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 3C: jmp 0x551d9e
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 3F 7A F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], esp
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 2B F2 F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 40h], edx
        lea eax, [ebp - 30h]
        push eax
        push 0
        push 11022h
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 88 29 5E 00: call dword ptr [0x5e2988]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 09: je 0x551dc5
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 C5 B6 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 19: jne 0x551de4
        __asm _emit 0x75
        __asm _emit 0x19
        push 24bh
        push 5cf7b8h
        ; Exact mapped bytes E8 26 2C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 01: je 0x551de4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x551dc5
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 19: jne 0x551e15
        __asm _emit 0x75
        __asm _emit 0x19
        push 24eh
        push 5cf7b8h
        ; Exact mapped bytes E8 F5 2B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 01: je 0x551e15
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x551df3
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x551ebd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 12: je 0x551e53
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 75 09: jne 0x551e53
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 07: jmp 0x551e5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A5 F3 FF FF: call 0x55120b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 0D: je 0x551e7f
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 75 35: jne 0x551ebd
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 0E: je 0x551ea2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB 1B: jmp 0x551ebd
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 78h], eax
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x551fda
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        push 584850h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B7 91 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x551ef1
        __asm _emit 0x75
        __asm _emit 0x14
        push 26fh
        push 5cf7b8h
        ; Exact mapped bytes E8 14 2B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x551ef1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x551ecc
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 34: je 0x551f31
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 3ch]
    }
}
