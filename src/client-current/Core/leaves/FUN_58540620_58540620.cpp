// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58540620 .. +0x3CE bytes.
extern "C" __declspec(naked) void FUN_58540620_58540620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 39 02 00 00: jne 0x5854086d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 300h], 0
        ; Exact mapped bytes 0F 8E E0 00 00 00: jle 0x58540724
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 75 52: jne 0x585406a4
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 80 0C 28 00: call 0x587c12e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58540673
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 15: jge 0x5854068e
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        ; Exact mapped bytes E8 55 0C 28 00: call 0x587c12e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x5854066a
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 90 00 00: call 0x585496e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 0F 00 00: call 0x58541630
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x58540724
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 98h]
        ; Exact mapped bytes 75 72: jne 0x58540724
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 B0 05 28 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 20 90 FE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7D 3C: jge 0x58540713
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 0B 0B 28 00: call 0x587c11f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0b
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585406f8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 7D 15: jge 0x58540713
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0b4h]
        ; Exact mapped bytes E8 E0 0A 28 00: call 0x587c11f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x585406ef
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 8F 00 00: call 0x585496e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 0F 00 00: call 0x58541630
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x585407bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 2d8h]
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x58540750
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 F9 FF FF: call 0x585400f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x58540759
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 E3 FF FF: call 0x5853eaf0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 64h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x585407ba
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 64h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 26 B6 27 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb6
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x5854086d
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 74 0E: je 0x585407db
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 75 7B: jne 0x58540856
        __asm _emit 0x75
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2c8h], 0
        ; Exact mapped bytes 75 6D: jne 0x58540854
        __asm _emit 0x75
        __asm _emit 0x6d
        mov eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 C6 02 00 00: mov word ptr [ecx + 0x2c6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 C4 02 00 00: mov word ptr [eax + 0x2c4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2b8h], 0ffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2b4h], 0ffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2c0h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2bch], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 1
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 55 F4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5854086d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 75 09: jne 0x5854086d
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 ED FF FF: call 0x5853f5f0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x585409e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 75 30: jne 0x585408b5
        __asm _emit 0x75
        __asm _emit 0x30
        push 588a7814h
        ; Exact mapped bytes E8 61 17 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 47 F9 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x585409e5
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 75 30: jne 0x585408f3
        __asm _emit 0x75
        __asm _emit 0x30
        push 588a7830h
        ; Exact mapped bytes E8 23 17 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 47 F9 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x585409e5
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 74 0E: je 0x5854090f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 75 30: jne 0x5854093f
        __asm _emit 0x75
        __asm _emit 0x30
        push 588a784ch
        ; Exact mapped bytes E8 D7 16 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 46 F9 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x585409e5
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x585409e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 58 00 00: call 0x585461b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5854098d
        __asm _emit 0x74
        __asm _emit 0x2d
        push 588a7864h
        ; Exact mapped bytes E8 86 16 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 46 F9 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 58: jmp 0x585409e5
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 26ch]
        cmp eax, 0bh
        ; Exact mapped bytes 74 49: je 0x585409e5
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 26ch]
        cmp edx, 0ch
        ; Exact mapped bytes 74 3A: je 0x585409e5
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 0dh
        ; Exact mapped bytes 74 2B: je 0x585409e5
        __asm _emit 0x74
        __asm _emit 0x2b
        push 588a7880h
        ; Exact mapped bytes E8 2C 16 FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 46 F9 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
