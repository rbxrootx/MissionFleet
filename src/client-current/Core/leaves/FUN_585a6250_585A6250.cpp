// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A6250 .. +0x35F bytes.
extern "C" __declspec(naked) void FUN_585a6250_585A6250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 0ch], ecx
        push 0b8h
        ; Exact mapped bytes E8 A1 AD 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xad
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], eax
        push 0b8h
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 91 6B 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6b
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        push 0b8h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FC 65 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x65
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 09 F5 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        push 4
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 4A 6B 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6b
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 0
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 3A 6B 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6b
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x585a646a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax]
        shr eax, 1
        and eax, 1fh
        mov ecx, 18h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 40 AD 28 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xad
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        shr edx, 1
        and edx, 1fh
        imul eax, edx, 18h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 E9 6A 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 14h], 2
        mov byte ptr [ebp - 13h], 0
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 94 01 82 00 00 00: mov dx, word ptr [ecx + eax + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        mov byte ptr [ebp - 18h], 3
        mov byte ptr [ebp - 17h], 0
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 94 01 82 00 00 00: mov dx, word ptr [ecx + eax + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 EA: mov word ptr [ebp - 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xea
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 06 F5 FF: call 0x584f6a70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 07 F5 FF: call 0x584f6b30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 4
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 F2 64 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x64
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 2ch
        push edx
        ; Exact mapped bytes E8 DD 64 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x64
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a63c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 20h
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x585a6468
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        push 4
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 2A 6A 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6a
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 1ch], 5
        mov byte ptr [ebp - 1bh], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 8C 50 86 00 00 00: mov cx, word ptr [eax + edx*2 + 0x86]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D E6: mov word ptr [ebp - 0x1a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 09 F5 FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x09
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 48: je 0x585a6463
        __asm _emit 0x74
        __asm _emit 0x48
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        shr edx, 1
        and edx, 1fh
        cmp eax, edx
        ; Exact mapped bytes 73 36: jae 0x585a6463
        __asm _emit 0x73
        __asm _emit 0x36
        push 4
        lea eax, [ebp - 1ch]
        push eax
        movzx ecx, word ptr [ebp - 4]
        imul edx, ecx, 18h
        add edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 4D 64 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x64
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        movzx eax, word ptr [ebp - 4]
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [ebp - 20h]
        mov byte ptr [edx + ecx + 0eh], al
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x585a63bf
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x585a646f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x585a65a9
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 5A EE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x585a649c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF B0 1D 00: call 0x58781560
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb0
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E7 26 01 00: call 0x585b8b80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 61: jmp 0x585a64fd
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 B0 1D 00: call 0x58781560
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb0
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6F F0 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf0
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 50 F0 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 64 09 01 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 0db4h]
        ; Exact mapped bytes E8 55 2D F1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2d
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 74 16: je 0x585a6529
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 0db4h]
        ; Exact mapped bytes E8 3F 2D F1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2d
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 4
        ; Exact mapped bytes 75 3D: jne 0x585a6566
        __asm _emit 0x75
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0dach]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0dach]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0db4h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0db4h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B 6A 00 00: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1E: je 0x585a658a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], eax
        push 0b8h
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 B4 AA 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xaa
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 19: je 0x585a65a9
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 AC AA 28 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xaa
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
