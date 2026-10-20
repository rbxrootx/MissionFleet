// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58662670 .. +0x73A bytes.
extern "C" __declspec(naked) void FUN_58662670_58662670() {
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
        ; Exact mapped bytes E8 0F 6C E5 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 0F 84 F8 06 00 00: je 0x58662d9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 31 7B E4 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 84 E0 06 00 00: je 0x58662d9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x586626cf
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 64 30 E3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 84 C3 06 00 00: je 0x58662d9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0F 67 FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x58662726
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DB 6D E5 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FD DD 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5866275c
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9D 6D E5 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 777777h
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C5 DD 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8C 66 FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        cwde
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 6
        ; Exact mapped bytes 0F 87 C6 01 00 00: ja 0x58662938
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 24 8D AC 2D 66 58: jmp dword ptr [ecx*4 + 0x58662dac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x2d
        __asm _emit 0x66
        __asm _emit 0x58
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 5ch], ecx
        push 588af630h
        ; Exact mapped bytes E8 55 F8 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push 777777h
        push 0
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 6C DD 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x58662938
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0d0h]
        mov dword ptr [ebp - 64h], edx
        push 588af64ch
        ; Exact mapped bytes E8 17 F8 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf8
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 2E DD 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdd
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x58662938
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 6ch], eax
        push 588af668h
        ; Exact mapped bytes E8 D9 F7 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        push 0ffffffh
        push 0
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 F0 DC 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x58662938
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 74h], ecx
        push 588af684h
        ; Exact mapped bytes E8 9B F7 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 B2 DC 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x58662938
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0d0h]
        mov dword ptr [ebp - 7ch], edx
        push 588af6a8h
        ; Exact mapped bytes E8 5D F7 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 74 DC 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58662938
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 84h], eax
        push 588af6c4h
        ; Exact mapped bytes E8 1C F7 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        push 0ffffffh
        push 0
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 30 DC 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 45: jmp 0x58662938
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 8ch], ecx
        push 588af6e4h
        ; Exact mapped bytes E8 DB F6 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E9 DB 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 30 29 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 08: movsx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 0F 84 34 03 00 00: je 0x58662c80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1C 29 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x29
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
        ; Exact mapped bytes E8 04 8C E5 FF: call 0x584bb570
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 00 02 00 00: je 0x58662b74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F4 28 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 50 08: movsx edx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x08
        cmp edx, 6
        ; Exact mapped bytes 75 3C: jne 0x586629c1
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E3 28 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 F7 8B E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af704h
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
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x58662b02
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A7 28 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 08: movsx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x08
        cmp eax, 3
        ; Exact mapped bytes 75 52: jne 0x58662a24
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 96 28 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 98h], ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 85 28 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 94 8B E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af70ch
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
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x58662b02
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 44 28 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 3C: jne 0x58662a6e
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 36 28 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 4A 8B E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af714h
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
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x58662b02
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 FA 27 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 3A: jne 0x58662ab5
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 ED 27 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x27
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
        ; Exact mapped bytes E8 00 8B E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af71ch
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
        ; Exact mapped bytes EB 4D: jmp 0x58662b02
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B3 27 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A2 27 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x27
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
        ; Exact mapped bytes E8 B1 8A E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8a
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        push 588af724h
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
        ; Exact mapped bytes E8 E6 62 FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 74 30: je 0x58662b41
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0d0h]
        mov dword ptr [ebp - 0b0h], edx
        push 0ffffffh
        push 0
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 E2 D9 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2E: jmp 0x58662b6f
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 0b4h], eax
        push 777777h
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 B2 D9 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x58662c7b
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F4 26 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x26
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
        ; Exact mapped bytes E8 CC A1 F1 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D3 26 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x26
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
        ; Exact mapped bytes E8 E7 89 E5 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x89
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x58662be2
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AB 26 F7 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x26
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
        ; Exact mapped bytes E8 AF A1 F1 FF: call 0x5857cd90
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 06 62 FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 74 46: je 0x58662c37
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 0dch], ecx
        push 588af72ch
        ; Exact mapped bytes E8 DE F3 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf3
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 EC D8 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 44: jmp 0x58662c7b
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0d0h]
        mov dword ptr [ebp - 0d0h], edx
        push 588af744h
        ; Exact mapped bytes E8 98 F3 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf3
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        push 777777h
        push 0
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 A6 D8 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x58662d19
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 68 61 FE FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 74 46: je 0x58662cd5
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 0d8h], ecx
        push 588af75ch
        ; Exact mapped bytes E8 40 F3 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 4E D8 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 44: jmp 0x58662d19
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + eax + 0d0h]
        mov dword ptr [ebp - 0e0h], edx
        push 588af774h
        ; Exact mapped bytes E8 FA F2 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf2
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        push 777777h
        push 0
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 08 D8 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4F 69 F2 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x58662d67
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 0e8h], ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2B 69 F2 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 BC D7 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd7
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 30: jmp 0x58662d97
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 0ech], eax
        push 777777h
        push 0
        push 588af78ch
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 8A D7 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd7
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 28 F9 FF FF: jmp 0x586626c4
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 AA E2 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
