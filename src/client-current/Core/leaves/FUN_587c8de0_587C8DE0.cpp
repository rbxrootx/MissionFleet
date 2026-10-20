// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8DE0 .. +0x380 bytes.
extern "C" __declspec(naked) void FUN_587c8de0_587C8DE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 10h]
        imul eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 44h], edx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 F1 3F 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], 24h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x587c8f39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 1
        ; Exact mapped bytes 75 74: jne 0x587c8ec5
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [ebp + 14h]
        or eax, 10h
        or eax, 100h
        or eax, 10000h
        or eax, 8000h
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 18h
        push ecx
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 8B 15 94 5F 96 58: mov edx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 7D 07: jge 0x587c8e99
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B7 02 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1ch
        push ecx
        push 588d1a28h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x587c8ec3
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8D 02 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 72: jmp 0x587c8f37
        __asm _emit 0xeb
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp + 14h]
        or eax, 100h
        or eax, 10000h
        or eax, 8000h
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 58 1A 8D 58: mov ecx, dword ptr [0x588d1a58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 15 5C 1A 8D 58: mov edx, dword ptr [0x588d1a5c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes A1 60 1A 8D 58: mov eax, dword ptr [0x588d1a60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 64 1A 8D 58: mov ecx, dword ptr [0x588d1a64]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x1a
        __asm _emit 0x8d
        __asm _emit 0x58
        mov dword ptr [ebp - 8], ecx
        push 0
        mov edx, dword ptr [ebp - 2ch]
        add edx, 18h
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 94 5F 96 58: mov ecx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 7D 07: jge 0x587c8f37
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 68: jmp 0x587c8fa1
        __asm _emit 0xeb
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp + 14h]
        or eax, 100h
        or eax, 10000h
        or eax, 8000h
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 30: je 0x587c8f91
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 18h
        push ecx
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes A1 98 5F 96 58: mov eax, dword ptr [0x58965f98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 8B 15 98 5F 96 58: mov edx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 7D 07: jge 0x587c8f91
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x587c8fa1
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 27: je 0x587c8fd8
        __asm _emit 0x74
        __asm _emit 0x27
        lea edx, [ebp - 30h]
        push edx
        push 588d1a18h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x587c8fd8
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, 8
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 52 80 06 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 07: jne 0x587c9009
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x587c901b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 29: jae 0x587c904c
        __asm _emit 0x73
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 10h]
        imul eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [eax + ecx - 1]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + eax*8], edx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [eax + edx*8 + 4], ecx
        ; Exact mapped bytes EB C6: jmp 0x587c9012
        __asm _emit 0xeb
        __asm _emit 0xc6
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 5D: je 0x587c90af
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 7D 43: jge 0x587c90af
        __asm _emit 0x7d
        __asm _emit 0x43
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 15: je 0x587c9087
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 30h], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1B: je 0x587c90a8
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 44h], eax
        push 8
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 96 7F 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 34h], 0
        xor eax, eax
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x587c9150
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 15: je 0x587c90ca
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 30h], 0
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1B: je 0x587c90eb
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 48h], eax
        push 8
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 53 7F 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 57: je 0x587c914b
        __asm _emit 0x74
        __asm _emit 0x57
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 2ch]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 14h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 7C 27: jl 0x587c914b
        __asm _emit 0x7c
        __asm _emit 0x27
        push 0
        push 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 4ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F6 7E 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
