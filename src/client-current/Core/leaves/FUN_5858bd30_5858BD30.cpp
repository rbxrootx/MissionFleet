// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858BD30 .. +0x648 bytes.
extern "C" __declspec(naked) void FUN_5858bd30_5858BD30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 08 00 00: call 0x5858c550
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        push eax
        ; Exact mapped bytes E8 B6 55 F0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        imul edx, dword ptr [eax*4 + 5894c930h]
        mov eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], eax
        mov dword ptr [ebp - 14h], 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 0B 00 00: call 0x5858c900
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 214h], 2
        ; Exact mapped bytes 74 5C: je 0x5858bdf9
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 7E 23: jle 0x5858bdcc
        __asm _emit 0x7e
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c8h]
        cmp ecx, dword ptr [eax + 0b4h]
        ; Exact mapped bytes 7E 0D: jle 0x5858bdca
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], 0
        ; Exact mapped bytes EB 2D: jmp 0x5858bdf9
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 7D 21: jge 0x5858bdf9
        __asm _emit 0x7d
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0c8h]
        cmp eax, dword ptr [edx + 0b4h]
        ; Exact mapped bytes 7D 0D: jge 0x5858bdf9
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0cch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 214h], 1
        ; Exact mapped bytes 75 26: jne 0x5858be2b
        __asm _emit 0x75
        __asm _emit 0x26
        mov dword ptr [ebp - 14h], 78h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], 1eh
        ; Exact mapped bytes 7D 0E: jge 0x5858be26
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 CD 02 00 00: jmp 0x5858c0f8
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 214h], 2
        ; Exact mapped bytes 0F 85 9C 02 00 00: jne 0x5858c0d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], 2
        ; Exact mapped bytes 75 19: jne 0x5858be60
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 204h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 05 00 00: call 0x5858c3e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 96h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 204h], 0
        ; Exact mapped bytes 0F 84 65 02 00 00: je 0x5858c0d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 204h]
        ; Exact mapped bytes E8 42 AB EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1d4h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 204h]
        ; Exact mapped bytes E8 EB 04 00 00: call 0x5858c380
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1d8h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0bch], 32h
        ; Exact mapped bytes 7E 53: jle 0x5858befd
        __asm _emit 0x7e
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 9ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], eax
        ; Exact mapped bytes 7E 1F: jle 0x5858bee3
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], eax
        ; Exact mapped bytes EB 18: jmp 0x5858befb
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 9ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], eax
        ; Exact mapped bytes EB 45: jmp 0x5858bf42
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], eax
        ; Exact mapped bytes 7D 1D: jge 0x5858bf2f
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 98h], 0ch
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], eax
        ; Exact mapped bytes EB 13: jmp 0x5858bf42
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], 50h
        ; Exact mapped bytes 7C 20: jl 0x5858bf6e
        __asm _emit 0x7c
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 0F 8C 77 01 00 00: jl 0x5858c0d5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0bch], 32h
        ; Exact mapped bytes 0F 8D 67 01 00 00: jge 0x5858c0d5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1f0h], 0
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x5858c0d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0ah
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 204h]
        ; Exact mapped bytes E8 27 AA EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xaa
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 1e0h]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 204h]
        ; Exact mapped bytes E8 BB 03 00 00: call 0x5858c380
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        imul eax, esi, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 204h]
        ; Exact mapped bytes E8 C7 03 00 00: call 0x5858c3c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov eax, dword ptr [ebp - 40h]
        imul eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 3ch]
        imul ecx, dword ptr [ebp - 3ch]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 BC 84 F5 FF: call 0x584e44d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ebp - 0ch]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 98 84 F5 FF: call 0x584e44d0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 40h]
        imul edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [ebp - 3ch]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B9 4F 2C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4f
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 21 52 2A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x52
        __asm _emit 0x2a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, dword ptr [ebp - 0ch]
        add ecx, edx
        ; Exact mapped bytes F2 0F 2A C1: cvtsi2sd xmm0, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 8D 4F 2C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 F5 51 2A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x51
        __asm _emit 0x2a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1f4h]
        mov dword ptr [eax + 1f0h], edx
        cmp dword ptr [ebp - 10h], 64h
        ; Exact mapped bytes 7D 1F: jge 0x5858c0d5
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 204h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 EC 0D 00 00: call 0x5858cec0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x5858c0f8
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 214h], 3
        ; Exact mapped bytes 75 15: jne 0x5858c0f8
        __asm _emit 0x75
        __asm _emit 0x15
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, dword ptr [eax + 0bch]
        mov eax, ecx
        cdq
        mov ecx, 708h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 0d0h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d0h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0d0h], 0
        ; Exact mapped bytes 7D 14: jge 0x5858c141
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        add ecx, 0e10h
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 14: jmp 0x5858c155
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 20h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0ach]
        imul eax, dword ptr [edx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a0h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        imul eax, dword ptr [ecx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        ; Exact mapped bytes E8 4A 51 F0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x51
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 98h]
        imul ecx, dword ptr [eax*4 + 589490f0h]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 7D 10: jge 0x5858c209
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        neg edx
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 0C: jmp 0x5858c215
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1dch]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 0a0h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1dch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1e0h]
        sub ecx, dword ptr [eax + 0a4h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1e0h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0a8h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c8h], ecx
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 1
        ; Exact mapped bytes 74 46: je 0x5858c2c8
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0cch], 0
        ; Exact mapped bytes 7C 1E: jl 0x5858c2ac
        __asm _emit 0x7c
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0cch]
        add eax, 0c8h
        cdq
        mov ecx, 190h
        idiv ecx
        add eax, 2
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 1C: jmp 0x5858c2c8
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        sub eax, 0c8h
        cdq
        mov ecx, 190h
        idiv ecx
        add eax, 2
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        sub eax, 384h
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 79 0E: jns 0x5858c2e9
        __asm _emit 0x79
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0e10h
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 06: jmp 0x5858c2ef
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 7ch]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 80h]
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 78h]
        add eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 74h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 208h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 34 F1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 208h]
        ; Exact mapped bytes E8 5D 86 EF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x86
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CE 34 F1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
