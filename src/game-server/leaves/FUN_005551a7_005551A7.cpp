// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005551A7 .. +0x392 bytes.
extern "C" __declspec(naked) void FUN_005551a7_005551A7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E9 2B 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 3eah
        push 5cfa08h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 73 5F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x55520a
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ebh
        push 5cfa08h
        ; Exact mapped bytes E8 FB F7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55520a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5551ed
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x55522d
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ech
        push 5cfa08h
        ; Exact mapped bytes E8 D8 F7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55522d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x555210
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x555250
        __asm _emit 0x74
        __asm _emit 0x14
        push 3edh
        push 5cfa08h
        ; Exact mapped bytes E8 B5 F7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555250
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x555233
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 14: je 0x555273
        __asm _emit 0x74
        __asm _emit 0x14
        push 3eeh
        push 5cfa08h
        ; Exact mapped bytes E8 92 F7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555273
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x555256
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x5553ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 AD F8 FF FF: call 0x554b3f
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x5552b7
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 34h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x555292
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x5552e2
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 38h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5552bd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 52 DD FF FF: call 0x553042
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CE FC FF FF: call 0x554fcc
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 58e4b0h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 77 6B FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x55532c
        __asm _emit 0x75
        __asm _emit 0x14
        push 3fdh
        push 5cfa08h
        ; Exact mapped bytes E8 D9 F6 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55532c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x555312
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 B8 29 5E 00: call dword ptr [0x5e29b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 1E: jge 0x55536c
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x555397
        __asm _emit 0x74
        __asm _emit 0x14
        push 404h
        push 5cfa08h
        ; Exact mapped bytes E8 6E F6 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555397
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x55536c
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x55552d
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 26 DD FF FF: call 0x5530e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 3ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5553cf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 36: jmp 0x555405
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D2 43 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x43
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 BE BB F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        lea eax, [ebp - 40h]
        push eax
        push 0
        push 0
        push 10012h
        push 0
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x55544d
        __asm _emit 0x74
        __asm _emit 0x1a
        lea edx, [ebp - 3ch]
        push edx
        push 5cfae0h
        ; Exact mapped bytes E8 D4 A7 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 3D 80 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 14: jne 0x555467
        __asm _emit 0x75
        __asm _emit 0x14
        push 418h
        push 5cfa08h
        ; Exact mapped bytes E8 9E F5 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555467
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55544d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x555493
        __asm _emit 0x75
        __asm _emit 0x14
        push 41ch
        push 5cfa08h
        ; Exact mapped bytes E8 72 F5 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555493
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x555476
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 20h], 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 58e540h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 B4 29 5E 00: call dword ptr [0x5e29b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5554f4
        __asm _emit 0x75
        __asm _emit 0x14
        push 425h
        push 5cfa08h
        ; Exact mapped bytes E8 11 F5 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5554f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5554da
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58e4e0h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 7E 69 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 0A: jne 0x55552d
        __asm _emit 0x75
        __asm _emit 0x0a
        push 8007000eh
        ; Exact mapped bytes E8 5D 7F FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        lea esp, [ebp - 58h]
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
