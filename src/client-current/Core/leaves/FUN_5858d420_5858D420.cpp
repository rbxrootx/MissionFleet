// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858D420 .. +0x40A bytes.
extern "C" __declspec(naked) void FUN_5858d420_5858D420() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884180h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 88h
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
        mov dword ptr [eax], 588aaf5ch
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 15: je 0x5858d472
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 DC 3B 2A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 15: je 0x5858d490
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 BE 3B 2A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 37: je 0x5858d4d0
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5858d4bf
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858d4c6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858d4e2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x5858d621
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 30h], 0
        ; Exact mapped bytes 74 3F: je 0x5858d538
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 30h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x5858d523
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858d52a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 30h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 38h], 0
        ; Exact mapped bytes 74 3F: je 0x5858d584
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 38h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x5858d56f
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 A8: call dword ptr [ebp - 0x58]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa8
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858d576
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 38h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 40h], 0
        ; Exact mapped bytes 74 3F: je 0x5858d5d0
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 40h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x5858d5bb
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858d5c2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 40h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 48h], 0
        ; Exact mapped bytes 74 3F: je 0x5858d61c
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 48h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x5858d607
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858d60e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 48h], 0
        ; Exact mapped bytes E9 B8 FE FF FF: jmp 0x5858d4d9
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 37: je 0x5858d661
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 17: je 0x5858d650
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858d657
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 50h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 54h], 0
        ; Exact mapped bytes 74 49: je 0x5858d6bc
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 54h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 17: je 0x5858d6a2
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 78h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858d6a9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 54h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 54h], 0
        ; Exact mapped bytes 74 4F: je 0x5858d71d
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 54h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1A: je 0x5858d700
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858d70a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 54h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 43: je 0x5858d769
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x5858d755
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 88h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 78 FF FF FF: call dword ptr [ebp - 0x88]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858d75f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 43: je 0x5858d7b5
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x5858d7a1
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 90h], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 70 FF FF FF: call dword ptr [ebp - 0x90]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5858d7ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 B0 42 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 A5 42 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 97 42 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 89 42 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 EA FA FF FF: call 0x5858d2e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 2C FB FF FF: call 0x5858d330
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 C1 FB FF FF: call 0x5858d3d0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 66 FB FF FF: call 0x5858d380
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
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
        ret
    }
}
