// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587209A0 .. +0x66D bytes.
extern "C" __declspec(naked) void FUN_587209a0_587209A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888e3e9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 17eh]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x58720aa8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x587209fd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 17eh]
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 7D 5D: jge 0x58720a69
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 188h]
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 49: je 0x58720a67
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 188h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 17: je 0x58720a4d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 6ch], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58720a54
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB 8B: jmp 0x587209f4
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 188h], 0
        ; Exact mapped bytes 74 27: je 0x58720a9c
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 188h]
        mov dword ptr [ebp - 74h], edx
        push 4
        mov eax, dword ptr [ebp - 74h]
        push eax
        ; Exact mapped bytes E8 A8 05 11 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 188h], 0
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 7E 01 00 00: mov word ptr [eax + 0x17e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 180h]
        test edx, edx
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x58720b77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58720acc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 180h]
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 7D 5D: jge 0x58720b38
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 49: je 0x58720b36
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 17: je 0x58720b1c
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58720b23
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB 8B: jmp 0x58720ac3
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 27: je 0x58720b6b
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 80h], eax
        push 4
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        ; Exact mapped bytes E8 D9 04 11 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 18ch], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 80 01 00 00: mov word ptr [ecx + 0x180], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 6
        ; Exact mapped bytes 0F 86 39 02 00 00: jbe 0x58720dba
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 2
        imul edx, dword ptr [ebp - 28h], 3
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 F0 BC 12 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 28h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 D9 BC 12 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx*2]
        push eax
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 BF BC 12 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 0ch
        movzx edx, word ptr [ebp - 14h]
        test edx, edx
        ; Exact mapped bytes 7E 2B: jle 0x58720c07
        __asm _emit 0x7e
        __asm _emit 0x2b
        movzx eax, word ptr [ebp - 14h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 4D 04 11 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58720c25
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        movzx eax, word ptr [ebp - 14h]
        cmp dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x58720cbf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 27ch
        ; Exact mapped bytes E8 C8 03 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 1B: je 0x58720c6a
        __asm _emit 0x74
        __asm _emit 0x1b
        imul ecx, dword ptr [ebp - 2ch], 180h
        add ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9B 74 DD FF: call 0x584f8100
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x74
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58720c71
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 8ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + eax*4], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 90h], edx
        push 100h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 91 48 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, 180h
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x58720c1c
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 18h]
        test ecx, ecx
        ; Exact mapped bytes 7E 2B: jle 0x58720cf2
        __asm _emit 0x7e
        __asm _emit 0x2b
        movzx eax, word ptr [ebp - 18h]
        mov edx, 4
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 62 03 11 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 4ch], edx
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x58720d04
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        movzx ecx, word ptr [ebp - 18h]
        cmp dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x58720dba
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 0b8h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        shr ecx, 1
        and ecx, 1fh
        mov dword ptr [ebp - 0a4h], ecx
        push 0d74h
        ; Exact mapped bytes E8 B7 02 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 1B: je 0x58720d7b
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CA E1 02 00: call 0x5874ef40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58720d82
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0a0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + edx*4], ecx
        imul edx, dword ptr [ebp - 0a4h], 18h
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [eax + edx + 0b8h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x58720cfb
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 178h]
        test eax, eax
        ; Exact mapped bytes 7E 63: jle 0x58720e2b
        __asm _emit 0x7e
        __asm _emit 0x63
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58720dda
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 178h]
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 7D 42: jge 0x58720e2b
        __asm _emit 0x7d
        __asm _emit 0x42
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 50 FD 09 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ach]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 02 06 00: call 0x587810a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A6: jmp 0x58720dd1
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 17ah]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 23 01 00 00: jle 0x58720f60
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58720e4f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 17ah]
        cmp dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 0F 8D FE 00 00 00: jge 0x58720f60
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 178h]
        add eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 CD FC 09 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 04 06 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58720f5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 F1 E8 FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58720edb
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 7A E9 FF: call 0x585b89b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x58720efc
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 F2 E8 FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf2
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58720efc
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 7D E9 FF: call 0x585b8c20
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 DC 33 03 00: call 0x587542e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 5F E9 FF: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 178h]
        add edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 1E FC 09 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0bch]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 09 06 00: call 0x58781950
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E6 FE FF FF: jmp 0x58720e46
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 33: je 0x58720f99
        __asm _emit 0x74
        __asm _emit 0x33
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x58720f78
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 1
        mov dword ptr [ebp - 44h], ecx
        movzx edx, word ptr [ebp - 14h]
        cmp dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 7D 18: jge 0x58720f99
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA FF 05 00: call 0x58780f80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D6: jmp 0x58720f6f
        __asm _emit 0xeb
        __asm _emit 0xd6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 33: je 0x58720fd2
        __asm _emit 0x74
        __asm _emit 0x33
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x58720fb1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        movzx ecx, word ptr [ebp - 18h]
        cmp dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes 7D 18: jge 0x58720fd2
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 06 06 00: call 0x58781650
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D6: jmp 0x58720fa8
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edx, 0bh
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 9C 01 00 00: mov word ptr [eax + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1cch], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
