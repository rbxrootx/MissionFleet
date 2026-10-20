// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1A20 .. +0x50E bytes.
extern "C" __declspec(naked) void FUN_004c1a20_004C1A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 24h], 0ch
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4c1a4d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dword ptr [ebp - 1ch], 0
        mov byte ptr [ebp - 38h], 10h
        ; Exact mapped bytes EB 0B: jmp 0x4c1a58
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov dword ptr [ebp - 1ch], 1
        mov byte ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 75 2C: jne 0x4c1a91
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4000h
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x4c1a7c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov al, byte ptr [ebp - 38h]
        or al, 80h
        mov byte ptr [ebp - 38h], al
        ; Exact mapped bytes EB 15: jmp 0x4c1a91
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 81 3D C4 F0 5D 00 00 80 00 00: cmp dword ptr [0x5df0c4], 0x8000
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4c1a91
        __asm _emit 0x74
        __asm _emit 0x09
        mov cl, byte ptr [ebp - 38h]
        or cl, 80h
        mov byte ptr [ebp - 38h], cl
        mov edx, dword ptr [ebp + 0ch]
        and edx, 3
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 0E: je 0x4c1aae
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 40h], 1
        ; Exact mapped bytes 74 11: je 0x4c1ab7
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 40h], 2
        ; Exact mapped bytes 74 14: je 0x4c1ac0
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 1B: jmp 0x4c1ac9
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov dword ptr [ebp - 34h], 80000000h
        ; Exact mapped bytes EB 30: jmp 0x4c1ae7
        __asm _emit 0xeb
        __asm _emit 0x30
        mov dword ptr [ebp - 34h], 40000000h
        ; Exact mapped bytes EB 27: jmp 0x4c1ae7
        __asm _emit 0xeb
        __asm _emit 0x27
        mov dword ptr [ebp - 34h], 0c0000000h
        ; Exact mapped bytes EB 1E: jmp 0x4c1ae7
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes E8 A2 F7 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 A7 F7 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 43 04 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 10h
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 30h
        ; Exact mapped bytes 77 36: ja 0x4c1b32
        __asm _emit 0x77
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 44h]
        xor edx, edx
        mov dl, byte ptr [eax + 4c1f42h]
        ; Exact mapped bytes FF 24 95 2E 1F 4C 00: jmp dword ptr [edx*4 + 0x4c1f2e]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2e
        __asm _emit 0x1f
        __asm _emit 0x4c
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 39: jmp 0x4c1b50
        __asm _emit 0xeb
        __asm _emit 0x39
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 30: jmp 0x4c1b50
        __asm _emit 0xeb
        __asm _emit 0x30
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 27: jmp 0x4c1b50
        __asm _emit 0xeb
        __asm _emit 0x27
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes EB 1E: jmp 0x4c1b50
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes E8 39 F7 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 3E F7 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 DA 03 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 700h
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 400h
        ; Exact mapped bytes 7F 37: jg 0x4c1b9c
        __asm _emit 0x7f
        __asm _emit 0x37
        cmp dword ptr [ebp - 48h], 400h
        ; Exact mapped bytes 74 4B: je 0x4c1bb9
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp dword ptr [ebp - 48h], 200h
        ; Exact mapped bytes 7F 1A: jg 0x4c1b91
        __asm _emit 0x7f
        __asm _emit 0x1a
        cmp dword ptr [ebp - 48h], 200h
        ; Exact mapped bytes 74 54: je 0x4c1bd4
        __asm _emit 0x74
        __asm _emit 0x54
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 33: je 0x4c1bb9
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebp - 48h], 100h
        ; Exact mapped bytes 74 33: je 0x4c1bc2
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes EB 55: jmp 0x4c1be6
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp dword ptr [ebp - 48h], 300h
        ; Exact mapped bytes 74 43: je 0x4c1bdd
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes EB 4A: jmp 0x4c1be6
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp dword ptr [ebp - 48h], 500h
        ; Exact mapped bytes 74 26: je 0x4c1bcb
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp - 48h], 600h
        ; Exact mapped bytes 74 26: je 0x4c1bd4
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp - 48h], 700h
        ; Exact mapped bytes 74 14: je 0x4c1bcb
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 2D: jmp 0x4c1be6
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov dword ptr [ebp - 18h], 3
        ; Exact mapped bytes EB 42: jmp 0x4c1c04
        __asm _emit 0xeb
        __asm _emit 0x42
        mov dword ptr [ebp - 18h], 4
        ; Exact mapped bytes EB 39: jmp 0x4c1c04
        __asm _emit 0xeb
        __asm _emit 0x39
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 30: jmp 0x4c1c04
        __asm _emit 0xeb
        __asm _emit 0x30
        mov dword ptr [ebp - 18h], 5
        ; Exact mapped bytes EB 27: jmp 0x4c1c04
        __asm _emit 0xeb
        __asm _emit 0x27
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes EB 1E: jmp 0x4c1c04
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes E8 85 F6 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 8A F6 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 26 03 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 80h
        mov edx, dword ptr [ebp + 0ch]
        and edx, 100h
        test edx, edx
        ; Exact mapped bytes 74 3D: je 0x4c1c55
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp + 14h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 8B 0D 58 ED 5D 00: mov ecx, dword ptr [0x5ded58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        not ecx
        mov edx, dword ptr [ebp - 10h]
        and edx, ecx
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x4c1c55
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 1
        mov eax, dword ptr [ebp + 0ch]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4c1c77
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 28h]
        or ecx, 4000000h
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 34h]
        or edx, 10000h
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4c1c8c
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        or ch, 1
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x4c1ca3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 28h]
        or eax, 8000000h
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 16: jmp 0x4c1cb9
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x4c1cb9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 28h]
        or edx, 10000000h
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes E8 72 F6 FF FF: call 0x4c1330
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 1E: jne 0x4c1ce5
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 A4 F5 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 18h
        ; Exact mapped bytes E8 A9 F5 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 45 02 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 23: jne 0x4c1d31
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B6 F4 FE FF: call 0x4b11d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 AA FB FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 4C 22 5E 00: call dword ptr [0x5e224c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 2D: jne 0x4c1d71
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 76 F4 FE FF: call 0x4b11d0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 6A FB FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 75 0B: jne 0x4c1d82
        __asm _emit 0x75
        __asm _emit 0x0b
        mov cl, byte ptr [ebp - 38h]
        or cl, 40h
        mov byte ptr [ebp - 38h], cl
        ; Exact mapped bytes EB 0F: jmp 0x4c1d91
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 75 09: jne 0x4c1d91
        __asm _emit 0x75
        __asm _emit 0x09
        mov dl, byte ptr [ebp - 38h]
        or dl, 8
        mov byte ptr [ebp - 38h], dl
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 82 F7 FF FF: call 0x4c1520
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dl, byte ptr [ebp - 38h]
        or dl, 1
        mov byte ptr [ebp - 38h], dl
        mov eax, dword ptr [ebp - 14h]
        sar eax, 5
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov al, byte ptr [ebp - 38h]
        mov byte ptr [edx + ecx + 4], al
        ; Exact mapped bytes 0F BE 4D C8: movsx ecx, byte ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xc8
        and ecx, 48h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x4c1ecf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 55 C8: movsx edx, byte ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xc8
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x4c1ecf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x4c1ecf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        push -1
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 CD DC FF FF: call 0x4bfad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], -1
        ; Exact mapped bytes 75 32: jne 0x4c1e41
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes E8 6C F4 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax], 83h
        ; Exact mapped bytes 74 20: je 0x4c1e3c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 0B 66 FF FF: call 0x4b8430
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 9F FA FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x4c1ecf
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 30h], 0
        push 1
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 DC 44 00 00: call 0x4c6330
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 3E: jne 0x4c1e99
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 0F BE 45 D0: movsx eax, byte ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd0
        cmp eax, 1ah
        ; Exact mapped bytes 75 35: jne 0x4c1e99
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 FF 41 00 00: call 0x4c6070
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 75 20: jne 0x4c1e99
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 AE 65 FF FF: call 0x4b8430
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 42 FA FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x4c1f2a
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 2A DC FF FF: call 0x4bfad0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], -1
        ; Exact mapped bytes 75 1D: jne 0x4c1ecf
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 75 65 FF FF: call 0x4b8430
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 09 FA FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 5B: jmp 0x4c1f2a
        __asm _emit 0xeb
        __asm _emit 0x5b
        ; Exact mapped bytes 0F BE 55 C8: movsx edx, byte ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xc8
        and edx, 48h
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x4c1f1b
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 0ch]
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x4c1f1b
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 14h]
        sar ecx, 5
        mov edx, dword ptr [ebp - 14h]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        mov cl, byte ptr [eax + edx + 4]
        or cl, 20h
        mov edx, dword ptr [ebp - 14h]
        sar edx, 5
        mov eax, dword ptr [ebp - 14h]
        and eax, 1fh
        imul eax, eax, 24h
        mov edx, dword ptr [edx*4 + 5df120h]
        mov byte ptr [edx + eax + 4], cl
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 AC F9 FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
