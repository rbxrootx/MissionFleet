// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58628B00 .. +0x19B0 bytes.
extern "C" __declspec(naked) void FUN_58628b00_58628B00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 314h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aea00h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 12ch], 0
        ; Exact mapped bytes 74 49: je 0x58628b6a
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 20: je 0x58628b53
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 110h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 95 F0 FE FF FF: call dword ptr [ebp - 0x110]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628b5d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 74 49: je 0x58628bbf
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x58628ba8
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 118h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 E8 FE FF FF: call dword ptr [ebp - 0x118]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628bb2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 43: je 0x58628c0b
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x58628bf7
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 120h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 E0 FE FF FF: call dword ptr [ebp - 0x120]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628c01
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 43: je 0x58628c57
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x58628c43
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 128h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 D8 FE FF FF: call dword ptr [ebp - 0x128]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628c4d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58628c69
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 5A: jge 0x58628cc9
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 6ch], 0
        ; Exact mapped bytes 74 4B: je 0x58628cc7
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x58628caf
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 130h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 D0 FE FF FF: call dword ptr [ebp - 0x130]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628cb9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 6ch], 0
        ; Exact mapped bytes EB 97: jmp 0x58628c60
        __asm _emit 0xeb
        __asm _emit 0x97
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 43: je 0x58628d15
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x58628d01
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 138h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 C8 FE FF FF: call dword ptr [ebp - 0x138]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628d0b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 43: je 0x58628d61
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x58628d4d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 140h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 C0 FE FF FF: call dword ptr [ebp - 0x140]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628d57
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 43: je 0x58628dad
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x58628d99
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 148h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628da3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 49: je 0x58628e02
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x58628deb
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 B0 FE FF FF: call dword ptr [ebp - 0x150]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628df5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a0h], 0
        ; Exact mapped bytes 74 49: je 0x58628e57
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x58628e40
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 158h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 A8 FE FF FF: call dword ptr [ebp - 0x158]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628e4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 74 49: je 0x58628eac
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x58628e95
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 160h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 A0 FE FF FF: call dword ptr [ebp - 0x160]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628e9f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 74 49: je 0x58628f01
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x58628eea
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 168h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 98 FE FF FF: call dword ptr [ebp - 0x168]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628ef4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 74 49: je 0x58628f56
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x58628f3f
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 170h], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 90 FE FF FF: call dword ptr [ebp - 0x170]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628f49
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 49: je 0x58628fab
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x58628f94
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 178h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 88 FE FF FF: call dword ptr [ebp - 0x178]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628f9e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], 0
        ; Exact mapped bytes 74 49: je 0x58629000
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x58628fe9
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 180h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 80 FE FF FF: call dword ptr [ebp - 0x180]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58628ff3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b8h], 0
        ; Exact mapped bytes 74 49: je 0x58629055
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x5862903e
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 188h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 78 FE FF FF: call dword ptr [ebp - 0x188]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629048
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b8h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 74 49: je 0x586290aa
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x58629093
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 190h], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 70 FE FF FF: call dword ptr [ebp - 0x190]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862909d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 49: je 0x586290ff
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x586290e8
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 198h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 68 FE FF FF: call dword ptr [ebp - 0x198]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586290f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c4h], 0
        ; Exact mapped bytes 74 49: je 0x58629154
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x5862913d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 60 FE FF FF: call dword ptr [ebp - 0x1a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629147
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 74 49: je 0x586291a9
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x58629192
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1a8h], edx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 58 FE FF FF: call dword ptr [ebp - 0x1a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862919c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 74 49: je 0x586291fe
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x586291e7
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1b0h], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 50 FE FF FF: call dword ptr [ebp - 0x1b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586291f1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0cch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629210
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x58629279
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0d0h], 0
        ; Exact mapped bytes 74 51: je 0x58629277
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d0h]
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x5862925c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 48 FE FF FF: call dword ptr [ebp - 0x1b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629266
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0d0h], 0
        ; Exact mapped bytes EB 8E: jmp 0x58629207
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862928b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 63: jge 0x586292f4
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0d8h], 0
        ; Exact mapped bytes 74 51: je 0x586292f2
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x586292d7
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 40 FE FF FF: call dword ptr [ebp - 0x1c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586292e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0d8h], 0
        ; Exact mapped bytes EB 8E: jmp 0x58629282
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 74 49: je 0x58629349
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x58629332
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 38 FE FF FF: call dword ptr [ebp - 0x1c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862933c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f8h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862935b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 63: jge 0x586293c4
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0fch], 0
        ; Exact mapped bytes 74 51: je 0x586293c2
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0fch]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x586293a7
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 30 FE FF FF: call dword ptr [ebp - 0x1d0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586293b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0fch], 0
        ; Exact mapped bytes EB 8E: jmp 0x58629352
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 11ch], 0
        ; Exact mapped bytes 74 49: je 0x58629419
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 70h], edx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x58629402
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 28 FE FF FF: call dword ptr [ebp - 0x1d8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862940c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 11ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 120h], 0
        ; Exact mapped bytes 74 49: je 0x5862946e
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x58629457
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1e0h], eax
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 20 FE FF FF: call dword ptr [ebp - 0x1e0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629461
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 124h], 0
        ; Exact mapped bytes 74 49: je 0x586294c3
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 78h], ecx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x586294ac
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1e8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 18 FE FF FF: call dword ptr [ebp - 0x1e8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586294b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 128h], 0
        ; Exact mapped bytes 74 49: je 0x58629518
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 7ch], edx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x58629501
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1f0h], edx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 10 FE FF FF: call dword ptr [ebp - 0x1f0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862950b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 128h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 130h], 0
        ; Exact mapped bytes 74 49: je 0x5862956d
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 80h], eax
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x58629556
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1f8h], eax
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 08 FE FF FF: call dword ptr [ebp - 0x1f8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629560
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 130h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 134h], 0
        ; Exact mapped bytes 74 55: je 0x586295ce
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 84h], ecx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x586295b7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 200h], ecx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 00 FE FF FF: call dword ptr [ebp - 0x200]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586295c1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 134h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 138h], 0
        ; Exact mapped bytes 74 55: je 0x5862962f
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 138h]
        mov dword ptr [ebp - 88h], edx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x58629618
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 208h], edx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 F8 FD FF FF: call dword ptr [ebp - 0x208]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629622
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 138h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 148h], 0
        ; Exact mapped bytes 74 55: je 0x58629690
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 148h]
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x58629679
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 210h], eax
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 F0 FD FF FF: call dword ptr [ebp - 0x210]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629683
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 148h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586296a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x58629717
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 14ch], 0
        ; Exact mapped bytes 74 5D: je 0x58629715
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 14ch]
        mov dword ptr [ebp - 90h], ecx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x586296fa
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 218h], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 E8 FD FF FF: call dword ptr [ebp - 0x218]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629704
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 21ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 14ch], 0
        ; Exact mapped bytes EB 82: jmp 0x58629699
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629729
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 6F: jge 0x5862979e
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 154h], 0
        ; Exact mapped bytes 74 5D: je 0x5862979c
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 154h]
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x58629781
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 220h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 E0 FD FF FF: call dword ptr [ebp - 0x220]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862978b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 224h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 154h], 0
        ; Exact mapped bytes EB 82: jmp 0x58629720
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 174h], 0
        ; Exact mapped bytes 74 55: je 0x586297ff
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 98h], edx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x586297e8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 228h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 D8 FD FF FF: call dword ptr [ebp - 0x228]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586297f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 22ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 174h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 178h], 0
        ; Exact mapped bytes 74 55: je 0x58629860
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 178h]
        mov dword ptr [ebp - 9ch], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x58629849
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 230h], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 D0 FD FF FF: call dword ptr [ebp - 0x230]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629853
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 178h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 17ch], 0
        ; Exact mapped bytes 74 55: je 0x586298c1
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 17ch]
        mov dword ptr [ebp - 0a0h], ecx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x586298aa
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 238h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 C8 FD FF FF: call dword ptr [ebp - 0x238]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586298b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 23ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 17ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 180h], 0
        ; Exact mapped bytes 74 55: je 0x58629922
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 180h]
        mov dword ptr [ebp - 0a4h], edx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x5862990b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 240h], edx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 C0 FD FF FF: call dword ptr [ebp - 0x240]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629915
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 244h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 180h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 184h], 0
        ; Exact mapped bytes 74 55: je 0x58629983
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x5862996c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 248h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 B8 FD FF FF: call dword ptr [ebp - 0x248]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629976
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 184h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629995
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 6F: jge 0x58629a0a
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 188h], 0
        ; Exact mapped bytes 74 5D: je 0x58629a08
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 188h]
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x586299ed
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 250h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 B0 FD FF FF: call dword ptr [ebp - 0x250]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586299f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 254h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 188h], 0
        ; Exact mapped bytes EB 82: jmp 0x5862998c
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629a1c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 6F: jge 0x58629a91
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 194h], 0
        ; Exact mapped bytes 74 5D: je 0x58629a8f
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 194h]
        mov dword ptr [ebp - 0b0h], eax
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x58629a74
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 258h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 A8 FD FF FF: call dword ptr [ebp - 0x258]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629a7e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 25ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 194h], 0
        ; Exact mapped bytes EB 82: jmp 0x58629a13
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629aa3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 6F: jge 0x58629b18
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 1a0h], 0
        ; Exact mapped bytes 74 5D: je 0x58629b16
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a0h]
        mov dword ptr [ebp - 0b4h], edx
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x58629afb
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 260h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 A0 FD FF FF: call dword ptr [ebp - 0x260]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629b05
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 264h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 1a0h], 0
        ; Exact mapped bytes EB 82: jmp 0x58629a9a
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629b2a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 6F: jge 0x58629b9f
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 1ach], 0
        ; Exact mapped bytes 74 5D: je 0x58629b9d
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1ach]
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x58629b82
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 268h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 98 FD FF FF: call dword ptr [ebp - 0x268]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629b8c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 26ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 1ach], 0
        ; Exact mapped bytes EB 82: jmp 0x58629b21
        __asm _emit 0xeb
        __asm _emit 0x82
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1b8h], 0
        ; Exact mapped bytes 74 55: je 0x58629c00
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1b8h]
        mov dword ptr [ebp - 0bch], eax
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x58629be9
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0bch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 270h], eax
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 90 FD FF FF: call dword ptr [ebp - 0x270]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629bf3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 274h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1b8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1bch], 0
        ; Exact mapped bytes 74 55: je 0x58629c61
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1bch]
        mov dword ptr [ebp - 0c0h], ecx
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x58629c4a
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 278h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 88 FD FF FF: call dword ptr [ebp - 0x278]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629c54
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 27ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1bch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1c0h], 0
        ; Exact mapped bytes 74 55: je 0x58629cc2
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c0h]
        mov dword ptr [ebp - 0c4h], edx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x58629cab
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 280h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 80 FD FF FF: call dword ptr [ebp - 0x280]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629cb5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 284h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1c0h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629cd4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D B9 01 00 00: jge 0x58629e97
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 1c4h], 0
        ; Exact mapped bytes 74 5D: je 0x58629d4b
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 0c8h], eax
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x58629d30
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 288h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 78 FD FF FF: call dword ptr [ebp - 0x288]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629d3a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 28ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 1c4h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 1d0h], 0
        ; Exact mapped bytes 74 5D: je 0x58629db8
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 0cch], ecx
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x58629d9d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 290h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 70 FD FF FF: call dword ptr [ebp - 0x290]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629da7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 294h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 1d0h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 1dch], 0
        ; Exact mapped bytes 74 5D: je 0x58629e25
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1dch]
        mov dword ptr [ebp - 0d0h], edx
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x58629e0a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 298h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 68 FD FF FF: call dword ptr [ebp - 0x298]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629e14
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 29ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 1dch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 1e8h], 0
        ; Exact mapped bytes 74 5D: je 0x58629e92
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e8h]
        mov dword ptr [ebp - 0d4h], eax
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x58629e77
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 60 FD FF FF: call dword ptr [ebp - 0x2a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629e81
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a4h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 1e8h], 0
        ; Exact mapped bytes E9 34 FE FF FF: jmp 0x58629ccb
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 220h], 0
        ; Exact mapped bytes 74 55: je 0x58629ef8
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 220h]
        mov dword ptr [ebp - 0d8h], edx
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x58629ee1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2a8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 58 FD FF FF: call dword ptr [ebp - 0x2a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629eeb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ach], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 220h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58629f0a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x58629f7f
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 224h], 0
        ; Exact mapped bytes 74 5D: je 0x58629f7d
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 224h]
        mov dword ptr [ebp - 0dch], eax
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x58629f62
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2b0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 50 FD FF FF: call dword ptr [ebp - 0x2b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629f6c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b4h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 224h], 0
        ; Exact mapped bytes EB 82: jmp 0x58629f01
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 22ch], 0
        ; Exact mapped bytes 74 55: je 0x58629fe0
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 22ch]
        mov dword ptr [ebp - 0e0h], edx
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 26: je 0x58629fc9
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0e0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2b8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes FF 95 48 FD FF FF: call dword ptr [ebp - 0x2b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58629fd3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2bch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 22ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 230h], 0
        ; Exact mapped bytes 74 55: je 0x5862a041
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 230h]
        mov dword ptr [ebp - 0e4h], eax
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 26: je 0x5862a02a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 95 40 FD FF FF: call dword ptr [ebp - 0x2c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a034
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 230h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 234h], 0
        ; Exact mapped bytes 74 55: je 0x5862a0a2
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 234h]
        mov dword ptr [ebp - 0e8h], ecx
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 26: je 0x5862a08b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2c8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 95 38 FD FF FF: call dword ptr [ebp - 0x2c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a095
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2cch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 234h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862a0b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x5862a129
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 238h], 0
        ; Exact mapped bytes 74 5D: je 0x5862a127
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 238h]
        mov dword ptr [ebp - 0ech], edx
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 26: je 0x5862a10c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2d0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 95 30 FD FF FF: call dword ptr [ebp - 0x2d0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a116
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d4h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 238h], 0
        ; Exact mapped bytes EB 82: jmp 0x5862a0ab
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862a13b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x5862a1b0
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 240h], 0
        ; Exact mapped bytes 74 5D: je 0x5862a1ae
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 240h]
        mov dword ptr [ebp - 0f0h], ecx
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 26: je 0x5862a193
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0f0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2d8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes FF 95 28 FD FF FF: call dword ptr [ebp - 0x2d8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a19d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2dch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 240h], 0
        ; Exact mapped bytes EB 82: jmp 0x5862a132
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862a1c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x5862a237
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 248h], 0
        ; Exact mapped bytes 74 5D: je 0x5862a235
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 248h]
        mov dword ptr [ebp - 0f4h], eax
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 26: je 0x5862a21a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0f4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2e0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes FF 95 20 FD FF FF: call dword ptr [ebp - 0x2e0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a224
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e4h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 248h], 0
        ; Exact mapped bytes EB 82: jmp 0x5862a1b9
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862a249
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x5862a2be
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 250h], 0
        ; Exact mapped bytes 74 5D: je 0x5862a2bc
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 250h]
        mov dword ptr [ebp - 0f8h], edx
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 26: je 0x5862a2a1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2e8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes FF 95 18 FD FF FF: call dword ptr [ebp - 0x2e8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a2ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ech], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 250h], 0
        ; Exact mapped bytes EB 82: jmp 0x5862a240
        __asm _emit 0xeb
        __asm _emit 0x82
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 258h], 0
        ; Exact mapped bytes 74 55: je 0x5862a31f
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        mov dword ptr [ebp - 0fch], ecx
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 26: je 0x5862a308
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0fch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2f0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes FF 95 10 FD FF FF: call dword ptr [ebp - 0x2f0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a312
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 258h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 25ch], 0
        ; Exact mapped bytes 74 55: je 0x5862a380
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        mov dword ptr [ebp - 100h], edx
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 26: je 0x5862a369
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2f8h], edx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes FF 95 08 FD FF FF: call dword ptr [ebp - 0x2f8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a373
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2fch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 25ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 260h], 0
        ; Exact mapped bytes 74 55: je 0x5862a3e1
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 260h]
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 26: je 0x5862a3ca
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 300h], eax
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes FF 95 00 FD FF FF: call dword ptr [ebp - 0x300]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a3d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 304h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 260h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 270h], 0
        ; Exact mapped bytes 74 55: je 0x5862a442
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 108h], ecx
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 26: je 0x5862a42b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 308h], ecx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes FF 95 F8 FC FF FF: call dword ptr [ebp - 0x308]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a435
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 30ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 270h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 274h], 0
        ; Exact mapped bytes 74 55: je 0x5862a4a3
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 274h]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 26: je 0x5862a48c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 310h], edx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 95 F0 FC FF FF: call dword ptr [ebp - 0x310]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5862a496
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 314h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 274h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 B4 18 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
