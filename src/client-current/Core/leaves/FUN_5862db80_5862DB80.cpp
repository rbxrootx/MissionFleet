// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862DB80 .. +0x83A bytes.
extern "C" __declspec(naked) void FUN_5862db80_5862DB80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 144h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 9ch], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 144h], edx
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [eax + 13ch], 0
        mov dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862dbdc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a8h]
        add ecx, 1
        mov dword ptr [ebp - 0a8h], ecx
        cmp dword ptr [ebp - 0a8h], 8
        ; Exact mapped bytes 7D 29: jge 0x5862dc0e
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 11ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 25 83 E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x5862dbcd
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862dc29
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 98h]
        add edx, 1
        mov dword ptr [ebp - 98h], edx
        cmp dword ptr [ebp - 98h], 9
        ; Exact mapped bytes 0F 8D 68 07 00 00: jge 0x5862e39e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862dc51
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a0h]
        add eax, 1
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 83 39 07 00 00: jae 0x5862e399
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 98h], 0e84h
        cmp dword ptr [edx + 588f4f74h], 0
        ; Exact mapped bytes 0F 84 1D 07 00 00: je 0x5862e394
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 140h], ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C5 2E 19 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2e
        __asm _emit 0x19
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 F0 06 00 00: je 0x5862e394
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 98 2E 19 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2e
        __asm _emit 0x19
        __asm _emit 0x00
        movzx eax, word ptr [eax + 20h]
        imul ecx, dword ptr [ebp - 0a0h], 3ch
        mov edx, dword ptr [ebp - 0a4h]
        movzx ecx, word ptr [edx + ecx]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 AF 06 00 00: jne 0x5862e394
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 57 2E 19 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x2e
        __asm _emit 0x19
        __asm _emit 0x00
        movzx edx, word ptr [eax + 20h]
        cmp edx, 0a9h
        ; Exact mapped bytes 75 05: jne 0x5862dd1a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x5862dc42
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, dword ptr [ebp - 0a0h], 3ch
        mov ecx, dword ptr [ebp - 0a4h]
        cmp dword ptr [ecx + eax + 8], 80h
        ; Exact mapped bytes 73 18: jae 0x5862dd49
        __asm _emit 0x73
        __asm _emit 0x18
        imul edx, dword ptr [ebp - 0a0h], 3ch
        mov eax, dword ptr [ebp - 0a4h]
        cmp dword ptr [eax + edx + 8], 0
        ; Exact mapped bytes 0F 85 46 05 00 00: jne 0x5862e28f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 0a0h], 3ch
        mov edx, dword ptr [ebp - 0a4h]
        cmp dword ptr [edx + ecx + 8], 0
        ; Exact mapped bytes 75 6F: jne 0x5862ddcc
        __asm _emit 0x75
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 0b8h], ecx
        push 588aeb84h
        ; Exact mapped bytes E8 77 42 EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        push 707070h
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 60 38 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x38
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 4A 66 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x5862deaf
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 0c0h], edx
        push 707070h
        mov eax, dword ptr [ebp - 98h]
        push eax
        imul ecx, dword ptr [ebp - 0a0h], 3ch
        mov edx, dword ptr [ebp - 0a4h]
        lea eax, [edx + ecx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 F9 37 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        imul ecx, dword ptr [ebp - 0a0h], 3ch
        mov edx, dword ptr [ebp - 0a4h]
        cmp dword ptr [edx + ecx + 24h], 0
        ; Exact mapped bytes 76 54: jbe 0x5862de70
        __asm _emit 0x76
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 0c8h], ecx
        imul edx, dword ptr [ebp - 0a0h], 3ch
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [eax + edx + 24h]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 F8 E8 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 A3 65 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x65
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3F: jmp 0x5862deaf
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 0d0h], edx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 6C E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 62 65 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x65
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 0d4h], eax
        push 707070h
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        push 588aebabh
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 23 37 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        imul edx, dword ptr [ebp - 0a0h], 3ch
        mov eax, dword ptr [ebp - 0a4h]
        movzx ecx, word ptr [eax + edx + 28h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x5862df80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0a0h], 3ch
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [eax + edx + 8]
        ; Exact mapped bytes 3B 0D 30 05 96 58: cmp ecx, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 6F: je 0x5862df80
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 0dch], eax
        push 588aebach
        ; Exact mapped bytes E8 C3 40 EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x40
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        push 707070h
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 AC 36 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 96 64 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0A 03 00 00: jmp 0x5862e28a
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 0a0h], 3ch
        mov ecx, dword ptr [ebp - 0a4h]
        movzx edx, word ptr [ecx + eax + 28h]
        cmp edx, 2
        ; Exact mapped bytes 75 6F: jne 0x5862e006
        __asm _emit 0x75
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 0e8h], ecx
        push 588aebd0h
        ; Exact mapped bytes E8 3D 40 EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        push 707070h
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 26 36 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 0ech], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 10 64 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x64
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 84 02 00 00: jmp 0x5862e28a
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 0a0h], 3ch
        mov edx, dword ptr [ebp - 0a4h]
        movzx eax, word ptr [edx + ecx + 28h]
        cmp eax, 3
        ; Exact mapped bytes 75 6F: jne 0x5862e08c
        __asm _emit 0x75
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 0f4h], edx
        push 588aebf0h
        ; Exact mapped bytes E8 B7 3F EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3f
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        push 707070h
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 A0 35 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 8A 63 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x63
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x5862e28a
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0a0h], 3ch
        mov eax, dword ptr [ebp - 0a4h]
        movzx ecx, word ptr [eax + edx + 28h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x5862e19d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 94h]
        push edx
        imul eax, dword ptr [ebp - 0a0h], 3ch
        mov ecx, dword ptr [ebp - 0a4h]
        lea edx, [ecx + eax + 2ah]
        push edx
        ; Exact mapped bytes E8 1B B6 F0 FF: call 0x585396e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb6
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 8
        movzx eax, word ptr [ebp - 8ah]
        push eax
        movzx ecx, word ptr [ebp - 8ch]
        push ecx
        movzx edx, word ptr [ebp - 8eh]
        push edx
        push 588aec10h
        ; Exact mapped bytes E8 06 3F EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x3f
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 0fch], edx
        push 707070h
        mov eax, dword ptr [ebp - 98h]
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 D2 34 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 104h], eax
        push 588aec3ch
        ; Exact mapped bytes E8 A6 3E EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3e
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        push 707070h
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 8F 34 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 108h], ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 79 62 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x62
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x5862e28a
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 0a0h], 3ch
        mov ecx, dword ptr [ebp - 0a4h]
        movzx edx, word ptr [ecx + eax + 28h]
        cmp edx, 4
        ; Exact mapped bytes 75 6C: jne 0x5862e220
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 110h], ecx
        push 588aec5ch
        ; Exact mapped bytes E8 20 3E EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3e
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        push 707070h
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 09 34 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 F3 61 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x61
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6A: jmp 0x5862e28a
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 130h], edx
        push 588aec7ch
        ; Exact mapped bytes E8 B4 3D EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        push 707070h
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 9D 33 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x33
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 87 61 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x61
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x5862e392
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0a0h], 3ch
        mov eax, dword ptr [ebp - 0a4h]
        cmp dword ptr [eax + edx + 8], 40h
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x5862e392
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 128h], edx
        push 588aeca0h
        ; Exact mapped bytes E8 2D 3D EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        push 707070h
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 16 33 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 144h], eax
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 68 E5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E8 60 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 138h], ecx
        push 588aecc4h
        ; Exact mapped bytes E8 AC 3C EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3c
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        push 707070h
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 95 32 19 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x32
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 7F 60 EF FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x60
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5862e399
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A9 F8 FF FF: jmp 0x5862dc42
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7C F8 FF FF: jmp 0x5862dc1a
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 B7 F5 FF FF: call 0x5862d960
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9C 2C 20 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
