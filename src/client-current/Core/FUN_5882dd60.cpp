// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882DD60 .. +0x2F8 bytes.
extern "C" __declspec(naked) void FUN_5882dd60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892765h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 6ch
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
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 39: je 0x5882ddc4
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x5882ddc4
        __asm _emit 0x7e
        __asm _emit 0x2b
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 08: je 0x5882dda7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5882ddae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 588be80ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 100h
        push 58965fb8h
        ; Exact mapped bytes E8 BF 63 F8 FF: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x5882de5e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], 30h
        push 0
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 50h], 58965fb8h
        mov dword ptr [ebp - 70h], 5882da20h
        mov dword ptr [ebp - 74h], 0bh
        mov eax, dword ptr [ebp + 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 4C 44 89 58: call dword ptr [0x5889444c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4ch], 0
        push 7f00h
        push 0
        ; Exact mapped bytes FF 15 60 44 89 58: call dword ptr [0x58894460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 68h], 0
        push 4
        ; Exact mapped bytes FF 15 BC 40 89 58: call dword ptr [0x588940bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], eax
        lea edx, [ebp - 78h]
        push edx
        ; Exact mapped bytes FF 15 38 44 89 58: call dword ptr [0x58894438]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x5882de5e
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], eax
        xor eax, eax
        ; Exact mapped bytes E9 ED 01 00 00: jmp 0x5882e04b
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 2ch], 0ah
        ; Exact mapped bytes 75 08: jne 0x5882de6c
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5882de75
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 24h]
        add edx, 1ch
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp + 2ch], 0ah
        ; Exact mapped bytes 75 08: jne 0x5882de83
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 09: jmp 0x5882de8c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 20h]
        add ecx, 6
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 2ch], 8
        ; Exact mapped bytes 74 09: je 0x5882de9b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 90000000h
        ; Exact mapped bytes EB 1C: jmp 0x5882deb7
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp + 2ch], 0ah
        ; Exact mapped bytes 75 09: jne 0x5882deaa
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 90000000h
        ; Exact mapped bytes EB 07: jmp 0x5882deb1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0ca0000h
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 58965fb8h
        push 58965fb8h
        push 0
        ; Exact mapped bytes FF 15 3C 44 89 58: call dword ptr [0x5889443c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 1C 5F 96 58: mov dword ptr [0x58965f1c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 1C 5F 96 58 00: cmp dword ptr [0x58965f1c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x5882e049
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 D8 44 89 58: call dword ptr [0x588944d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 90 44 89 58: call dword ptr [0x58894490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 78h
        ; Exact mapped bytes E8 E5 30 00 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 28: je 0x5882df5a
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CB F9 FF FF: call 0x5882d920
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5882df61
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 89 0D 74 5F 96 58: mov dword ptr [0x58965f74], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 86 30 00 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 18: je 0x5882dfa9
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        ; Exact mapped bytes 8B 15 74 5F 96 58: mov edx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1C F9 FF FF: call 0x5882d8c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5882dfb0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 89 0D 78 5F 96 58: mov dword ptr [0x58965f78], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push 1
        push 0
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 0A 5C F9 FF: call 0x587c3be0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        push 40220h
        ; Exact mapped bytes E8 21 30 00 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 13: je 0x5882e009
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2C F3 FF FF: call 0x5882d330
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5882e010
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 89 15 D0 60 96 58: mov dword ptr [0x589660d0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp + 2ch], 0ah
        ; Exact mapped bytes 74 14: je 0x5882e040
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 D4 60 96 58 03 00 00 00: mov dword ptr [0x589660d4], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 D8 60 96 58 1A 00 00 00: mov dword ptr [0x589660d8], 0x1a
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB 01 D4 FF: call 0x5856e240
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x5882e04b
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5882e04b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
    }
}
