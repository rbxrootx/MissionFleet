// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FF190 .. +0x451 bytes.
extern "C" __declspec(naked) void FUN_585ff190_585FF190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff1ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x585ff252
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 3b8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 03 6D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DE 6C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B9 6C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 3d8h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 94 6C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x585ff1a5
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3f8h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 78 6C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff27b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 1D: jge 0x585ff29e
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 45 6C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ff272
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff2b0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 36: jge 0x585ff2ec
        __asm _emit 0x7d
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 408h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 193h
        push eax
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 58 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 47 6C E8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BB: jmp 0x585ff2a7
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 394h]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DE 6B E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 42ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        add ecx, 7bh
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 10 64 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x64
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 42ch]
        mov dword ptr [ebp - 40h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5A 6C E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 430h]
        mov dword ptr [ebp - 44h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 44 6C E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 35 7E ED FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov dword ptr [ebp - 84h], 0
        mov dword ptr [ebp - 88h], 0
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 6ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff3a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes 7D 15: jge 0x585ff3c5
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0d4h]
        ; Exact mapped bytes E8 CE 88 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x585ff399
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff3d7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 7D 15: jge 0x585ff3f7
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 2d4h]
        ; Exact mapped bytes E8 9C 88 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D7: jmp 0x585ff3ce
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ff410
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 38: jge 0x585ff44e
        __asm _emit 0x7d
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx*4 + 58948c34h]
        ; Exact mapped bytes E8 8B 3A FD FF: call 0x585d2eb0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x585ff44c
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 374h]
        mov dword ptr [ebp - 48h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4D 6B E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB B9: jmp 0x585ff407
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 394h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D7 03 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 CA E8 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xca
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585ff48b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A8 CC E8 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x585ff5ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 13 DB E8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdb
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x585ff5a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0d4h]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B C4 FF FF: call 0x585fb960
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 60 32 FD FF: call 0x585d2730
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax + 18h]
        xor edx, 55555555h
        mov dword ptr [ebp - 54h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C 61 E9 FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x61
        __asm _emit 0xe9
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 68 C3 FF FF: call 0x585fb860
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD C3 FF FF: call 0x585fb900
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 CF E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B 55 E8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x55
        __asm _emit 0xe8
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DD AB EA FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xab
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 1
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 1A 84 13 00: call 0x58737970
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0d4h]
        mov dword ptr [ebp - 70h], ecx
        push 0ah
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 9A 88 13 00: call 0x58737e10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0d4h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        imul edx, dword ptr [ebp - 10h], 0eh
        lea eax, [ecx + edx + 0abh]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 90 61 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x61
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 D2 FE FF FF: jmp 0x585ff480
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 904h]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 1C 69 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x69
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 908h]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 06 69 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x69
        __asm _emit 0xe8
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
