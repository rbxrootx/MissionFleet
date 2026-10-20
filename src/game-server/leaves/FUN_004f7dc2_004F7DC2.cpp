// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7DC2 .. +0x4FB bytes.
extern "C" __declspec(naked) void FUN_004f7dc2_004F7DC2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        push 42h
        push 5c5b58h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 85 33 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 1B: je 0x4f7e09
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov eax, 1
        ; Exact mapped bytes E9 AB 04 00 00: jmp 0x4f82b4
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, 2
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 2dh
        ; Exact mapped bytes 0F 87 68 04 00 00: ja 0x4f828a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        xor edx, edx
        mov dl, byte ptr [eax + 4f82f1h]
        ; Exact mapped bytes FF 24 95 BD 82 4F 00: jmp dword ptr [edx*4 + 0x4f82bd]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xbd
        __asm _emit 0x82
        __asm _emit 0x4f
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4f7e3b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4f7e34
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4f7e58
        __asm _emit 0x74
        __asm _emit 0x11
        push 56h
        push 5c5b58h
        ; Exact mapped bytes E8 AD CB 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7e58
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4f7e41
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 48 04 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4f7e70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4f7e69
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4f7e8d
        __asm _emit 0x74
        __asm _emit 0x11
        push 5dh
        push 5c5b58h
        ; Exact mapped bytes E8 78 CB 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7e8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4f7e76
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 10 04 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4f7ea8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4f7ea1
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4f7ec5
        __asm _emit 0x74
        __asm _emit 0x11
        push 64h
        push 5c5b58h
        ; Exact mapped bytes E8 40 CB 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7ec5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4f7eae
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 D7 03 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4f7ef1
        __asm _emit 0x74
        __asm _emit 0x11
        push 6ah
        push 5c5b58h
        ; Exact mapped bytes E8 14 CB 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7ef1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x4f7eda
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 A8 03 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4f7f26
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 5c5b58h
        ; Exact mapped bytes E8 DF CA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7f26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x4f7f0f
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x4f7f45
        __asm _emit 0x75
        __asm _emit 0x11
        push 72h
        push 5c5b58h
        ; Exact mapped bytes E8 C0 CA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7f45
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x4f7f2c
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 11: jne 0x4f7f65
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 5c5b58h
        ; Exact mapped bytes E8 A0 CA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7f65
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f7f4b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 2E 03 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x4f7fa0
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 5c5b58h
        ; Exact mapped bytes E8 65 CA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7fa0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4f7f89
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 11: jne 0x4f7fbf
        __asm _emit 0x75
        __asm _emit 0x11
        push 7bh
        push 5c5b58h
        ; Exact mapped bytes E8 46 CA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7fbf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x4f7fa6
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x4f7fdf
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ch
        push 5c5b58h
        ; Exact mapped bytes E8 26 CA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7fdf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f7fc5
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 B1 02 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8020
        __asm _emit 0x75
        __asm _emit 0x14
        push 83h
        push 5c5b58h
        ; Exact mapped bytes E8 E5 C9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8020
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f8006
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 14: jne 0x4f8042
        __asm _emit 0x75
        __asm _emit 0x14
        push 84h
        push 5c5b58h
        ; Exact mapped bytes E8 C3 C9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8042
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4f8026
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f8065
        __asm _emit 0x75
        __asm _emit 0x14
        push 85h
        push 5c5b58h
        ; Exact mapped bytes E8 A0 C9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8065
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f8048
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 2A 02 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4f80a7
        __asm _emit 0x75
        __asm _emit 0x14
        push 8dh
        push 5c5b58h
        ; Exact mapped bytes E8 5E C9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f80a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f808d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x4f80c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 8eh
        push 5c5b58h
        ; Exact mapped bytes E8 3C C9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f80c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4f80ad
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f80ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 8fh
        push 5c5b58h
        ; Exact mapped bytes E8 19 C9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f80ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f80cf
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 A0 01 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4f8118
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4f8111
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 1D: je 0x4f8141
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 10h], 0ffffh
        ; Exact mapped bytes 74 14: je 0x4f8141
        __asm _emit 0x74
        __asm _emit 0x14
        push 98h
        push 5c5b58h
        ; Exact mapped bytes E8 C4 C8 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8141
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4f811e
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8161
        __asm _emit 0x75
        __asm _emit 0x14
        push 99h
        push 5c5b58h
        ; Exact mapped bytes E8 A4 C8 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8161
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f8147
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4f818a
        __asm _emit 0x74
        __asm _emit 0x14
        push 9bh
        push 5c5b58h
        ; Exact mapped bytes E8 7B C8 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f818a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f816d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        cmp dword ptr [eax + 1ch], 0
        sete cl
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 1ch], 0
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x4f82b1
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 14: je 0x4f81d2
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a5h
        push 5c5b58h
        ; Exact mapped bytes E8 33 C8 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f81d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f81b8
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4f81f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a6h
        push 5c5b58h
        ; Exact mapped bytes E8 13 C8 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f81f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f81d8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 14: je 0x4f821d
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a8h
        push 5c5b58h
        ; Exact mapped bytes E8 E8 C7 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f821d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4f81fe
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4f8240
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a9h
        push 5c5b58h
        ; Exact mapped bytes E8 C5 C7 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8240
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f8223
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        cmp dword ptr [ecx + 1ch], 0
        sete dl
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 1ch], 0
        ; Exact mapped bytes EB 42: jmp 0x4f82b1
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 36: jmp 0x4f82b1
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 27: jmp 0x4f82b1
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f82a7
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b9h
        push 5c5b58h
        ; Exact mapped bytes E8 5E C7 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f82a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f828a
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x4f82b4
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
