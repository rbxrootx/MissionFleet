// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58672F20 .. +0x4C8 bytes.
extern "C" __declspec(naked) void FUN_58672f20_58672F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 588afe80h
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58672f47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 0F 8D F4 00 00 00: jge 0x58673045
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58672f63
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D D3 00 00 00: jge 0x58673040
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 51: je 0x58672fd4
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58672fb6
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58672fbd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 51: je 0x5867303b
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5867301d
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58673024
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x58672f5a
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 FE FF FF: jmp 0x58672f3e
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58673057
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x586730e7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58673073
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 69: jge 0x586730e2
        __asm _emit 0x7d
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 19ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 51: je 0x586730e0
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 19ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x586730c2
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586730c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 19ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB 88: jmp 0x5867306a
        __asm _emit 0xeb
        __asm _emit 0x88
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5867304e
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 184h], 0
        ; Exact mapped bytes 74 3D: je 0x58673130
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x5867311c
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58673123
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 184h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58673142
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 0F 8D 80 00 00 00: jge 0x586731cc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867315e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 63: jge 0x586731c7
        __asm _emit 0x7d
        __asm _emit 0x63
        imul edx, dword ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 64h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 4D: je 0x586731c5
        __asm _emit 0x74
        __asm _emit 0x4d
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 64h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x586731a9
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 A8: call dword ptr [ebp - 0x58]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa8
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586731b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        imul edx, dword ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 64h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB 8E: jmp 0x58673155
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x58673139
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586731de
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 7D 57: jge 0x5867323b
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + ecx*4 + 118h], 0
        ; Exact mapped bytes 74 45: je 0x58673239
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 118h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x58673221
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58673228
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax*4 + 118h], 0
        ; Exact mapped bytes EB 9A: jmp 0x586731d5
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867324d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x586732dd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58673269
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 69: jge 0x586732d8
        __asm _emit 0x7d
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 154h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 51: je 0x586732d6
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 154h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x586732b8
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586732bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 154h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB 88: jmp 0x58673260
        __asm _emit 0xeb
        __asm _emit 0x88
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x58673244
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 188h], 0
        ; Exact mapped bytes 74 3D: je 0x58673326
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 188h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 17: je 0x58673312
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58673319
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 188h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58673338
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 57: jge 0x58673395
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + ecx*4 + 18ch], 0
        ; Exact mapped bytes 74 45: je 0x58673393
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 18ch]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 17: je 0x5867337b
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58673382
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax*4 + 18ch], 0
        ; Exact mapped bytes EB 9A: jmp 0x5867332f
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 3D: je 0x586733db
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1A: je 0x586733c7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 80h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586733d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 60h], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD 24 14 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
