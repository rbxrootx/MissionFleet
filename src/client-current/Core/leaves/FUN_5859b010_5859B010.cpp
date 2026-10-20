// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859B010 .. +0x823 bytes.
extern "C" __declspec(naked) void FUN_5859b010_5859B010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 100h], 40000000h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD AD EE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], 0fffffffeh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4f8h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 49 AE EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xae
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0fch], ecx
        cmp dword ptr [ebp + 8], 64h
        ; Exact mapped bytes 0F 85 CB 02 00 00: jne 0x5859b378
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8D 44 F0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 07 AE EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xae
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F1 AD EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50ch]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DB AD EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 3ch], edx
        push 20h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 75 2D 00 00: call 0x5859de90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 508h]
        ; Exact mapped bytes E8 37 3C F2 FF: call 0x584bed60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x3c
        __asm _emit 0xf2
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 3B 13 00: call 0x586cece0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 48 FE FF: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0b8h]
        imul eax, dword ptr [edx + 0bch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 08 05 96 58: mov eax, dword ptr [0x58960508]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 0dch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 0C 05 96 58: mov edx, dword ptr [0x5896050c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 0e0h], edx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b18b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 9
        ; Exact mapped bytes 0F 8D AE 01 00 00: jge 0x5859b343
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 0ch], 0e84h
        cmp dword ptr [ecx + 588f4f74h], 0
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x5859b33e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7f4h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b1d8
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7f4h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B9 AD EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7f8h]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b207
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7f8h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8A AD EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7fch]
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b236
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7fch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AB AC EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 800h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b265
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 800h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2C AD EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 808h]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b294
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 808h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 FD AC EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80ch]
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b2c3
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CE AC EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b2d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 63: jge 0x5859b33e
        __asm _emit 0x7d
        __asm _emit 0x63
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b2ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 49: jge 0x5859b33c
        __asm _emit 0x7d
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 29: je 0x5859b33a
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 57 AC EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A8: jmp 0x5859b2e4
        __asm _emit 0xeb
        __asm _emit 0xa8
        ; Exact mapped bytes EB 8E: jmp 0x5859b2cc
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes E9 3F FE FF FF: jmp 0x5859b182
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 160h]
        mov dword ptr [ebp - 5ch], edx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 87 AB EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xab
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0adch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0adch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 7D 04 00 00: jmp 0x5859b7f5
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0c8h
        ; Exact mapped bytes 0F 85 70 04 00 00: jne 0x5859b7f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 60h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F5 2A 00 00: call 0x5859de90
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 508h]
        ; Exact mapped bytes E8 87 39 F2 FF: call 0x584bed30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0xf2
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 39 13 00: call 0x586cece0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x00
        push 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 46 FE FF: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e4h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ecx + 0dch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ecx + 0e0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4f4h]
        mov dword ptr [ebp - 64h], edx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D6 AA EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D D7 FF FF: call 0x58598b50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x5859b431
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0fffffffeh
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b443
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 9
        ; Exact mapped bytes 0F 8D 72 03 00 00: jge 0x5859b7bf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 0e84h
        cmp dword ptr [eax + 588f4f74h], 0
        ; Exact mapped bytes 0F 84 9A 01 00 00: je 0x5859b5fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7f4h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b490
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7f4h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 68h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 01 AB EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xab
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7f8h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b4bf
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7f8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 6ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 D2 AA EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7fch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b4ee
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7fch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 70h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 F3 A9 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa9
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 800h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b51d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 800h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 74h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 74 AA EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 808h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b54c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 808h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 78h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 45 AA EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 1D: je 0x5859b57b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 7ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 16 AA EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b58d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 7D 63: jge 0x5859b5f6
        __asm _emit 0x7d
        __asm _emit 0x63
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b5a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 49: jge 0x5859b5f4
        __asm _emit 0x7d
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 29: je 0x5859b5f2
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 80h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 9F A9 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa9
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A8: jmp 0x5859b59c
        __asm _emit 0xeb
        __asm _emit 0xa8
        ; Exact mapped bytes EB 8E: jmp 0x5859b584
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x5859b7ba
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 23: je 0x5859b630
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 61 A9 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa9
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7f8h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 23: je 0x5859b665
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7f8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 2C A9 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa9
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7fch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 23: je 0x5859b69a
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7fch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 47 A8 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 800h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 23: je 0x5859b6cf
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 800h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 C2 A8 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 808h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 23: je 0x5859b704
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 808h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 8D A8 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 23: je 0x5859b739
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 58 A8 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b74b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 4
        ; Exact mapped bytes 7D 69: jge 0x5859b7ba
        __asm _emit 0x7d
        __asm _emit 0x69
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859b763
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 7D 4F: jge 0x5859b7b8
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 2F: je 0x5859b7b6
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 DB A7 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A2: jmp 0x5859b75a
        __asm _emit 0xeb
        __asm _emit 0xa2
        ; Exact mapped bytes EB 88: jmp 0x5859b742
        __asm _emit 0xeb
        __asm _emit 0x88
        ; Exact mapped bytes E9 7B FC FF FF: jmp 0x5859b43a
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 05 A7 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0adch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0adch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 C0 FF FF: call 0x58597870
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0c8h
        ; Exact mapped bytes 75 0E: jne 0x5859b815
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 29 13 00: call 0x586ce130
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x29
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5859b821
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 21 13 00: call 0x586cd9c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 38 13 00: call 0x586cf0d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
