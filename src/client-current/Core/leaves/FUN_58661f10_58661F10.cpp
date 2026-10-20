// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58661F10 .. +0x73A bytes.
extern "C" __declspec(naked) void FUN_58661f10_58661F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 73 E5 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x73
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 0F 84 F8 06 00 00: je 0x5866263c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 61 38 E3 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x38
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 84 E0 06 00 00: je 0x5866263c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58661f6f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C4 37 E3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 84 C3 06 00 00: je 0x5866263c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 6F 6E FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x58661fc6
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3B 75 E5 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x75
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5D E5 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x58661ffc
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 FD 74 E5 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 777777h
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 25 E5 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe5
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 EC 6D FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        cwde
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 6
        ; Exact mapped bytes 0F 87 C6 01 00 00: ja 0x586621d8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 24 8D 4C 26 66 58: jmp dword ptr [ecx*4 + 0x5866264c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x26
        __asm _emit 0x66
        __asm _emit 0x58
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 5ch], ecx
        push 588af790h
        ; Exact mapped bytes E8 B5 FF EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push 777777h
        push 0
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 CC E4 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x586621d8
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 64h], edx
        push 588af7ach
        ; Exact mapped bytes E8 77 FF EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 8E E4 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x586621d8
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 6ch], eax
        push 588af7c8h
        ; Exact mapped bytes E8 39 FF EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        push 0ffffffh
        push 0
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 50 E4 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x586621d8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 74h], ecx
        push 588af7e4h
        ; Exact mapped bytes E8 FB FE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 12 E4 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x586621d8
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 7ch], edx
        push 588af808h
        ; Exact mapped bytes E8 BD FE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 D4 E3 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe3
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x586621d8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 84h], eax
        push 588af824h
        ; Exact mapped bytes E8 7C FE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        push 0ffffffh
        push 0
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 90 E3 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 45: jmp 0x586621d8
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 8ch], ecx
        push 588af844h
        ; Exact mapped bytes E8 3B FE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 49 E3 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe3
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 90 30 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 08: movsx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 0F 84 34 03 00 00: je 0x58662520
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 7C 30 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 93 E5 FF: call 0x584bb570
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x93
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 00 02 00 00: je 0x58662414
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 54 30 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 50 08: movsx edx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x08
        cmp edx, 6
        ; Exact mapped bytes 75 3C: jne 0x58662261
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 43 30 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 93 E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x93
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af864h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x586623a2
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 07 30 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 08: movsx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x08
        cmp eax, 3
        ; Exact mapped bytes 75 52: jne 0x586622c4
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F6 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 98h], ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E5 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 92 E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x92
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af86ch
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x586623a2
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A4 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 3C: jne 0x5866230e
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 96 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 92 E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x92
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af874h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x586623a2
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5A 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 3A: jne 0x58662355
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4D 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        push 0
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 92 E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x92
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af87ch
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 4D: jmp 0x586623a2
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 13 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 02 2F F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 92 E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x92
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af884h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 46 6A FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 74 30: je 0x586623e1
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 0b0h], edx
        push 0ffffffh
        push 0
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 42 E1 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2E: jmp 0x5866240f
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 0b4h], eax
        push 777777h
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 12 E1 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x5866251b
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 54 2E F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C A9 F1 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 33 2E F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 91 E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x58662482
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0B 2E F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F A9 F1 FF: call 0x5857cd90
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 66 69 FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 74 46: je 0x586624d7
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 0dch], ecx
        push 588af88ch
        ; Exact mapped bytes E8 3E FB EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 4C E0 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 44: jmp 0x5866251b
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 0d0h], edx
        push 588af8a4h
        ; Exact mapped bytes E8 F8 FA EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        push 777777h
        push 0
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 06 E0 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe0
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x586625b9
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C8 68 FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 74 46: je 0x58662575
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 0d8h], ecx
        push 588af8bch
        ; Exact mapped bytes E8 A0 FA EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 AE DF 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 44: jmp 0x586625b9
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 0e0h], edx
        push 588af8d4h
        ; Exact mapped bytes E8 5A FA EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        push 777777h
        push 0
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 68 DF 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AF 70 F2 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58662607
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 0e8h], ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8B 70 F2 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 1C DF 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 30: jmp 0x58662637
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 0ech], eax
        push 777777h
        push 0
        push 588af8ech
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 EA DE 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xde
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 28 F9 FF FF: jmp 0x58661f64
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 0A EA 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
