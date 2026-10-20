// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AD0B0 .. +0x27D bytes.
extern "C" __declspec(naked) void FUN_586ad0b0_586AD0B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b38dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
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
        push 0
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 DE AF E4 FF: call 0x584f80c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C F3 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x586ad107
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D F3 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x586ad11c
        __asm _emit 0x75
        __asm _emit 0x15
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 7A C9 E4 FF: call 0x584f9a90
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc9
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 00 02 00 00: jmp 0x586ad31c
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 87 C3 01 00 00: ja 0x586ad2f8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 95 30 D3 6A 58: jmp dword ptr [edx*4 + 0x586ad330]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xd3
        __asm _emit 0x6a
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 84h], 3
        ; Exact mapped bytes 74 2F: je 0x586ad17a
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A F3 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC F2 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 01 00 00: call 0x586ad340
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586ad1a7
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB F2 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD F2 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1A F6 FF FF: call 0x586ac7c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4C 01 00 00: jmp 0x586ad2f8
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 84h], 2
        ; Exact mapped bytes 74 15: je 0x586ad1cd
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D A0 E2 FF: call 0x584d71d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, ax
        ; Exact mapped bytes A3 48 5D 96 58: mov dword ptr [0x58965d48], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 22: jmp 0x586ad1ef
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 48 5D 96 58: mov ecx, dword ptr [0x58965d48]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, 1
        ; Exact mapped bytes 89 0D 48 5D 96 58: mov dword ptr [0x58965d48], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 48 5D 96 58 08: cmp dword ptr [0x58965d48], 8
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 7E 0A: jle 0x586ad1ef
        __asm _emit 0x7e
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 48 5D 96 58 00 00 00 00: mov dword ptr [0x58965d48], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 F2 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 F2 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 58965d48h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 02 00 00: call 0x586ad430
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x586ad2f8
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 84h], 1
        ; Exact mapped bytes 74 2F: je 0x586ad261
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 F2 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 F2 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 52 03 00 00: call 0x586ad5b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586ad28e
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 F2 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 F1 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 33 F5 FF FF: call 0x586ac7c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 68: jmp 0x586ad2f8
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 84h], 4
        ; Exact mapped bytes 74 2F: je 0x586ad2cb
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 F1 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB F1 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B8 03 00 00: call 0x586ad680
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586ad2f8
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA F1 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C F1 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 F4 FF FF: call 0x586ac7c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 E7 FF FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 75 C7 E4 FF: call 0x584f9a90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc7
        __asm _emit 0xe4
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
