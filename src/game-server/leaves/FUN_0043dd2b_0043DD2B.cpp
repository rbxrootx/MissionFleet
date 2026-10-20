// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043DD2B .. +0x868 bytes.
extern "C" __declspec(naked) void FUN_0043dd2b_0043DD2B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a87ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 108h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 114h]
        mov ecx, 42h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0d4h], ecx
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax], 581300h
        mov dword ptr [ebp - 4], 2
        mov dword ptr [ebp - 50h], 5d3278h
        mov dword ptr [ebp - 4ch], 5d36f8h
        mov dword ptr [ebp - 48h], 5d3b48h
        mov dword ptr [ebp - 44h], 5d3fb0h
        mov dword ptr [ebp - 40h], 5d43f0h
        mov dword ptr [ebp - 3ch], 5d4830h
        mov dword ptr [ebp - 38h], 5d4c70h
        mov dword ptr [ebp - 34h], 5d51a0h
        mov dword ptr [ebp - 30h], 5d55e0h
        mov dword ptr [ebp - 2ch], 5d5a20h
        mov dword ptr [ebp - 28h], 5d5e60h
        mov dword ptr [ebp - 24h], 5d62a0h
        mov dword ptr [ebp - 20h], 5d66e0h
        mov dword ptr [ebp - 1ch], 5d6b20h
        mov dword ptr [ebp - 18h], 5d6f60h
        mov dword ptr [ebp - 14h], 5d73b0h
        mov dword ptr [ebp - 10h], 10h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x43de1d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + eax*4 - 50h]
        ; Exact mapped bytes E8 45 3E 00 00: call 0x441c50
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x43de1b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 10h
        ; Exact mapped bytes EB D2: jmp 0x43ddef
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 0d4h]
        mov byte ptr [ecx + 40ca4h], 0
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A2 A9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d4h]
        xor eax, eax
        mov al, byte ptr [edx + 40ca5h]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x43de52
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB EC: jmp 0x43de3e
        __asm _emit 0xeb
        __asm _emit 0xec
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx + 40c9ch]
        push edx
        ; Exact mapped bytes FF 15 14 24 5E 00: call dword ptr [0x5e2414]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 70 A9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 40c9ch]
        push ecx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 54 A9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 00 78 5D 00: mov edx, dword ptr [0x5d7800]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 1D: je 0x43debe
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 2A A9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43dec8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d4h]
        cmp dword ptr [eax + 40c98h], 0
        ; Exact mapped bytes 74 52: je 0x43df29
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx + 40c98h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 1D: je 0x43df0f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 D9 A8 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x43df19
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 40c98h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        cmp dword ptr [ecx + 40ca8h], 0
        ; Exact mapped bytes 74 52: je 0x43df8a
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 40ca8h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 1D: je 0x43df70
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 78 A8 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43df7a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 40ca8h], 0
        mov edx, dword ptr [ebp - 0d4h]
        cmp dword ptr [edx + 40cach], 0
        ; Exact mapped bytes 74 52: je 0x43dfeb
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 40cach]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 6ch], edx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 1D: je 0x43dfd1
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 6ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 17 A8 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43dfdb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 40cach], 0
        mov ecx, dword ptr [ebp - 0d4h]
        cmp dword ptr [ecx + 40cb4h], 0
        ; Exact mapped bytes 74 52: je 0x43e04c
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 40cb4h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 1D: je 0x43e032
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 B6 A7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e03c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 40cb4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        cmp dword ptr [edx + 40cb8h], 0
        ; Exact mapped bytes 74 52: je 0x43e0ad
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 40cb8h]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 7ch], edx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 1D: je 0x43e093
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 7ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 55 A7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e09d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 40cb8h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        cmp dword ptr [ecx + 40cbch], 0
        ; Exact mapped bytes 74 64: je 0x43e120
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 40cbch]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 84h], ecx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 23: je 0x43e106
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 E2 A6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e110
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 40cbch], 0
        mov edx, dword ptr [ebp - 0d4h]
        cmp dword ptr [edx + 0c28h], 0
        ; Exact mapped bytes 74 64: je 0x43e193
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 0c28h]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 23: je 0x43e179
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 6F A6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e183
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 0c28h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        cmp dword ptr [ecx + 40ccch], 0
        ; Exact mapped bytes 74 64: je 0x43e206
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 40ccch]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 94h], ecx
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 23: je 0x43e1ec
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 FC A5 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e1f6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 40ccch], 0
        mov edx, dword ptr [ebp - 0d4h]
        cmp dword ptr [edx + 40cc8h], 0
        ; Exact mapped bytes 74 64: je 0x43e279
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 9ch], edx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 23: je 0x43e25f
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 9ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 89 A5 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e269
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 40cc8h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        cmp dword ptr [ecx + 40cd0h], 0
        ; Exact mapped bytes 74 64: je 0x43e2ec
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 40cd0h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 23: je 0x43e2d2
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 16 A5 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e2dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 40cd0h], 0
        mov edx, dword ptr [ebp - 0d4h]
        cmp dword ptr [edx + 40cd4h], 0
        ; Exact mapped bytes 74 64: je 0x43e35f
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 40cd4h]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 0ach], edx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 23: je 0x43e345
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 0ach]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 A3 A4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e34f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 40cd4h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        cmp dword ptr [ecx + 40cb0h], 0
        ; Exact mapped bytes 74 64: je 0x43e3d2
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 40cb0h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 0b4h], ecx
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 23: je 0x43e3b8
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0b4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 30 A4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e3c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 40cb0h], 0
        mov edx, dword ptr [ebp - 0d4h]
        cmp dword ptr [edx + 40cc0h], 0
        ; Exact mapped bytes 74 64: je 0x43e445
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 40cc0h]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 23: je 0x43e42b
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 0bch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 BD A3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e435
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 40cc0h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        cmp dword ptr [ecx + 40cc4h], 0
        ; Exact mapped bytes 74 64: je 0x43e4b8
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 40cc4h]
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 0c4h], ecx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 23: je 0x43e49e
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 4A A3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e4a8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 40cc4h], 0
        ; Exact mapped bytes 83 3D 80 CB 5D 00 00: cmp dword ptr [0x5dcb80], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 58: je 0x43e519
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 80 CB 5D 00: mov edx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 0cch], eax
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 23: je 0x43e505
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 E3 A2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e50f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes C7 05 80 CB 5D 00 00 00 00 00: mov dword ptr [0x5dcb80], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 0c28h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        add ecx, 40cf0h
        ; Exact mapped bytes E8 26 1C 00 00: call 0x440160
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 0d4h]
        add ecx, 40d00h
        ; Exact mapped bytes E8 A1 1A 00 00: call 0x43fff0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 0d4h]
        add ecx, 40cf0h
        ; Exact mapped bytes E8 8C 1A 00 00: call 0x43fff0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 39 C3 04 00: call 0x48a8af
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 114h
        cmp ebp, esp
        ; Exact mapped bytes E8 51 A2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
