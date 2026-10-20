// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58620FC0 .. +0x394 bytes.
extern "C" __declspec(naked) void FUN_58620fc0_58620FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 428h
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
        ; Exact mapped bytes E8 88 E4 FF FF: call 0x5861f470
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58621014
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes E8 FF 61 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x61
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 414h], eax
        push 0
        push 0
        push 0
        push 1c3h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 63 7D EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7d
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 30 03 00 00: jmp 0x58621344
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 410h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862102f
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
        ; Exact mapped bytes 0F 8D 7A 01 00 00: jge 0x586211c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7a
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
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x586211bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
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
        ; Exact mapped bytes 75 35: jne 0x586210ee
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 F6 F7 19 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf7
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [edx + 0c80h]
        ; Exact mapped bytes E8 E5 F7 19 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf7
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 7B E9 FF: call 0x584b8c00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588ae7d4h
        ; Exact mapped bytes E8 F4 0E F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0e
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
        mov dword ptr [ebp - 418h], ecx
        push 0ffd997h
        push -1
        push 588ae7d2h
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 E7 F3 19 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf3
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov eax, dword ptr [edx + 0c80h]
        mov dword ptr [ebp - 41ch], eax
        push 0ffffffh
        push -1
        lea ecx, [ebp - 408h]
        push ecx
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 BC F3 19 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf3
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 3B 06 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 2A 06 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x06
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
        ; Exact mapped bytes 75 1A: jne 0x586211b3
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x586211b3
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
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x58621344
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E FE FF FF: jmp 0x58621020
        __asm _emit 0xe9
        __asm _emit 0x5e
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
        ; Exact mapped bytes 75 28: jne 0x586211ff
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes E8 14 60 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        push 0
        push 0
        push 0
        push 1c2h
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 78 7B EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7b
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x58621344
        __asm _emit 0xe9
        __asm _emit 0x45
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
        ; Exact mapped bytes 75 35: jne 0x586212a7
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 3D F6 19 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf6
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 2C F6 19 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 79 E9 FF: call 0x584b8c00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x79
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588ae7f8h
        ; Exact mapped bytes E8 3B 0D F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0d
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
        mov dword ptr [ebp - 424h], edx
        push 0ffd997h
        push -1
        push 588ae7d3h
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 2E F2 19 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf2
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c80h]
        mov dword ptr [ebp - 428h], ecx
        push 0ffffffh
        push -1
        lea edx, [ebp - 408h]
        push edx
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 03 F2 19 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 82 04 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40ch]
        mov ecx, dword ptr [ecx + 0c80h]
        ; Exact mapped bytes E8 71 04 1A 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 02 FD 20 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0x20
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
