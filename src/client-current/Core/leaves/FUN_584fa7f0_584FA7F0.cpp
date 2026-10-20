// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FA7F0 .. +0x42A bytes.
extern "C" __declspec(naked) void FUN_584fa7f0_584FA7F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x584fa904
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], -1
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x584fa8f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 6A 28 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6a
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x584fa8ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 8C 94 58: mov eax, dword ptr [0x58948c30]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        add eax, 20h
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 74 FE FF FF: call 0x584fa6c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 0B: shr ax, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 85 41 00 00: call 0x584fe9f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b8h], 0ffffffffh
        mov eax, 7ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 41 5E: and ax, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x41
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 5E: mov word ptr [edx + 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A C8 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 11 1B 00: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 190h
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        neg eax
        add eax, 12ch
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes 8B 0D D4 70 94 58: mov ecx, dword ptr [0x589470d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 32 07 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 24h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A4 B6 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 07: jmp 0x584fa8f6
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1E 03 00 00: jmp 0x584fac14
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x584fa8ff
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 15 03 00 00: jmp 0x584fac14
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0B 03 00 00: jmp 0x584fac0f
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 69 28 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x69
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 EB 02 00 00: je 0x584fac0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b8h], -1
        ; Exact mapped bytes 74 3A: je 0x584fa96d
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 69 28 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x69
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 0B: shr dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 40 00 00: call 0x584fe9f0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 58: jmp 0x584fa9c5
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        add ecx, 20h
        ; Exact mapped bytes E8 45 C0 F8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584fa98b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 28 17 F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 34: je 0x584fa9c5
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 47 15 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 20 A0 F8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 1B: jne 0x584fa9c3
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 15 30 8C 94 58: mov edx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        add edx, 20h
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 10 19 00 00: call 0x584fc2d0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 02: jmp 0x584fa9c5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BB: jmp 0x584fa980
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3F 51 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x584fab14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2B 51 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 84 89 FC FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x584fab14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x584faaaa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 04 51 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 0B: shr dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BA 3F 00 00: call 0x584fe9f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CE 50 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 27 89 FC FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 0eh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 0B: shr dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 C1 E2 0B: shl dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x0b
        mov eax, 7ffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 23 01: and ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x01
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DE 9F F8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 50 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 88 FC FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 68h], edx
        ; Exact mapped bytes EB 6A: jmp 0x584fab14
        __asm _emit 0xeb
        __asm _emit 0x6a
        ; Exact mapped bytes A1 30 8C 94 58: mov eax, dword ptr [0x58948c30]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        add eax, 20h
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F 50 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F0 FB FF FF: call 0x584fa6c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 50 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D 88 FC FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 0eh
        mov dword ptr [ebp - 1ch], eax
        mov ecx, 7ffh
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 23 0A: and cx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A 50 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 88 FC FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [eax + 68h], 0ffffffffh
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 C6 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 12 1B 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CB 9E F8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 4ch]
        sub eax, 1eh
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 48h]
        sub ecx, 37h
        mov dword ptr [ebp - 48h], ecx
        lea edx, [ebp - 4ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 48 FA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 48 00 00: call 0x584ff400
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 3E 00 00: call 0x584fe9f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 66 C1 E2 0B: shl dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x0b
        mov eax, 7ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 41 5E: and ax, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x41
        __asm _emit 0x5e
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 5E: mov word ptr [edx + 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0b8h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D C5 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 0E 1B 00: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, 190h
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        neg edx
        add edx, 12ch
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes 8B 0D D4 70 94 58: mov ecx, dword ptr [0x589470d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 2F 07 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 88 B3 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 04: jmp 0x584fac0f
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x584fac14
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
