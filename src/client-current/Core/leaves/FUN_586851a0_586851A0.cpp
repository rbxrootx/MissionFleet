// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586851A0 .. +0x53F bytes.
extern "C" __declspec(naked) void FUN_586851a0_586851A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0f4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a44h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD 5F 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8e8h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 95 5F 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58685214
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 20: jge 0x5868523a
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB D1: jmp 0x5868520b
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a60h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8e8h]
        sub ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2B 5F 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a68h]
        mov dword ptr [ebp - 1ch], edx
        imul eax, dword ptr [ebp + 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 1d8h]
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx + 9ah]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EC 5E 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a68h]
        mov dword ptr [ebp - 20h], edx
        imul eax, dword ptr [ebp + 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 27ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BC 5E 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a48h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 158h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8F 5E 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58685314
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D 5E 01 00 00: jge 0x5868547c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0f4h]
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x586853c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a00h]
        mov dword ptr [ebp - 28h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 46 0C E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a20h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2C 0C E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9e0h]
        mov dword ptr [ebp - 34h], eax
        push 13h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F F7 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D0 18 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9c0h]
        mov dword ptr [ebp - 3ch], ecx
        push 11h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 F7 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A4 18 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x18
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x58685477
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a00h]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B4 0B E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a20h]
        mov dword ptr [ebp - 44h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9A 0B E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9e0h]
        mov dword ptr [ebp - 4ch], edx
        imul eax, dword ptr [ebp - 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        add edx, 37h
        push edx
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 F6 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2A 18 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9c0h]
        mov dword ptr [ebp - 54h], eax
        imul ecx, dword ptr [ebp - 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 270h]
        add eax, 3bh
        push eax
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 F6 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 EA 17 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x17
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F FE FF FF: jmp 0x5868530b
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a78h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 4E 09 E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586854a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 1D: jge 0x586854c8
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a50h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1B 0A E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5868549c
        __asm _emit 0xeb
        __asm _emit 0xd4
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 270h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a4ch]
        mov dword ptr [ebp - 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 EF 09 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 138h], 10h
        ; Exact mapped bytes 75 41: jne 0x58685543
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a7ch]
        mov dword ptr [ebp - 68h], ecx
        push 1ah
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 F5 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 36 17 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x17
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a78h]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 A0 08 E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5868556c
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a7ch]
        mov dword ptr [ebp - 74h], eax
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 F5 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 F5 16 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a9ch]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a88h]
        mov dword ptr [ebp - 78h], ecx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 270h]
        add ecx, 262h
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 7B F5 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 7C 09 E0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a98h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a88h]
        mov dword ptr [ebp - 84h], eax
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 1dah]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 30 F5 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 28 09 E0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0aa0h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a88h]
        mov dword ptr [ebp - 90h], ecx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 1dah]
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 CD F4 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 C5 08 E0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0aa0h]
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a88h]
        mov dword ptr [ebp - 9ch], ecx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 1dah]
        add ecx, 190h
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 6A F4 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 62 08 E0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0xe0
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 F6 FF FF: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
