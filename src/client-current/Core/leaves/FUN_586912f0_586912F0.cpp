// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586912F0 .. +0x543 bytes.
extern "C" __declspec(naked) void FUN_586912f0_586912F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5869130e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 118h]
        ; Exact mapped bytes 7D 48: jge 0x58691364
        __asm _emit 0x7d
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 148h], 10h
        ; Exact mapped bytes 75 36: jne 0x58691362
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 56 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BA A9 DF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 56 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x56
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8C AB DF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AF 0B 00 00: call 0x58691f10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A1: jmp 0x58691305
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 11ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 700h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 05 9E 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9e
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 708h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 628h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DD 9D 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 71ch]
        mov dword ptr [ebp - 20h], edx
        imul eax, dword ptr [ebp + 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 1ach]
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx + 9ah]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9E 9D 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9d
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 71ch]
        mov dword ptr [ebp - 24h], edx
        imul eax, dword ptr [ebp + 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 250h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6E 9D 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9d
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 704h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 15ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 41 9D 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9d
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58691462
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 8D 5E 01 00 00: jge 0x586915ca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 11ch]
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x58691510
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6d4h]
        mov dword ptr [ebp - 2ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F8 4A DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6e8h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DE 4A DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6c0h]
        mov dword ptr [ebp - 38h], eax
        push 13h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 36 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x36
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 82 57 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x57
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ach]
        mov dword ptr [ebp - 40h], ecx
        push 11h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 35 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 56 57 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x57
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x586915c5
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6d4h]
        mov dword ptr [ebp - 44h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 66 4A DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6e8h]
        mov dword ptr [ebp - 48h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4C 4A DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6c0h]
        mov dword ptr [ebp - 50h], edx
        imul eax, dword ptr [ebp - 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 244h]
        add edx, 37h
        push edx
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 35 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 DC 56 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ach]
        mov dword ptr [ebp - 58h], eax
        imul ecx, dword ptr [ebp - 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 244h]
        add eax, 3bh
        push eax
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 35 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 9C 56 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F FE FF FF: jmp 0x58691459
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 728h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 00 48 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586915f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 1D: jge 0x58691616
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 70ch]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 CD 48 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x48
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586915ea
        __asm _emit 0xeb
        __asm _emit 0xd4
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 708h]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 A1 48 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 148h], 10h
        ; Exact mapped bytes 75 41: jne 0x58691691
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 72ch]
        mov dword ptr [ebp - 6ch], ecx
        push 1ah
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 34 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x34
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E8 55 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 728h]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 52 47 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x47
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x586916ba
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 72ch]
        mov dword ptr [ebp - 78h], eax
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 34 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 A7 55 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x55
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 758h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 73ch]
        mov dword ptr [ebp - 7ch], ecx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 244h]
        add ecx, 262h
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 2A 34 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x34
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 28 48 DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 754h]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 73ch]
        mov dword ptr [ebp - 88h], eax
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 1aeh]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 DC 33 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x33
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 D4 47 DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x47
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 744h]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 73ch]
        mov dword ptr [ebp - 94h], ecx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 1aeh]
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 79 33 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x33
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 71 47 DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x47
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 744h]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 73ch]
        mov dword ptr [ebp - 0a0h], ecx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 1aeh]
        add ecx, 190h
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 16 33 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 0E 47 DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x47
        __asm _emit 0xdf
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 F5 FF FF: call 0x58690d70
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf5
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
