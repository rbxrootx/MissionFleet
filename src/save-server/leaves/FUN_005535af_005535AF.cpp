// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005535AF .. +0x288 bytes.
extern "C" __declspec(naked) void FUN_005535af_005535AF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 356h
        push 67c1e0h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 92 6C F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x5535eb
        __asm _emit 0x74
        __asm _emit 0x14
        push 357h
        push 67c1e0h
        ; Exact mapped bytes E8 5A 57 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5535eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5535ce
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 14: je 0x55360e
        __asm _emit 0x74
        __asm _emit 0x14
        push 358h
        push 67c1e0h
        ; Exact mapped bytes E8 37 57 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55360e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5535f1
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 25 FD FF: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 2002h
        ; Exact mapped bytes FF 15 C8 B9 68 00: call dword ptr [0x68b9c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 05: jne 0x55363d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 9F F8 F4 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x553664
        __asm _emit 0x75
        __asm _emit 0x14
        push 364h
        push 67c1e0h
        ; Exact mapped bytes E8 E1 56 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553664
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55364a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 68 F9 FF: call 0x4e9f40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 13: je 0x5536a2
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push 3
        ; Exact mapped bytes E8 87 84 F9 FF: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add edx, 38h
        push edx
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 2C C3 68 00: call dword ptr [0x68c32c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x5536d1
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 29 88 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x5536ee
        __asm _emit 0x75
        __asm _emit 0x14
        push 375h
        push 67c1e0h
        ; Exact mapped bytes E8 57 56 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5536ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5536d1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 30 C3 68 00: call dword ptr [0x68c330]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x553719
        __asm _emit 0x74
        __asm _emit 0x14
        push 376h
        push 67c1e0h
        ; Exact mapped bytes E8 2C 56 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553719
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5536f4
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
        ; Exact mapped bytes FF 15 B8 C2 68 00: call dword ptr [0x68c2b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 43: je 0x553787
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
        ; Exact mapped bytes 74 14: je 0x55376e
        __asm _emit 0x74
        __asm _emit 0x14
        push 37ch
        push 67c1e0h
        ; Exact mapped bytes E8 D7 55 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55376e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x553744
        __asm _emit 0x75
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 73 87 FF FF: call 0x54befa
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
        push 640d30h
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 68 00: call dword ptr [0x68c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x68
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
        ; Exact mapped bytes 75 14: jne 0x5537e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 388h
        push 67c1e0h
        ; Exact mapped bytes E8 63 55 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5537e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5537c8
        __asm _emit 0x75
        __asm _emit 0xe0
        push 640cd0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 00 71 FF FF: call 0x54a8f6
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
        ; Exact mapped bytes 75 0A: jne 0x55381b
        __asm _emit 0x75
        __asm _emit 0x0a
        push 8007000eh
        ; Exact mapped bytes E8 DF 86 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        push 38eh
        push 67c1e0h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 32 6A F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6a
        __asm _emit 0xf8
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
