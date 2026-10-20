// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1F21 .. +0x40E bytes.
extern "C" __declspec(naked) void FUN_004f1f21_004F1F21() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 0C 05 05 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 1E: je 0x4f1f5b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 D0 25 5E 00: call dword ptr [0x5e25d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 CB 03 00 00: jmp 0x4f2326
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4f1f75
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e6h
        push 5c5574h
        ; Exact mapped bytes E8 90 2A 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f1f75
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f1f5b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4f1f9d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e8h
        push 5c5574h
        ; Exact mapped bytes E8 68 2A 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f1f9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f1f83
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 92 34 05 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4f1fdd
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 11 03 00 00: jne 0x4f22e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 07 03 00 00: jne 0x4f22e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 04 E9 5D 00 00: cmp dword ptr [0x5de904], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 74: je 0x4f205a
        __asm _emit 0x74
        __asm _emit 0x74
        push -1ah
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 D4 25 5E 00: call dword ptr [0x5e25d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 10000h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4f2000
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 24 03 00 00: jmp 0x4f2324
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 28h]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x4f2024
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 1E: jmp 0x4f2042
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov byte ptr [ebp - 28h], 0
        push 5
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 28: mov ax, word ptr [edx + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x28
        push eax
        ; Exact mapped bytes FF 15 98 23 5E 00: call dword ptr [0x5e2398]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        mov dword ptr [ebp - 20h], ecx
        push 5c56b8h
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4f205a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C8 02 00 00: jmp 0x4f2322
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f2074
        __asm _emit 0x75
        __asm _emit 0x14
        push 208h
        push 5c5574h
        ; Exact mapped bytes E8 91 29 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2074
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f205a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x4f221d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 71 F9 FF FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f20ab
        __asm _emit 0x74
        __asm _emit 0x14
        push 212h
        push 5c5574h
        ; Exact mapped bytes E8 5A 29 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f20ab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4f208a
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x4f20f3
        __asm _emit 0x75
        __asm _emit 0x14
        push 21ah
        push 5c5574h
        ; Exact mapped bytes E8 12 29 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f20f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f20d9
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x4f21c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x4f21c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5de894h
        ; Exact mapped bytes E8 96 03 05 00: call 0x5424b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x4f21c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x4f21c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 36fh
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 32 F5 FF FF: call 0x4f167c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 70: je 0x4f21c3
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes E8 B6 FA FF FF: call 0x4f1c0e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push -4
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        xor edx, edx
        cmp eax, dword ptr [ebp - 3ch]
        sete dl
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 3B: jne 0x4f21c1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push -4
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f21b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 231h
        push 5c5574h
        ; Exact mapped bytes E8 52 28 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f21b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f2199
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 4B: jmp 0x4f220e
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes E8 46 FA FF FF: call 0x4f1c0e
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        push -4
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f21f8
        __asm _emit 0x75
        __asm _emit 0x14
        push 23ch
        push 5c5574h
        ; Exact mapped bytes E8 0D 28 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f21f8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f21de
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 74 08: je 0x4f220e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x4f22e4
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4f2237
        __asm _emit 0x74
        __asm _emit 0x14
        push 244h
        push 5c5574h
        ; Exact mapped bytes E8 CE 27 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2237
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f221d
        __asm _emit 0x75
        __asm _emit 0xe0
        push -4
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x4f22e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 582e40h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 E0 25 5E 00: call dword ptr [0x5e25e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x4f22e4
        __asm _emit 0x75
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 582e40h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 D8 25 5E 00: call dword ptr [0x5e25d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 582e40h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 E0 25 5E 00: call dword ptr [0x5e25e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 54: jne 0x4f22e4
        __asm _emit 0x75
        __asm _emit 0x54
        push 582e40h
        ; Exact mapped bytes FF 15 9C 23 5E 00: call dword ptr [0x5e239c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 09: je 0x4f22ad
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 4f1e8eh
        ; Exact mapped bytes EB 07: jmp 0x4f22b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 4f1c18h
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        push -4
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f22de
        __asm _emit 0x75
        __asm _emit 0x14
        push 251h
        push 5c5574h
        ; Exact mapped bytes E8 27 27 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f22de
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f22c4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes FF 15 D0 25 5E 00: call dword ptr [0x5e25d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x4f231d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 04: jmp 0x4f2326
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C0: jmp 0x4f22e4
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB BE: jmp 0x4f22e4
        __asm _emit 0xeb
        __asm _emit 0xbe
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
