// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861B080 .. +0x49F bytes.
extern "C" __declspec(naked) void FUN_5861b080_5861B080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F E8 F0 FF: call 0x58529900
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 84 04 00 00: je 0x5861b51d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 14 06 96 58: cmp eax, dword ptr [0x58960614]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 06: jne 0x5861b0b0
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 2
        ; Exact mapped bytes EB 39: jmp 0x5861b0e9
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 06: jne 0x5861b0c4
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 3
        ; Exact mapped bytes EB 25: jmp 0x5861b0e9
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 2C 06 96 58: cmp edx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 06: jne 0x5861b0d8
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 4
        ; Exact mapped bytes EB 11: jmp 0x5861b0e9
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 04: jne 0x5861b0e9
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 5
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 9ch]
        movzx eax, byte ptr [ebp - 1]
        cmp edx, eax
        ; Exact mapped bytes 75 09: jne 0x5861b104
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x5861b10b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 9ch]
        movzx ecx, byte ptr [ebp - 1]
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 F0 03 00 00: je 0x5861b517
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [ebp - 1]
        mov byte ptr [edx + 9ch], al
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0d0h]
        test edx, edx
        ; Exact mapped bytes 75 56: jne 0x5861b197
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 0d0h], 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 22 F6 FF: call 0x5857d430
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0d20h], 0
        ; Exact mapped bytes 74 34: je 0x5861b197
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d14h]
        mov dword ptr [ebp - 1ch], eax
        push 588ae660h
        ; Exact mapped bytes E8 77 6E F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6e
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 10101h
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0A C3 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc3
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 9ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 EE 01 00 00: je 0x5861b397
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 09: jmp 0x5861b1bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 31: jge 0x5861b1f2
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 08 AD E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xad
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F1 AC E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xac
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x5861b1b2
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 74h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D2 AC E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xac
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B6 AC E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xac
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 74h]
        ; Exact mapped bytes E8 42 A9 E9 FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 64h]
        ; Exact mapped bytes E8 2E A9 E9 FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + edx + 74h]
        mov dword ptr [eax + 80h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + ecx + 64h]
        mov dword ptr [edx + 70h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5861b291
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 1A: jge 0x5861b2b1
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 54h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 32 AC E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xac
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x5861b288
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5861b2c3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 37: jge 0x5861b300
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FD AB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E3 AB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x5861b2ba
        __asm _emit 0xeb
        __asm _emit 0xba
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 CA AB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, 1
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c0h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0bch], 0
        ; Exact mapped bytes E8 01 59 23 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x59
        __asm _emit 0x23
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5861b377
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes 8B 0D FC 06 96 58: mov ecx, dword ptr [0x589606fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 96 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x96
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 98h], eax
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x5861b473
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861b3a9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 7D 48: jge 0x5861b3f7
        __asm _emit 0x7d
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1A AB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 03 AB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 54h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 EC AA E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A9: jmp 0x5861b3a0
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861b409
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 37: jge 0x5861b446
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B7 AA E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9D AA E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x5861b400
        __asm _emit 0xeb
        __asm _emit 0xba
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 84 AA E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 80h], 0
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x5861b50e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 9ch]
        cmp ecx, 5
        ; Exact mapped bytes 74 4D: je 0x5861b4d9
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d14h]
        mov dword ptr [ebp - 60h], eax
        push 4bh
        push 82h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 49 96 EA FF: call 0x584c4af0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x96
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0c4h
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 77 3F E8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3f
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 9ch]
        cmp eax, 4
        ; Exact mapped bytes 75 0E: jne 0x5861b4d7
        __asm _emit 0x75
        __asm _emit 0x0e
        push 202h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A A2 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa2
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 35: jmp 0x5861b50e
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d14h]
        mov dword ptr [ebp - 64h], edx
        push 4bh
        push 32h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FF 95 EA FF: call 0x584c4af0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        push 195h
        push 3bbh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1D A1 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa1
        __asm _emit 0x19
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 12 00 00: call 0x5861c7c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 1
        ; Exact mapped bytes EB 0A: jmp 0x5861b51f
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB 04: jmp 0x5861b51b
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 04: jmp 0x5861b51f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5861b51f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
    }
}
