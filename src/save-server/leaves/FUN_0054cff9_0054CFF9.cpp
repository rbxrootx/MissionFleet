// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054CFF9 .. +0x417 bytes.
extern "C" __declspec(naked) void FUN_0054cff9_0054CFF9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0a4h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0a0h], 0
        mov dword ptr [ebp - 68h], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 80h], 0
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 0a8h], 0
        mov dword ptr [ebp - 7ch], 0
        push 641278h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8D D8 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        xor ecx, ecx
        cmp dword ptr [ebp - 70h], 0
        setne cl
        mov dword ptr [ebp - 9ch], ecx
        push 641158h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6D D8 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        lea eax, [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 2F: je 0x54d0d7
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 20 0D 64 00: mov ecx, dword ptr [0x640d20]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], ecx
        ; Exact mapped bytes 8B 15 24 0D 64 00: mov edx, dword ptr [0x640d24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes A1 28 0D 64 00: mov eax, dword ptr [0x640d28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 0D 2C 0D 64 00: mov ecx, dword ptr [0x640d2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], ecx
        lea edx, [ebp - 68h]
        push edx
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 51 40: call dword ptr [ecx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x40
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x54d209
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x54d209
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea eax, [ebp - 64h]
        push eax
        push 0f094h
        ; Exact mapped bytes E8 2A CC F8 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcc
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54d12e
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c9h
        push 679318h
        ; Exact mapped bytes E8 17 BC FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d12e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x54d103
        __asm _emit 0x75
        __asm _emit 0xcf
        lea edx, [ebp - 64h]
        mov dword ptr [ebp - 0a0h], edx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 75 0C: jne 0x54d152
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes EB 4E: jmp 0x54d1a0
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 0a4h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 26 8E F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], esp
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 56 04 F0 FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 4E 29 F1 FF: call 0x45fb00
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 40 29 F1 FF: call 0x45fb00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        add esi, eax
        lea ecx, [esi + esi + 2]
        push ecx
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 2A: je 0x54d209
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        ; Exact mapped bytes E8 ED 10 F2 FF: call 0x46e2e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 1C: je 0x54d22e
        __asm _emit 0x74
        __asm _emit 0x1c
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 78h], 1
        ; Exact mapped bytes EB 6B: jmp 0x54d299
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 65: jne 0x54d299
        __asm _emit 0x75
        __asm _emit 0x65
        lea edx, [ebp - 4]
        push edx
        push 3
        push 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 75 48: jne 0x54d299
        __asm _emit 0x75
        __asm _emit 0x48
        lea eax, [ebp - 80h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 F4 C2 68 00: call dword ptr [0x68c2f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 50: call dword ptr [ecx + 0x50]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x50
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 13: je 0x54d28c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 80h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 80h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x54d273
        __asm _emit 0x75
        __asm _emit 0xe1
        mov dword ptr [ebp - 78h], 1
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 16: je 0x54d2b5
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 98h], edx
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 58: jmp 0x54d30d
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 3C: je 0x54d2f7
        __asm _emit 0x74
        __asm _emit 0x3c
        lea ecx, [ebp - 98h]
        push ecx
        push 0
        push -1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 16: je 0x54d2f5
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 16: jmp 0x54d30d
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], ecx
        lea edx, [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 07: je 0x54d331
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E8 FA FA FF FF: call 0x54ce7e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 0A: je 0x54d3a1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x54d3ba
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x54d3a1
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 13: je 0x54d3d9
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 70h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x54d3c0
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 13: je 0x54d3f8
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 74h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 74h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x54d3df
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 0ch]
        lea esp, [ebp - 0bch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
