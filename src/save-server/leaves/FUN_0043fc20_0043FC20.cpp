// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043FC20 .. +0x503 bytes.
extern "C" __declspec(naked) void FUN_0043fc20_0043FC20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0e8h
        mov dword ptr [ebp - 0d0h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F 83 81 00 00 00: jae 0x43fcd4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*4]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0B: jne 0x43fc95
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0d4h], ecx
        ; Exact mapped bytes EB 25: jmp 0x43fcba
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 B7 5F 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes E9 49 04 00 00: jmp 0x44011d
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov edx, dword ptr [ebp + 8]
        sub edx, ecx
        mov dword ptr [ebp - 0cch], edx
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 0F 84 11 04 00 00: je 0x44011d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 4]
        sar edx, 2
        cmp edx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes 0F 82 2D 02 00 00: jb 0x43ff5a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [ebp - 24h]
        sar edx, 2
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes 0F 86 E3 00 00 00: jbe 0x43fe43
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 0cch]
        shl ecx, 2
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 4]
        sub eax, ecx
        mov dword ptr [ebp - 5ch], eax
        mov cl, byte ptr [ebp - 48h]
        mov byte ptr [ebp - 44h], cl
        mov dl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 4ch], dl
        mov al, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 50h], al
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 88 14 FC FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 0cch]
        lea ecx, [edx + eax*4]
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 0cch]
        shl eax, 2
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, eax
        sub ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 7E 1F: jle 0x43fe09
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 62 5E 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 09: jmp 0x43fe12
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 09: jmp 0x43fe23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 6ch]
        add ecx, 4
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [ebp - 24h]
        lea ecx, [eax + edx*4]
        cmp dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 74 0A: je 0x43fe3e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB DC: jmp 0x43fe1a
        __asm _emit 0xeb
        __asm _emit 0xdc
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x43ff55
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 88h], edx
        mov al, byte ptr [ebp - 78h]
        mov byte ptr [ebp - 70h], al
        mov cl, byte ptr [ebp - 7ch]
        mov byte ptr [ebp - 74h], cl
        mov edx, dword ptr [ebp - 0cch]
        sub edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 18: jmp 0x43fe90
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 84h]
        sub ecx, 1
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 80h]
        add edx, 4
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 76 0A: jbe 0x43fea3
        __asm _emit 0x76
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB D5: jmp 0x43fe78
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0cch]
        sub edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 4]
        lea edx, [ecx + edx*4]
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0a4h], edx
        mov al, byte ptr [ebp - 90h]
        mov byte ptr [ebp - 8ch], al
        mov cl, byte ptr [ebp - 9ch]
        mov byte ptr [ebp - 94h], cl
        mov dl, byte ptr [ebp - 0a0h]
        mov byte ptr [ebp - 98h], dl
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 32 13 FC FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 30h]
        lea eax, [ecx + edx*4]
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0a8h], edx
        ; Exact mapped bytes EB 0F: jmp 0x43ff3d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a8h]
        add eax, 4
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 74 0D: je 0x43ff55
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB D9: jmp 0x43ff2e
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x44011d
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0b4h]
        cmp edx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes 73 0E: jae 0x43ff9c
        __asm _emit 0x73
        __asm _emit 0x0e
        lea eax, [ebp - 0c8h]
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0C: jmp 0x43ffa8
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea ecx, [ebp - 0b4h]
        mov dword ptr [ebp - 0dch], ecx
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [ebp - 0b4h]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 55: je 0x440026
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 0ach]
        shl edx, 2
        mov dword ptr [ebp - 0c0h], edx
        cmp dword ptr [ebp - 0c0h], 80h
        ; Exact mapped bytes 76 17: jbe 0x440003
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        ; Exact mapped bytes E8 68 C4 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 15: jmp 0x440018
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        ; Exact mapped bytes E8 B1 3F FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 0e4h], edx
        ; Exact mapped bytes EB 0A: jmp 0x440030
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0c4h], edx
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 75 0E: jne 0x440063
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 0e8h], ecx
        ; Exact mapped bytes EB 31: jmp 0x440094
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 24h]
        sub edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes E8 E0 5B 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 24h]
        sub edx, dword ptr [ebp - 0c4h]
        add eax, edx
        mov dword ptr [ebp - 0e8h], eax
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 0b0h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 4E 0F FC FF: call 0x401005
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0b0h], eax
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 23: jne 0x4400e9
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 5A 11 FC FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 AC 00 00 00: call 0x4401a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [ebp - 0b8h]
        lea edx, [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 E3 00 00 00: call 0x440200
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
