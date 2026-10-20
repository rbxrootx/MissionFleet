// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E589 .. +0x417 bytes.
extern "C" __declspec(naked) void FUN_0054e589_0054E589() {
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
        push 58ea88h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8D D8 FF FF: call 0x54be86
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
        push 58e968h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6D D8 FF FF: call 0x54be86
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
        ; Exact mapped bytes 74 2F: je 0x54e667
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 30 E5 58 00: mov ecx, dword ptr [0x58e530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], ecx
        ; Exact mapped bytes 8B 15 34 E5 58 00: mov edx, dword ptr [0x58e534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes A1 38 E5 58 00: mov eax, dword ptr [0x58e538]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 0D 3C E5 58 00: mov ecx, dword ptr [0x58e53c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0x58
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
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x54e799
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x54e799
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
        ; Exact mapped bytes E8 9A C5 FA FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54e6be
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c9h
        push 5ccb40h
        ; Exact mapped bytes E8 47 63 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e6be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x54e693
        __asm _emit 0x75
        __asm _emit 0xcf
        lea edx, [ebp - 64h]
        mov dword ptr [ebp - 0a0h], edx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 75 0C: jne 0x54e6e2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes EB 4E: jmp 0x54e730
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 0a4h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B6 B0 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], esp
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 96 28 F4 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 AE 4D F5 FF: call 0x4a34f0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4d
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 A0 4D F5 FF: call 0x4a34f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4d
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        add esi, eax
        lea ecx, [esi + esi + 2]
        push ecx
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 2A: je 0x54e799
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        ; Exact mapped bytes E8 BD 35 F6 FF: call 0x4b1d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 1C: je 0x54e7be
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
        ; Exact mapped bytes EB 6B: jmp 0x54e829
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 65: jne 0x54e829
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
        ; Exact mapped bytes 75 48: jne 0x54e829
        __asm _emit 0x75
        __asm _emit 0x48
        lea eax, [ebp - 80h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 60 2A 5E 00: call dword ptr [0x5e2a60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x2a
        __asm _emit 0x5e
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
        ; Exact mapped bytes 74 13: je 0x54e81c
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
        ; Exact mapped bytes 75 E1: jne 0x54e803
        __asm _emit 0x75
        __asm _emit 0xe1
        mov dword ptr [ebp - 78h], 1
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 16: je 0x54e845
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 98h], edx
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 58: jmp 0x54e89d
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 3C: je 0x54e887
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
        ; Exact mapped bytes 74 16: je 0x54e885
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 16: jmp 0x54e89d
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
        ; Exact mapped bytes 74 07: je 0x54e8c1
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
        ; Exact mapped bytes E8 FA FA FF FF: call 0x54e40e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 0A: je 0x54e931
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x54e94a
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
        ; Exact mapped bytes 75 E1: jne 0x54e931
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 13: je 0x54e969
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
        ; Exact mapped bytes 75 E1: jne 0x54e950
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 13: je 0x54e988
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
        ; Exact mapped bytes 75 E1: jne 0x54e96f
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
