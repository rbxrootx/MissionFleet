// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F6C0 .. +0x555 bytes.
extern "C" __declspec(naked) void FUN_0043f6c0_0043F6C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f0h
        mov dword ptr [ebp - 0d4h], ecx
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F 83 81 00 00 00: jae 0x43f76d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0B: jne 0x43f72e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0d8h], ecx
        ; Exact mapped bytes EB 25: jmp 0x43f753
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 14h]
        sub edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 1E 65 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 14h]
        sub edx, dword ptr [ebp - 4]
        add eax, edx
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes E9 A2 04 00 00: jmp 0x43fc0f
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov edx, dword ptr [ebp + 8]
        sub edx, ecx
        mov dword ptr [ebp - 0d0h], edx
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 0F 84 6A 04 00 00: je 0x43fc0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 4]
        sar edx, 2
        cmp edx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes 0F 82 4A 02 00 00: jb 0x43fa10
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp - 20h]
        sar eax, 2
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes 0F 86 E3 00 00 00: jbe 0x43f8de
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 0d0h]
        shl edx, 2
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 58h], ecx
        mov dl, byte ptr [ebp - 44h]
        mov byte ptr [ebp - 40h], dl
        mov al, byte ptr [ebp - 50h]
        mov byte ptr [ebp - 48h], al
        mov cl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 4ch], cl
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 ED 19 FC FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0d0h]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 0d0h]
        shl ecx, 2
        mov edx, dword ptr [ebp - 28h]
        sub edx, ecx
        sub edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 64h], edx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7E 1F: jle 0x43f8a4
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, dword ptr [ebp - 64h]
        push edx
        ; Exact mapped bytes E8 C7 63 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 09: jmp 0x43f8ad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes EB 09: jmp 0x43f8be
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 68h]
        add edx, 4
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax*4]
        cmp dword ptr [ebp - 68h], edx
        ; Exact mapped bytes 74 0A: je 0x43f8d9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB DC: jmp 0x43f8b5
        __asm _emit 0xeb
        __asm _emit 0xdc
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x43fa0b
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 84h], eax
        mov cl, byte ptr [ebp - 74h]
        mov byte ptr [ebp - 6ch], cl
        mov dl, byte ptr [ebp - 78h]
        mov byte ptr [ebp - 70h], dl
        mov eax, dword ptr [ebp - 0d0h]
        sub eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x43f922
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 80h]
        sub edx, 1
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 7ch]
        add eax, 4
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 76 0A: jbe 0x43f932
        __asm _emit 0x76
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB DE: jmp 0x43f910
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 0d0h]
        sub eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx + 4]
        lea eax, [edx + eax*4]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0a0h], eax
        mov cl, byte ptr [ebp - 8ch]
        mov byte ptr [ebp - 88h], cl
        mov dl, byte ptr [ebp - 98h]
        mov byte ptr [ebp - 90h], dl
        mov al, byte ptr [ebp - 9ch]
        mov byte ptr [ebp - 94h], al
        mov ecx, dword ptr [ebp - 28h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 0E: jne 0x43f999
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 0e0h], edx
        ; Exact mapped bytes EB 28: jmp 0x43f9c1
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        ; Exact mapped bytes E8 B0 62 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 20h]
        add eax, ecx
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 2ch]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x43f9f3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a4h]
        add edx, 4
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 0a4h]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 0D: je 0x43fa0b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB D9: jmp 0x43f9e4
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact mapped bytes E9 FF 01 00 00: jmp 0x43fc0f
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        sar eax, 2
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        cmp ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes 73 0E: jae 0x43fa52
        __asm _emit 0x73
        __asm _emit 0x0e
        lea edx, [ebp - 0cch]
        mov dword ptr [ebp - 0e4h], edx
        ; Exact mapped bytes EB 0C: jmp 0x43fa5e
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea eax, [ebp - 0b0h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [ebp - 0b0h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 55: je 0x43fadc
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 0a8h]
        shl ecx, 2
        mov dword ptr [ebp - 0bch], ecx
        cmp dword ptr [ebp - 0bch], 80h
        ; Exact mapped bytes 76 17: jbe 0x43fab9
        __asm _emit 0x76
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0bch]
        push edx
        ; Exact mapped bytes E8 B2 C9 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 15: jmp 0x43face
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 0bch]
        push eax
        ; Exact mapped bytes E8 FB 44 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 0ech], ecx
        ; Exact mapped bytes EB 0A: jmp 0x43fae6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes 75 0E: jne 0x43fb19
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 31: jmp 0x43fb4a
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes E8 2A 61 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 0c0h]
        add eax, ecx
        mov dword ptr [ebp - 0f0h], eax
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 0c4h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x43fb8e
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 0c8h]
        sub edx, 1
        mov dword ptr [ebp - 0c8h], edx
        mov eax, dword ptr [ebp - 0c4h]
        add eax, 4
        mov dword ptr [ebp - 0c4h], eax
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 76 0F: jbe 0x43fba6
        __asm _emit 0x76
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0c4h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB CA: jmp 0x43fb70
        __asm _emit 0xeb
        __asm _emit 0xca
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 0ach], ecx
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 23: jne 0x43fbdb
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 68 16 FC FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 BA 05 00 00: call 0x4401a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ebp - 0b4h]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 F1 05 00 00: call 0x440200
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
