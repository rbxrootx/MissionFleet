// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FE930 .. +0x859 bytes.
extern "C" __declspec(naked) void FUN_585fe930_585FE930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 128h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585fe964
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8ch]
        add eax, 1
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 4
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x585fea3b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 88h]
        lea ecx, [eax + edx + 3b8h]
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 100h], eax
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 3E 75 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x75
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 88h]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 0D 75 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x75
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 88h]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 DC 74 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 88h]
        lea edx, [ecx + eax + 3d8h]
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 AB 74 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x585fe955
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 3f8h]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 86 74 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 394h]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 67 74 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 42ch]
        mov dword ptr [ebp - 0a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 F8 74 E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 430h]
        mov dword ptr [ebp - 0ach], eax
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D9 74 E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585fead3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 8ch]
        cmp eax, dword ptr [edx + 0d0h]
        ; Exact mapped bytes 7D 1B: jge 0x585feb02
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + ecx*4 + 0d4h]
        ; Exact mapped bytes E8 91 91 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C2: jmp 0x585feac4
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585feb1d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8ch]
        add eax, 1
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 8ch]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 7D 1B: jge 0x585feb49
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ecx + eax*4 + 2d4h]
        ; Exact mapped bytes E8 4A 91 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C5: jmp 0x585feb0e
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585feb64
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8ch]
        add edx, 1
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 8
        ; Exact mapped bytes 7D 29: jge 0x585feb96
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + eax*4 + 374h]
        mov dword ptr [ebp - 0b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 FD 73 E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x73
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x585feb55
        __asm _emit 0xeb
        __asm _emit 0xbf
        push 80h
        push 0
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 67 E2 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe2
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585febc7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp - 8ch], 2
        ; Exact mapped bytes 7D 49: jge 0x585fec19
        __asm _emit 0x7d
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + edx*4 + 408h]
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 8ch]
        add edx, 3
        push edx
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 5F E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 1A 73 E8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x73
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9F: jmp 0x585febb8
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 904h]
        mov dword ptr [ebp - 0bch], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 A8 72 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 908h]
        mov dword ptr [ebp - 0c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 89 72 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xff
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 A6 E1 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe1
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 8dch], 0
        ; Exact mapped bytes 7C 4A: jl 0x585fecc6
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 904h]
        mov dword ptr [ebp - 0c4h], edx
        push 30e030h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 42 74 E8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8dch]
        push ecx
        push 588adde8h
        push 80h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 2F 21 EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x21
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 48: jmp 0x585fed0e
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 904h]
        mov dword ptr [ebp - 0c8h], ecx
        push 3030e0h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 F8 73 E8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x73
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8dch]
        push eax
        push 588addech
        push 80h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 E5 20 EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 904h]
        mov dword ptr [ebp - 0cch], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 6E 73 E8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x73
        __asm _emit 0xe8
        __asm _emit 0xff
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 CB E0 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8e4h]
        mov dword ptr [ebp - 0d0h], ecx
        push 588addf0h
        ; Exact mapped bytes E8 8C 32 F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        push 80h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 64 20 EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8f4h]
        mov dword ptr [ebp - 0d8h], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 ED 72 E8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xff
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 4A E0 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8e8h]
        mov dword ptr [ebp - 0dch], ecx
        push 588ade10h
        ; Exact mapped bytes E8 0B 32 F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x32
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        push 80h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 E3 1F EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8f8h]
        mov dword ptr [ebp - 0e4h], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 6C 72 E8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xff
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 C9 DF 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8ech]
        mov dword ptr [ebp - 0e8h], ecx
        push 588ade30h
        ; Exact mapped bytes E8 8A 31 F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x31
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        push 80h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 62 1F EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8fch]
        mov dword ptr [ebp - 0f0h], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 EB 71 E8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x71
        __asm _emit 0xe8
        __asm _emit 0xff
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 48 DF 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdf
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8f0h]
        mov dword ptr [ebp - 0f4h], ecx
        push 588ade54h
        ; Exact mapped bytes E8 09 31 F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x31
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        push 80h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 E1 1E EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 900h]
        mov dword ptr [ebp - 0fch], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 6A 71 E8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x71
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8f4h]
        mov dword ptr [ebp - 114h], eax
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 8B 6F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 8f8h]
        mov dword ptr [ebp - 104h], edx
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 6C 6F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8fch]
        mov dword ptr [ebp - 108h], ecx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 4D 6F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 900h]
        mov dword ptr [ebp - 10ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 2E 6F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xff
        push 80h
        push 0
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 4B DE 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xde
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 88h]
        cmp dword ptr [edx + 8e0h], 0
        ; Exact mapped bytes 7C 4A: jl 0x585ff021
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 908h]
        mov dword ptr [ebp - 110h], ecx
        push 6effffh
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 E7 70 E8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x70
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8e0h]
        push eax
        push 588ade78h
        push 80h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 D4 1D EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 48: jmp 0x585ff069
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 908h]
        mov dword ptr [ebp - 128h], eax
        push 3030e0h
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 9D 70 E8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x70
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 8e0h]
        push edx
        push 588ade7ch
        push 80h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 8A 1D EB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 908h]
        mov dword ptr [ebp - 118h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 13 70 E8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x70
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], 0
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585ff0b2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp - 8ch], 20h
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x585ff17b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        ; Exact mapped bytes E8 39 39 FD FF: call 0x585d2a10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x585ff14f
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 90h]
        add ecx, 1
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8]
        imul ecx, dword ptr [ebp - 90h], 16h
        lea edx, [eax + ecx + 9bh]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 0A 66 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x66
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + eax*4 + 2f4h]
        mov dword ptr [ebp - 120h], edx
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 94 6D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x585ff176
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + eax*4 + 2f4h]
        mov dword ptr [ebp - 124h], edx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 6B 6D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x6d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x585ff0a3
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CB 1E 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1e
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
