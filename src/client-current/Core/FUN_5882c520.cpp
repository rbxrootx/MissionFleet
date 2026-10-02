// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C520 .. +0x444 bytes.
extern "C" __declspec(naked) void FUN_5882c520() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], eax
        lea edx, [ebp - 2ch]
        push edx
        push 4004667fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 FF FF FF: call 0x5882c4e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 05 04 00 00: je 0x5882c95d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 76 63: jbe 0x5882c5d2
        __asm _emit 0x76
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 CA 4A 00 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 31: je 0x5882c5be
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 EC 02 02 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 79 4A 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 1ch], eax
        ; Exact mapped bytes EB 78: jmp 0x5882c64a
        __asm _emit 0xeb
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 40000h
        ; Exact mapped bytes 76 6C: jbe 0x5882c64a
        __asm _emit 0x76
        __asm _emit 0x6c
        cmp dword ptr [ebp - 1ch], 20000h
        ; Exact mapped bytes 73 63: jae 0x5882c64a
        __asm _emit 0x73
        __asm _emit 0x63
        push 40000h
        ; Exact mapped bytes E8 51 4A 00 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 31: je 0x5882c637
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 73 02 02 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 50h], ecx
        push 1
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 00 4A 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 40000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20h]
        sub ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        lea edx, [ebp - 54h]
        push edx
        lea eax, [ebp - 38h]
        push eax
        push 1
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 34 45 89 58: call dword ptr [0x58894534]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 0F 84 B8 02 00 00: je 0x5882c958
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        add eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 0F 84 91 02 00 00: je 0x5882c956
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 07: je 0x5882c6dc
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 24h], 14h
        ; Exact mapped bytes 0F 82 41 02 00 00: jb 0x5882c92a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        sub eax, 14h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        add edx, dword ptr [ebp - 3ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 82 27 02 00 00: jb 0x5882c92a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 1020304h
        ; Exact mapped bytes 0F 85 09 02 00 00: jne 0x5882c91b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 0F 84 2B 01 00 00: je 0x5882c866
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 8001000fh
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x5882c866
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 4
        push 4
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 14h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 25 01 02 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5882c786
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 14h
        ; Exact mapped bytes 73 1B: jae 0x5882c7a7
        __asm _emit 0x73
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 40h]
        add ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        add edx, 7
        imul eax, dword ptr [ebp - 14h], 1dh
        imul edx, eax
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB D6: jmp 0x5882c77d
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5882c7b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 73 1C: jae 0x5882c7e0
        __asm _emit 0x73
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 40h]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 51 14: movsx edx, byte ptr [ecx + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x14
        add edx, 0bh
        imul eax, dword ptr [ebp - 18h], 0dh
        imul edx, eax
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB D0: jmp 0x5882c7b0
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 3C: je 0x5882c825
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [edx + 54h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 40h]
        ; Exact mapped bytes E8 B1 F4 C5 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf4
        __asm _emit 0xc5
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        add eax, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 07: jne 0x5882c823
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 3F: jmp 0x5882c864
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 0ch]
        xor eax, 0f3a91cd0h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 2C: jne 0x5882c864
        __asm _emit 0x75
        __asm _emit 0x2c
        mov dword ptr [ebp - 20h], 1
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 8002030dh
        ; Exact mapped bytes 75 19: jne 0x5882c864
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 04 00 00: call 0x5882ccf0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5882c87d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 07: je 0x5882c876
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 4
        mov dword ptr [ebp - 20h], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 48: je 0x5882c8cb
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 8]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [edx + eax + 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [eax + ecx + 14h]
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 4E: jmp 0x5882c919
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [edx + eax + 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [eax + ecx + 14h]
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0D: jmp 0x5882c928
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D FB FF FF: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 38: jmp 0x5882c960
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes EB 27: jmp 0x5882c951
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 1A: je 0x5882c94f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 44 FF 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x5882c956
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 62 FD FF FF: jmp 0x5882c6b8
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x5882c95d
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x5882c960
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 28h]
        mov esp, ebp
        pop ebp
        ret
    }
}
