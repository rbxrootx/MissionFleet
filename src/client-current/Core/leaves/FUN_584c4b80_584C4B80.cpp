// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C4B80 .. +0x38D bytes.
extern "C" __declspec(naked) void FUN_584c4b80_584C4B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 08: movzx cx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 8A AC 00 00 00: mov word ptr [edx + 0xac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EE 14 FC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B 13 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A 0B FD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        add ecx, 1
        ; Exact mapped bytes 66 89 4D FE: mov word ptr [ebp - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfe
        movzx edx, word ptr [ebp - 2]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 12 FC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [eax + 78h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [eax + 7ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [eax + 84h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 44: mov dx, word ptr [ecx + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x44
        ; Exact mapped bytes 66 89 90 80 00 00 00: mov word ptr [eax + 0x80], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [eax + 94h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 48 44: movsx ecx, word ptr [eax + 0x44]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x44
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x584c4c5b
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        add edx, 4ch
        push edx
        push 9
        mov eax, dword ptr [ebp - 8]
        add eax, 88h
        push eax
        ; Exact mapped bytes E8 2A F5 2E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 16: jmp 0x584c4c71
        __asm _emit 0xeb
        __asm _emit 0x16
        push 4
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 88h
        push ecx
        ; Exact mapped bytes E8 A2 81 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 75 66: jne 0x584c4ce3
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 1ch], ecx
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D FE FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8E 12 FC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 24h], ecx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 FE FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 69 12 FC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 28h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D3 08 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x584c4e16
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x584c4db5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 84h]
        sub eax, 1
        push eax
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 FB FF FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x584c4d52
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 84h]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 89 FF FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F4 11 FC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 91 11 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 61: jmp 0x584c4db3
        __asm _emit 0xeb
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 3ch], eax
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 FD FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B9 11 FC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 44h], eax
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 FD FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 94 11 FC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 48h], eax
        push 101h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FE 07 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 61: jmp 0x584c4e16
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 50h], edx
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 FD FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 56 11 FC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 58h], edx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 FD FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 31 11 FC FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 5ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9B 07 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [eax + 0a0h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 00 AA FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 1A: mov ax, word ptr [edx + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1a
        ; Exact mapped bytes 66 89 81 9E 00 00 00: mov word ptr [ecx + 0x9e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 37 12 FC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 64 10 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 6ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 08 FD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 1
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 DC 0F FC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a4h], 0
        ; Exact mapped bytes 74 17: je 0x584c4ec8
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 9E 00 00 00: movsx eax, word ptr [edx + 0x9e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x584c4ec8
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 F9 FF FF: call 0x584c48b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 74 33: je 0x584c4f07
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 9E 00 00 00: movsx eax, word ptr [edx + 0x9e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x584c4f07
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 75 19: jne 0x584c4f07
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1A D7 15 00: call 0x58622620
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd7
        __asm _emit 0x15
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
