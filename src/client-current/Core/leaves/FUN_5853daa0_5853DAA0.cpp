// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853DAA0 .. +0xCAF bytes.
extern "C" __declspec(naked) void FUN_5853daa0_5853DAA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882fc0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 198h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a7e84h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 2e8h], 0
        ; Exact mapped bytes 74 49: je 0x5853db29
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2e8h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x5853db12
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 9ch], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853db1c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2e8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 74 49: je 0x5853db7e
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x5853db67
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853db71
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 74 49: je 0x5853dbd3
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x5853dbbc
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ach], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dbc6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 43: je 0x5853dc1f
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x5853dc0b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 4C FF FF FF: call dword ptr [ebp - 0xb4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dc15
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 64h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 43: je 0x5853dc6b
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x5853dc57
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 44 FF FF FF: call dword ptr [ebp - 0xbc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dc61
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 43: je 0x5853dcb7
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x5853dca3
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 3C FF FF FF: call dword ptr [ebp - 0xc4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dcad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 43: je 0x5853dd03
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x5853dcef
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0cch], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 34 FF FF FF: call dword ptr [ebp - 0xcc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dcf9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 43: je 0x5853dd4f
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x5853dd3b
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 2C FF FF FF: call dword ptr [ebp - 0xd4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dd45
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 70h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx + 80h], 0
        ; Exact mapped bytes 74 5B: je 0x5853ddbf
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x5853dd9f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0dch], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 24 FF FF FF: call dword ptr [ebp - 0xdc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dda9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 80h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx + 80h], 0
        ; Exact mapped bytes 74 5B: je 0x5853de2f
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x5853de0f
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0e4h], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 1C FF FF FF: call dword ptr [ebp - 0xe4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853de19
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1c4h], 0
        ; Exact mapped bytes 74 49: je 0x5853de84
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c4h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x5853de6d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 14 FF FF FF: call dword ptr [ebp - 0xec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853de77
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1c4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1c8h], 0
        ; Exact mapped bytes 74 49: je 0x5853ded9
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c8h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x5853dec2
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0f4h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 0C FF FF FF: call dword ptr [ebp - 0xf4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853decc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1c8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 49: je 0x5853df2e
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x5853df17
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0fch], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853df21
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 49: je 0x5853df83
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x5853df6c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 104h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 FC FE FF FF: call dword ptr [ebp - 0x104]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853df76
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 49: je 0x5853dfd8
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x5853dfc1
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10ch], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 F4 FE FF FF: call dword ptr [ebp - 0x10c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853dfcb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 74 49: je 0x5853e02d
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x5853e016
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 114h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 EC FE FF FF: call dword ptr [ebp - 0x114]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e020
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 49: je 0x5853e082
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x5853e06b
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 11ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 E4 FE FF FF: call dword ptr [ebp - 0x11c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e075
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 43: je 0x5853e0ce
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x5853e0ba
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 124h], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 DC FE FF FF: call dword ptr [ebp - 0x124]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e0c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 1b8h], 0
        ; Exact mapped bytes 74 5B: je 0x5853e13e
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1b8h]
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x5853e11e
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 12ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 D4 FE FF FF: call dword ptr [ebp - 0x12c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e128
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 1b8h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 1b8h], 0
        ; Exact mapped bytes 74 5B: je 0x5853e1ae
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1b8h]
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x5853e18e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 134h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 CC FE FF FF: call dword ptr [ebp - 0x134]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e198
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 1b8h], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax + 1b8h], 0
        ; Exact mapped bytes 74 59: je 0x5853e21b
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 1b8h]
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x5853e1fc
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 13ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 C4 FE FF FF: call dword ptr [ebp - 0x13c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e206
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 1b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1cch], 0
        ; Exact mapped bytes 74 49: je 0x5853e270
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x5853e259
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 144h], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 BC FE FF FF: call dword ptr [ebp - 0x144]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e263
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1cch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 19ch], 0
        ; Exact mapped bytes 74 49: je 0x5853e2c5
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 19ch]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x5853e2ae
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 B4 FE FF FF: call dword ptr [ebp - 0x14c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e2b8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 19ch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1a8h], 0
        ; Exact mapped bytes 74 49: je 0x5853e31a
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1a8h]
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x5853e303
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 154h], edx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 AC FE FF FF: call dword ptr [ebp - 0x154]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e30d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1a8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1a0h], 0
        ; Exact mapped bytes 74 49: je 0x5853e36f
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x5853e358
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 15ch], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 A4 FE FF FF: call dword ptr [ebp - 0x15c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e362
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1a0h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0d4h], 0
        ; Exact mapped bytes 74 49: je 0x5853e3c4
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x5853e3ad
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 164h], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 9C FE FF FF: call dword ptr [ebp - 0x164]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e3b7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 49: je 0x5853e419
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x5853e402
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 16ch], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 94 FE FF FF: call dword ptr [ebp - 0x16c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e40c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 55: je 0x5853e47a
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x5853e463
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 174h], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 8C FE FF FF: call dword ptr [ebp - 0x174]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e46d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0d0h], 0
        ; Exact mapped bytes 74 55: je 0x5853e4db
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x5853e4c4
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 17ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 84 FE FF FF: call dword ptr [ebp - 0x17c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e4ce
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d0h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853e4ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 30h
        ; Exact mapped bytes 7D 6F: jge 0x5853e562
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 0dch], 0
        ; Exact mapped bytes 74 5D: je 0x5853e560
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0dch]
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x5853e545
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 184h], edx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 7C FE FF FF: call dword ptr [ebp - 0x184]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e54f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0dch], 0
        ; Exact mapped bytes EB 82: jmp 0x5853e4e4
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853e574
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 6F: jge 0x5853e5e9
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 1ach], 0
        ; Exact mapped bytes 74 5D: je 0x5853e5e7
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1ach]
        mov dword ptr [ebp - 90h], ecx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x5853e5cc
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e5d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 1ach], 0
        ; Exact mapped bytes EB 82: jmp 0x5853e56b
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853e5fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 7D 6F: jge 0x5853e670
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 0b4h], 0
        ; Exact mapped bytes 74 5D: je 0x5853e66e
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x5853e653
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 194h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 6C FE FF FF: call dword ptr [ebp - 0x194]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e65d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 0b4h], 0
        ; Exact mapped bytes EB 82: jmp 0x5853e5f2
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 2d4h], 0
        ; Exact mapped bytes 74 2B: je 0x5853e6a7
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2d4h]
        mov dword ptr [ebp - 19ch], edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        ; Exact mapped bytes E8 B4 29 2F 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x29
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2d4h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5853e6b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 6F: jge 0x5853e72e
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 1d0h], 0
        ; Exact mapped bytes 74 5D: je 0x5853e72c
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x5853e711
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 60 FE FF FF: call dword ptr [ebp - 0x1a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5853e71b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 1d0h], 0
        ; Exact mapped bytes EB 82: jmp 0x5853e6b0
        __asm _emit 0xeb
        __asm _emit 0x82
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BA 1B 00 00: call 0x585402f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 71 27 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x71
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
