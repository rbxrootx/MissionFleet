// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040212C .. +0x298 bytes.
extern "C" __declspec(naked) void FUN_0040212c_0040212C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 87 66 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [eax + 0d84h]
        mov edx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [edx + 0d80h]
        ; Exact mapped bytes 0F 82 3E 02 00 00: jb 0x4023b5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0d84h]
        mov edx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 0d80h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0d84h], ecx
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0d8ch], 0
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x402289
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x402289
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 0d8ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x402235
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 23 15 00 00: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10h
        ; Exact mapped bytes 73 13: jae 0x402202
        __asm _emit 0x73
        __asm _emit 0x13
        cmp dword ptr [ebp - 8], 0dbba0h
        ; Exact mapped bytes 76 08: jbe 0x402200
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6B 12 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x402233
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 03 15 00 00: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 20h
        ; Exact mapped bytes 73 13: jae 0x402222
        __asm _emit 0x73
        __asm _emit 0x13
        cmp dword ptr [ebp - 8], 124f80h
        ; Exact mapped bytes 76 08: jbe 0x402220
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4B 12 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x402233
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 1b7740h
        ; Exact mapped bytes 76 08: jbe 0x402233
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 38 12 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x402284
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0d90h], 10h
        ; Exact mapped bytes 73 13: jae 0x402254
        __asm _emit 0x73
        __asm _emit 0x13
        cmp dword ptr [ebp - 8], 0dbba0h
        ; Exact mapped bytes 76 08: jbe 0x402252
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 12 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x402284
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0d90h], 20h
        ; Exact mapped bytes 73 13: jae 0x402273
        __asm _emit 0x73
        __asm _emit 0x13
        cmp dword ptr [ebp - 8], 124f80h
        ; Exact mapped bytes 76 08: jbe 0x402271
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FA 11 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x402284
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 1b7740h
        ; Exact mapped bytes 76 08: jbe 0x402284
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E7 11 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x40230c
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0d8ch], 0
        ; Exact mapped bytes 74 77: je 0x40230c
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0d78h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 EC 00 00 00: mov ax, word ptr [edx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 75 60: jne 0x40230c
        __asm _emit 0x75
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ecx + 0d8ch]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4A 14 00 00: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 73 13: jae 0x4022db
        __asm _emit 0x73
        __asm _emit 0x13
        cmp dword ptr [ebp - 0ch], 0dbba0h
        ; Exact mapped bytes 76 08: jbe 0x4022d9
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 92 11 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x40230c
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 14 00 00: call 0x40370d
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10h
        ; Exact mapped bytes 73 13: jae 0x4022fb
        __asm _emit 0x73
        __asm _emit 0x13
        cmp dword ptr [ebp - 0ch], 124f80h
        ; Exact mapped bytes 76 08: jbe 0x4022f9
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 72 11 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x40230c
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 0ch], 1b7740h
        ; Exact mapped bytes 76 08: jbe 0x40230c
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F 11 00 00: call 0x40346b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 8
        ; Exact mapped bytes 75 10: jne 0x40232e
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 0d74h]
        ; Exact mapped bytes E8 4E 7F 07 00: call 0x47a27a
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 79: jmp 0x4023a7
        __asm _emit 0xeb
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 4
        ; Exact mapped bytes 75 67: jne 0x4023a7
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 0f8h], 1
        ; Exact mapped bytes 75 55: jne 0x4023a7
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A6 EF FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x40236a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 EF FF FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 37: je 0x4023a7
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 75 29: jne 0x4023a5
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 19ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 19ch], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 19ch], 64h
        ; Exact mapped bytes 7E 08: jle 0x4023a5
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 4C 08 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB B8: jmp 0x40235f
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0d70h]
        ; Exact mapped bytes E8 58 10 06 00: call 0x46340d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 20 64 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
