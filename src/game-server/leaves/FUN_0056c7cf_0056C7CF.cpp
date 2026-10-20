// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C7CF .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_0056c7cf_0056C7CF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 60h], ecx
        push 5e1h
        push 5d053ch
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 72 E9 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x56c819
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 55 36 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56c819
        __asm _emit 0x75
        __asm _emit 0x14
        push 5e3h
        push 5d053ch
        ; Exact mapped bytes E8 EC 81 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c819
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x56c7ee
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x56c839
        __asm _emit 0x75
        __asm _emit 0x14
        push 5e4h
        push 5d053ch
        ; Exact mapped bytes E8 CC 81 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c839
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x56c81f
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 0A 95 FC FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x56c85b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 07 98 FC FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x56c882
        __asm _emit 0xeb
        __asm _emit 0x27
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x56c882
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x56ca5b
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 14: je 0x56c89c
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 0c0h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 12: jmp 0x56c8ae
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 0c0h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E8 00 CF F8 FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [eax + 20h]
        cmp edx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes 75 14: jne 0x56c8db
        __asm _emit 0x75
        __asm _emit 0x14
        push 1
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        push 1
        lea ecx, [ebp - 30h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        push 1
        push 0
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A8 8B F8 FF: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2B 94 FC FF: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 15 94 FC FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 34h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3F 96 FC FF: call 0x535f9b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x56c973
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 6ch
        ; Exact mapped bytes E8 16 62 FC FF: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x56ca27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x56ca27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56c9b3
        __asm _emit 0x74
        __asm _emit 0x14
        push 615h
        push 5d053ch
        ; Exact mapped bytes E8 52 80 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c9b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x56c98b
        __asm _emit 0x75
        __asm _emit 0xd2
        push 1
        lea edx, [ebp - 30h]
        push edx
        push 0
        push 0
        push 0
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E4 8A F8 FF: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 6ch
        ; Exact mapped bytes E8 AF 62 FC FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3D: je 0x56ca25
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 6ch
        ; Exact mapped bytes E8 B9 62 FC FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        push 621h
        push 5d053ch
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 51 E7 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 44 17 FC FF: call 0x52e15b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x56ca23
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F1 F9 FC FF: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB BD: jmp 0x56c9e2
        __asm _emit 0xeb
        __asm _emit 0xbd
        ; Exact mapped bytes EB 34: jmp 0x56ca5b
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 14 93 FC FF: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
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
