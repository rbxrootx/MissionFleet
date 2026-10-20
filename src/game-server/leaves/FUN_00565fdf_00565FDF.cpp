// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565FDF .. +0x351 bytes.
extern "C" __declspec(naked) void FUN_00565fdf_00565FDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], 0
        push 4eh
        push 5d0c78h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 49 51 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x56603f
        __asm _emit 0x74
        __asm _emit 0x22
        push 1
        push 48h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2C 9E F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56603f
        __asm _emit 0x75
        __asm _emit 0x11
        push 50h
        push 5d0c78h
        ; Exact mapped bytes E8 C6 E9 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56603f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x566017
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x56606b
        __asm _emit 0x74
        __asm _emit 0x20
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 DC 9D F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56606b
        __asm _emit 0x75
        __asm _emit 0x11
        push 51h
        push 5d0c78h
        ; Exact mapped bytes E8 9A E9 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56606b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x566045
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 74 11: je 0x56608e
        __asm _emit 0x74
        __asm _emit 0x11
        push 52h
        push 5d0c78h
        ; Exact mapped bytes E8 77 E9 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56608e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x566071
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 1F: je 0x5660bf
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 88h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 11: je 0x5660bf
        __asm _emit 0x74
        __asm _emit 0x11
        push 55h
        push 5d0c78h
        ; Exact mapped bytes E8 46 E9 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5660bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x566094
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 88h], eax
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 25: je 0x566109
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 98h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 98h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x5660d8
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 9ch
        ; Exact mapped bytes E8 95 75 F8 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 69: je 0x56618c
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 09: jne 0x566138
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 36: jmp 0x56616e
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 69 36 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x36
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 55 AE F2 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xae
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 2ch]
        add eax, 98h
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 38 2A 5E 00: call dword ptr [0x5e2a38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x56618c
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x5662ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        lea eax, [ebp - 20h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 08 2A 5E 00: call dword ptr [0x5e2a08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5661c4
        __asm _emit 0x74
        __asm _emit 0x11
        push 68h
        push 5d0c78h
        ; Exact mapped bytes E8 41 E8 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5661c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x5661a3
        __asm _emit 0x75
        __asm _emit 0xd9
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 11: jne 0x5661e1
        __asm _emit 0x75
        __asm _emit 0x11
        push 69h
        push 5d0c78h
        ; Exact mapped bytes E8 24 E8 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5661e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x5661ca
        __asm _emit 0x75
        __asm _emit 0xe3
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x56624f
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 25: je 0x566242
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 98h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 98h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x566211
        __asm _emit 0x75
        __asm _emit 0xc9
        xor eax, eax
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x566324
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        add eax, 94h
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 98h]
        push edx
        push 58e540h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C5 5D FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 9ch
        ; Exact mapped bytes E8 5E 78 F8 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 07: je 0x5662ac
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 42 AC FE FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x566321
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 41h]
        test edx, edx
        ; Exact mapped bytes 74 41: je 0x56631f
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5662fb
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 5d0c78h
        ; Exact mapped bytes E8 0A E7 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5662fb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5662de
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 98h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes EB 9C: jmp 0x5662bd
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov eax, dword ptr [ebp - 10h]
        lea esp, [ebp - 40h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
