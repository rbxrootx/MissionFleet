// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877FCA0 .. +0x5B8 bytes.
extern "C" __declspec(naked) void FUN_5877fca0_5877FCA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 90 05 00 00: je 0x58780256
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 41 F0 FF: call 0x58683e00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0xf0
        __asm _emit 0xff
        and eax, 10000000h
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x5877fdb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x5877fdb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 55 19 D5 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x19
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5877fdb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 C2 4C E5 FF: call 0x585d49d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4c
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5877fd1e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x5877fdb2
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 50 C7 D0 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 7C 3A: jl 0x5877fd72
        __asm _emit 0x7c
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 6C D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 A9 E4 FD FF: call 0x5875e210
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5877fd72
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 33 C3 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 35 6C D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 4F E5 FF: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4f
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5877fdb2
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes 75 07: jne 0x5877fdb2
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 51 04 00 00: je 0x5878020d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 6C D0 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 42 5C D1 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 7d000h
        cdq
        idiv ecx
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 6B D0 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 5C D1 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 5dc00h
        cdq
        idiv ecx
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 6B D0 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 4B D0 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4b
        __asm _emit 0xd0
        __asm _emit 0xff
        add eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 6B D0 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 59 D1 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 85 6B D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a0h]
        sub ecx, eax
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 5F C2 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 9ch]
        sub ecx, eax
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 AB 14 D1 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7F 15: jg 0x5877fe82
        __asm _emit 0x7f
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 9A 14 D1 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 8E EE 02 00 00: jle 0x58780170
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 60 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 08: je 0x5877fe9a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5877fea1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes F2 0F 2A 45 C8: cvtsi2sd xmm0, dword ptr [ebp - 0x38]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xc8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 2A 45 E4: cvtsi2sd xmm0, dword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe4
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C0 11 0D 00: call 0x58851080
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 9D 50 FF FF FF: fstp qword ptr [ebp - 0xb0]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 50 FF FF FF: movsd xmm0, qword ptr [ebp - 0xb0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 05 B0 4E 8B 58: mulsd xmm0, qword ptr [0x588b4eb0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x4e
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 27: jge 0x5877ff15
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 0D: jge 0x5877ff01
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0e10h
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x5877ff0d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0e10h
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 06: jmp 0x5877ff1b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 0a8h], 0fffffd80h
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 0a8h]
        push ecx
        ; Exact mapped bytes E8 F9 3B D6 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3b
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 18h], 1f4h
        mov dword ptr [ebp - 50h], 0fffffed4h
        mov dword ptr [ebp - 4ch], 0f0h
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 08: jle 0x5877ff7f
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 20: jmp 0x5877ff9f
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        neg ecx
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 7D 0A: jge 0x5877ff93
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 18h]
        neg edx
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 06: jmp 0x5877ff99
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 7E 08: jle 0x5877ffb5
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes EB 1C: jmp 0x5877ffd1
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 7D 08: jge 0x5877ffc5
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 06: jmp 0x5877ffcb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 180h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 200h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 56 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x587800f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 44: jne 0x5878004d
        __asm _emit 0x75
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 3B: je 0x5878004d
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 6
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, 73h
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E9 55 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 68h], ecx
        push 2
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 36 9D D3 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x9d
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4C: jmp 0x58780099
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 18h]
        neg edx
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 75 42: jne 0x58780099
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 39: je 0x58780099
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 6
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 9B 55 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 E8 9C D3 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0dch
        ; Exact mapped bytes 75 27: jne 0x587800c9
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 1E: je 0x587800c9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 0fh
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 6A 56 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2E: jmp 0x587800f7
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 10h], 0ffffff24h
        ; Exact mapped bytes 75 25: jne 0x587800f7
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 1C: je 0x587800f7
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 0fh
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 3A 56 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 32: je 0x58780132
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 0ch]
        add eax, 19h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 32h
        idiv ecx
        mov edx, 47h
        sub edx, eax
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 0F F7 D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 74 33: je 0x5878016e
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 2A: je 0x5878016e
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 65 48 D0 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x48
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 D3 F6 D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf6
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x5878017b
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 5D D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5d
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5878019c
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5878019c
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x5878020b
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587801bf
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587801a5
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 49 54 D1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x587801e3
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5878020b
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x58780209
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 25 54 D1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 9A: jmp 0x587801a5
        __asm _emit 0xeb
        __asm _emit 0x9a
        ; Exact mapped bytes EB 49: jmp 0x58780256
        __asm _emit 0xeb
        __asm _emit 0x49
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 5D D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 67 D0 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x5878024c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 74 FF FF FF: call dword ptr [ebp - 0x8c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58780256
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov esp, ebp
    }
}
