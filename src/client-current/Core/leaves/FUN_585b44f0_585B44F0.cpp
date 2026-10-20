// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B44F0 .. +0x552 bytes.
extern "C" __declspec(naked) void FUN_585b44f0_585B44F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 2D 05 00 00: je 0x585b4a3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x585b4530
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x585b4530
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 51: je 0x585b4590
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x585b4553
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x585b4539
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 11 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x585b4564
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x585b4590
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 12 EE FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A9: jmp 0x585b4539
        __asm _emit 0xeb
        __asm _emit 0xa9
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x585b45a8
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x585b45a8
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x585b45f6
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x585b45f4
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x585b45c8
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x585b45ae
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 12 EE FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BA: jmp 0x585b45ae
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x585b45a8
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db0h]
        ; Exact mapped bytes E8 5C 4C F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 74 0D: je 0x585b4619
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d18h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db8h]
        ; Exact mapped bytes E8 99 BF FF FF: call 0x585b05c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0D 04 00 00: je 0x585b4a3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d18h], -1
        ; Exact mapped bytes 0F 84 FD 03 00 00: je 0x585b4a3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 68 FB FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        test eax, eax
        ; Exact mapped bytes 0F 85 D4 03 00 00: jne 0x585b4a3c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 604h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 600h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 84 40 89 58: call dword ptr [0x58894084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0c98h], 3
        ; Exact mapped bytes 0F 8D 1E 01 00 00: jge 0x585b47c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ecx + edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        imul eax, edx, 0
        add ecx, eax
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d18h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 624h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 620h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 61ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d18h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 618h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 88 40 89 58: call dword ptr [0x58894088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x585b4a14
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0c98h], 3
        ; Exact mapped bytes 0F 85 31 02 00 00: jne 0x585b4a14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [edx + eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        imul ecx, eax, 0
        add edx, ecx
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d18h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 818h]
        mov ecx, 10h
        imul edx, ecx, 0
        add eax, edx
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 620h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d18h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 61ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 618h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 88 40 89 58: call dword ptr [0x58894088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d18h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 818h]
        mov ecx, 10h
        shl ecx, 0
        add eax, ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [eax + edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 818h]
        mov edx, 10h
        shl edx, 0
        add ecx, edx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ecx + eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        shl eax, 0
        add edx, eax
        mov ecx, 8
        imul eax, ecx, 0
        mov ecx, dword ptr [edx + eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 818h]
        mov eax, 10h
        shl eax, 0
        add edx, eax
        mov ecx, 8
        imul eax, ecx, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 624h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d18h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 620h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d18h]
        shl edx, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 61ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d18h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 618h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 88 40 89 58: call dword ptr [0x58894088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 64 FB FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
