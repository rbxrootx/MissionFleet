// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554B3F .. +0x288 bytes.
extern "C" __declspec(naked) void FUN_00554b3f_00554B3F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 356h
        push 5cfa08h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 02 66 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x66
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x554b7b
        __asm _emit 0x74
        __asm _emit 0x14
        push 357h
        push 5cfa08h
        ; Exact mapped bytes E8 8A FE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554b7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554b5e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 14: je 0x554b9e
        __asm _emit 0x74
        __asm _emit 0x14
        push 358h
        push 5cfa08h
        ; Exact mapped bytes E8 67 FE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554b9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x554b81
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C5 D1 FD FF: call 0x531d75
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 2002h
        ; Exact mapped bytes FF 15 84 23 5E 00: call dword ptr [0x5e2384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 05: jne 0x554bcd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF B1 F7 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x554bf4
        __asm _emit 0x75
        __asm _emit 0x14
        push 364h
        push 5cfa08h
        ; Exact mapped bytes E8 11 FE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554bf4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x554bda
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 03 FB FF: call 0x504f8a
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 13: je 0x554c32
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 B0 23 5E 00: call dword ptr [0x5e23b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        push 3
        ; Exact mapped bytes E8 77 15 FB FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x15
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add edx, 38h
        push edx
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 8C 2A 5E 00: call dword ptr [0x5e2a8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x554c61
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 B0 23 5E 00: call dword ptr [0x5e23b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 29 88 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x554c7e
        __asm _emit 0x75
        __asm _emit 0x14
        push 375h
        push 5cfa08h
        ; Exact mapped bytes E8 87 FD FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554c7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x554c61
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 BC 29 5E 00: call dword ptr [0x5e29bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x554ca9
        __asm _emit 0x74
        __asm _emit 0x14
        push 376h
        push 5cfa08h
        ; Exact mapped bytes E8 5C FD FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554ca9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x554c84
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        add edx, 34h
        push edx
        push 0
        push 0
        push 12h
        push 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        ; Exact mapped bytes FF 15 94 2A 5E 00: call dword ptr [0x5e2a94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 43: je 0x554d17
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 38h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 38h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x554cfe
        __asm _emit 0x74
        __asm _emit 0x14
        push 37ch
        push 5cfa08h
        ; Exact mapped bytes E8 07 FD FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554cfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x554cd4
        __asm _emit 0x75
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 73 87 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 58e540h
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 B4 29 5E 00: call dword ptr [0x5e29b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x554d72
        __asm _emit 0x75
        __asm _emit 0x14
        push 388h
        push 5cfa08h
        ; Exact mapped bytes E8 93 FC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554d72
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x554d58
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58e4e0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 00 71 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 20h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 0A: jne 0x554dab
        __asm _emit 0x75
        __asm _emit 0x0a
        push 8007000eh
        ; Exact mapped bytes E8 DF 86 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        push 38eh
        push 5cfa08h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 A2 63 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
