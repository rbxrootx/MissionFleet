// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D6430 .. +0x261 bytes.
extern "C" __declspec(naked) void FUN_585d6430_585D6430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 05 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 A6 F5 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 3F E5 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        add eax, esi
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F6 4C 1E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [eax + 5896068ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 5B EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 46 F5 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 4F F2 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf2
        __asm _emit 0xeb
        __asm _emit 0xff
        add eax, esi
        cdq
        mov ecx, 56h
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 4C 1E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21a9ch], 0
        ; Exact mapped bytes 75 0D: jne 0x585d6514
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 F4 EB FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf4
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 0F: jne 0x585d6523
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e24h]
        ; Exact mapped bytes E8 7E 86 F3 FF: call 0x5850eba0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x86
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 04 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x585d667d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 04 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 B1 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb1
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x585d667d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2bch], 0
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x585d667d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2c0h], 1
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 04 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 84 F4 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 1D E4 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 1ch], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 5A EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 49 F4 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 52 F1 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf1
        __asm _emit 0xeb
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 18h], esi
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2dch]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7E 20: jle 0x585d6611
        __asm _emit 0x7e
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 2cch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2dch]
        mov dword ptr [ecx + 2d4h], eax
        ; Exact mapped bytes EB 1E: jmp 0x585d662f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2dch]
        mov dword ptr [ecx + 2cch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 2d4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2e0h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 20: jle 0x585d665d
        __asm _emit 0x7e
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 2d0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2e0h]
        mov dword ptr [ecx + 2d8h], eax
        ; Exact mapped bytes EB 1E: jmp 0x585d667b
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2e0h]
        mov dword ptr [ecx + 2d0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 2d8h], edx
        ; Exact mapped bytes EB 0D: jmp 0x585d668a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5a0h], 40000000h
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
