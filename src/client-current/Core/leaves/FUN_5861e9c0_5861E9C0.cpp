// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861E9C0 .. +0x3B6 bytes.
extern "C" __declspec(naked) void FUN_5861e9c0_5861E9C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 430h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 40ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 88 0A 00 00: call 0x5861f470
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5861ea14
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes E8 FF 87 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 414h], eax
        push 0
        push 0
        push 0
        push 1c3h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 63 A3 EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa3
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 52 03 00 00: jmp 0x5861ed66
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 410h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5861ea2f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 410h]
        add ecx, 1
        mov dword ptr [ebp - 410h], ecx
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 82 9A 0C 00 00: movsx eax, word ptr [edx + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 410h], eax
        ; Exact mapped bytes 0F 8D 8B 01 00 00: jge 0x5861ebd3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 410h], 18h
        mov edx, dword ptr [ebp - 40ch]
        lea eax, [edx + ecx + 64h]
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x5861ebce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        imul edx, dword ptr [ebp - 410h], 18h
        mov eax, dword ptr [ebp - 40ch]
        lea ecx, [eax + edx + 64h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 8B 82 98 0C 00 00: mov ax, word ptr [edx + 0xc98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 89 81 98 0C 00 00: mov word ptr [ecx + 0xc98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 82 98 0C 00 00: movsx eax, word ptr [edx + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 46: jne 0x5861eaff
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 F6 1D 1A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1d
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [edx + 0c80h]
        ; Exact mapped bytes E8 E5 1D 1A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1d
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA A7 E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 418h], eax
        mov eax, dword ptr [ebp - 40ch]
        push eax
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 82 86 04 00: call 0x58667180
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588ae720h
        ; Exact mapped bytes E8 E3 34 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x34
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 408h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c7ch]
        mov dword ptr [ebp - 41ch], ecx
        push 0ffd997h
        push -1
        push 588ae71eh
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 D6 19 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x19
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov eax, dword ptr [edx + 0c80h]
        mov dword ptr [ebp - 420h], eax
        push 0ffffffh
        push -1
        lea ecx, [ebp - 408h]
        push ecx
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 AB 19 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x19
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 2A 2C 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 19 2C 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2c
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 91 98 0C 00 00: movsx edx, word ptr [ecx + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 75 1A: jne 0x5861ebc4
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5861ebc4
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 40ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 40ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov eax, 1
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x5861ed66
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4D FE FF FF: jmp 0x5861ea20
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 91 9A 0C 00 00: movsx edx, word ptr [ecx + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 80h
        ; Exact mapped bytes 75 28: jne 0x5861ec10
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes E8 03 86 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 424h], eax
        push 0
        push 0
        push 0
        push 1c2h
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 67 A1 EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa1
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x5861ed66
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 91 9A 0C 00 00: movsx edx, word ptr [ecx + 0xc9a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edx, 18h
        mov ecx, dword ptr [ebp - 40ch]
        lea edx, [ecx + eax + 64h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 8B 88 9A 0C 00 00: mov cx, word ptr [eax + 0xc9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 89 8A 9A 0C 00 00: mov word ptr [edx + 0xc9a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 8B 88 98 0C 00 00: mov cx, word ptr [eax + 0xc98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 66 89 8A 98 0C 00 00: mov word ptr [edx + 0xc98], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F BF 88 98 0C 00 00: movsx ecx, word ptr [eax + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 46: jne 0x5861ecc9
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 2C 1C 1A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 1B 1C 1A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1c
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 A5 E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 428h], eax
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 B8 84 04 00: call 0x58667180
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588ae744h
        ; Exact mapped bytes E8 19 33 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x33
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 408h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40ch]
        mov edx, dword ptr [ecx + 0c7ch]
        mov dword ptr [ebp - 42ch], edx
        push 0ffd997h
        push -1
        push 588ae71fh
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 0C 18 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x18
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c80h]
        mov dword ptr [ebp - 430h], ecx
        push 0ffffffh
        push -1
        lea edx, [ebp - 408h]
        push edx
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 E1 17 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x17
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 60 2A 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [ecx + 0c80h]
        ; Exact mapped bytes E8 4F 2A 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E0 22 21 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x21
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
