// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787010 .. +0x517 bytes.
extern "C" __declspec(naked) void FUN_58787010_58787010() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890bb6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 98h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 14 B2 CF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b67fch
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        xor eax, eax
        mov dword ptr [ecx + 60h], edx
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 68h], 0ah
        push 70h
        ; Exact mapped bytes E8 0B 9F 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 40: je 0x58787149
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 1ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 9ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        push edx
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6C B2 CF FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58787150
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 94 ED CF FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xed
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 E5 EC CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 61 9E 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x587871d0
        __asm _emit 0x74
        __asm _emit 0x1d
        push 2ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 55 B1 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x587871d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 58h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 5ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 AA E3 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 60h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 24 EC CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E0 9D 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1D: je 0x58787251
        __asm _emit 0x74
        __asm _emit 0x1d
        push 36h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D4 B0 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58787258
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 68h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 29 E3 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 6ch], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 F3 EC CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 5F 9D 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 38: je 0x587872ed
        __asm _emit 0x74
        __asm _emit 0x38
        push 9ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B D8 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 4ah
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 38 B0 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587872f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 74h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 78h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 8D E2 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 07 EB CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xeb
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 C3 9C 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 35: je 0x58787386
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 D7 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        push 4ah
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8F F4 CF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878738d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 8B 81 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 37 9C 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 3B: je 0x58787418
        __asm _emit 0x74
        __asm _emit 0x3b
        push 21h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 D7 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 4ah
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0D AF CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xaf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878741f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 90h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [edx + 0b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 94h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 56 E1 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 A2 9B 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3B: je 0x587874ad
        __asm _emit 0x74
        __asm _emit 0x3b
        push 9
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 D6 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd6
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 4ah
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 68 F3 CF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x587874b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 9ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [edx + 0b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 0a0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 C1 E0 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 45 80 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
