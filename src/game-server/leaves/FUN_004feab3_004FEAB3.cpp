// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FEAB3 .. +0x30D bytes.
extern "C" __declspec(naked) void FUN_004feab3_004FEAB3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 124h], ecx
        push 72h
        push 5cb750h
        mov eax, dword ptr [ebp - 124h]
        push eax
        ; Exact mapped bytes E8 88 C6 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4F 13 FD FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4feaf8
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 5cb750h
        ; Exact mapped bytes E8 0D 5F 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4feaf8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4fead8
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x4feb26
        __asm _emit 0x74
        __asm _emit 0x22
        push 1
        push 18h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 45 13 FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4feb26
        __asm _emit 0x75
        __asm _emit 0x11
        push 75h
        push 5cb750h
        ; Exact mapped bytes E8 DF 5E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4feb26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4feafe
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4000h
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4feb4a
        __asm _emit 0x74
        __asm _emit 0x11
        push 76h
        push 5cb750h
        ; Exact mapped bytes E8 BB 5E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4feb4a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x4feb2c
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp + 0ch]
        and ch, 7fh
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 0ch
        ; Exact mapped bytes E8 31 EB FE FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 0E 0E 00 00: call 0x4ff99f
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 0ch
        ; Exact mapped bytes E8 57 EF FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4febad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4feba6
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4febba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x4febb3
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4febc7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4febc0
        __asm _emit 0x75
        __asm _emit 0xf3
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 3
        mov dword ptr [ebp - 128h], ecx
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 14: je 0x4fec00
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 128h], 1
        ; Exact mapped bytes 74 17: je 0x4fec0c
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp - 128h], 2
        ; Exact mapped bytes 74 1A: je 0x4fec18
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 24: jmp 0x4fec24
        __asm _emit 0xeb
        __asm _emit 0x24
        mov dword ptr [ebp - 120h], 80000000h
        ; Exact mapped bytes EB 3B: jmp 0x4fec47
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 120h], 40000000h
        ; Exact mapped bytes EB 2F: jmp 0x4fec47
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov dword ptr [ebp - 120h], 0c0000000h
        ; Exact mapped bytes EB 23: jmp 0x4fec47
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4fec41
        __asm _emit 0x74
        __asm _emit 0x14
        push 95h
        push 5cb750h
        ; Exact mapped bytes E8 C4 5D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fec41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fec24
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 70h
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 40h
        ; Exact mapped bytes 77 15: ja 0x4fec7b
        __asm _emit 0x77
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 12ch]
        xor edx, edx
        mov dl, byte ptr [eax + 4fedd4h]
        ; Exact mapped bytes FF 24 95 C0 ED 4F 00: jmp dword ptr [edx*4 + 0x4fedc0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xed
        __asm _emit 0x4f
        __asm _emit 0x00
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4fec98
        __asm _emit 0x74
        __asm _emit 0x14
        push 9dh
        push 5cb750h
        ; Exact mapped bytes E8 6D 5D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fec98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fec7b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 22: jmp 0x4feccc
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 118h], 1
        ; Exact mapped bytes EB 16: jmp 0x4feccc
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 118h], 2
        ; Exact mapped bytes EB 0A: jmp 0x4feccc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 3
        mov dword ptr [ebp - 0ch], 0ch
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 80h
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 1000h
        test ecx, ecx
        ; Exact mapped bytes 74 25: je 0x4fed1c
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 0ch]
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x4fed10
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 114h], 4
        ; Exact mapped bytes EB 0A: jmp 0x4fed1a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 2
        ; Exact mapped bytes EB 0A: jmp 0x4fed26
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 3
        push 0
        push 80h
        mov eax, dword ptr [ebp - 114h]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], -1
        ; Exact mapped bytes 75 37: jne 0x4fed96
        __asm _emit 0x75
        __asm _emit 0x37
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2D: je 0x4fed92
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 B1 CE FF FF: call 0x4fbc2e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 6B ED FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x4fedb7
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 8], 1
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
