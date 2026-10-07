// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 1671 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E2B0 .. +0x5AA bytes.
extern "C" __declspec(naked) void FUN_5887e2b0_segment_00() {
    __asm {
        sub esp, 114h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 110h], eax
        mov eax, dword ptr [esp + 118h]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0a4h]
        push edi
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 1ch], eax
        cmp esi, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 76 05: jbe 0x5887e2ea
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 88 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [eax + 98h]
        mov ebx, esi
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [esp + 18h], ebx
        lea edi, [esi + 22h]
        mov esi, dword ptr [eax + 0a8h]
        cmp dword ptr [eax + 0a4h], esi
        ; Exact mapped bytes 76 05: jbe 0x5887e314
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 5E E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [ecx + 98h]
        test ebp, ebp
        ; Exact mapped bytes 74 04: je 0x5887e326
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ebp, eax
        ; Exact mapped bytes 74 05: je 0x5887e32b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 47 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebx, esi
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5887e3c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 75 38: jne 0x5887e36f
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes E8 36 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887e348
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2A E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 E0: mov dx, word ptr [edi - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xe0
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 3B 50 02: cmp dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 74 3E: je 0x5887e394
        __asm _emit 0x74
        __asm _emit 0x3e
        test ebp, ebp
        ; Exact mapped bytes 75 1A: jne 0x5887e374
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 13 E9 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 1A: ja 0x5887e380
        __asm _emit 0x77
        __asm _emit 0x1a
        test ebp, ebp
        ; Exact mapped bytes 74 0F: je 0x5887e379
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB 0C: jmp 0x5887e37b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB CA: jmp 0x5887e33e
        __asm _emit 0xeb
        __asm _emit 0xca
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB E8: jmp 0x5887e361
        __asm _emit 0xeb
        __asm _emit 0xe8
        xor eax, eax
        cmp edi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 05: jae 0x5887e385
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 ED E8 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        add ebx, 22h
        add edi, 22h
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x5887e301
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        movzx eax, word ptr [eax + 8]
        ; Exact mapped bytes 66 49: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        mov dword ptr [esp + 18h], ebx
        movzx ebp, cx
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x5887e4b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899f3b0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x5887e4e2
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899f630h
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [esp + 14h]
        mov edx, eax
        mov eax, dword ptr [ebx + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5887e418
        __asm _emit 0x74
        __asm _emit 0x2c
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x5887e418
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e410
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e410
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e3f5
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e414
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e415
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f60ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, eax
        mov eax, dword ptr [ebx + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x5887e463
        __asm _emit 0x74
        __asm _emit 0x32
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x5887e463
        __asm _emit 0x74
        __asm _emit 0x2e
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e45b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e45b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e440
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e45f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e460
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f5e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, eax
        mov eax, dword ptr [ebx + 1d4h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5887e4b1
        __asm _emit 0x74
        __asm _emit 0x35
        test edx, edx
        ; Exact mapped bytes 74 31: je 0x5887e4b1
        __asm _emit 0x74
        __asm _emit 0x31
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x5887e4a9
        __asm _emit 0x74
        __asm _emit 0x1a
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 14: je 0x5887e4a9
        __asm _emit 0x74
        __asm _emit 0x14
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e485
        __asm _emit 0x75
        __asm _emit 0xe7
        dec eax
        mov byte ptr [eax], 0
        mov ecx, ebx
        ; Exact mapped bytes E9 6E 04 00 00: jmp 0x5887e917
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e4ae
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov ecx, ebx
        ; Exact mapped bytes E9 5F 04 00 00: jmp 0x5887e917
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x5887e4d1
        __asm _emit 0x75
        __asm _emit 0x13
        push 5899f274h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes EB 11: jmp 0x5887e4e2
        __asm _emit 0xeb
        __asm _emit 0x11
        push 5899f550h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes 8B 1D C4 C3 98 58: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esp + 20h]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5887e580
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 E7 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov edx, dword ptr [esp + 18h]
        cmp edx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887e50e
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 64 E7 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        movzx ecx, word ptr [eax + 8]
        mov esi, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 264h]
        ; Exact mapped bytes E8 3A 8E 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 264h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        lea edi, [esi + 1f4h]
        mov ecx, edi
        mov edx, 3
        mov edi, edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887e540
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esi + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5887e593
        __asm _emit 0x74
        __asm _emit 0x37
        lea edx, [esp + 20h]
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x5887e587
        __asm _emit 0x74
        __asm _emit 0x18
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 12: je 0x5887e587
        __asm _emit 0x74
        __asm _emit 0x12
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e565
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 0B: jmp 0x5887e58b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [eax]
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x5887e500
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e58c
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 10h]
        mov byte ptr [eax], 0
        ; Exact mapped bytes 0F BF ED: movsx ebp, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xed
        cmp ebp, 0fh
        ; Exact mapped bytes 0F 87 83 03 00 00: ja 0x5887e922
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp + 5887e954h]
        ; Exact mapped bytes FF 24 95 40 E9 87 58: jmp dword ptr [edx*4 + 0x5887e940]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x58
        push 5899f590h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 1d0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 19 37 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x37
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, esi
        ; Exact mapped bytes E9 49 03 00 00: jmp 0x5887e91d
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899f580h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, eax
        mov eax, dword ptr [esi + 1cch]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5887e627
        __asm _emit 0x74
        __asm _emit 0x36
        test edx, edx
        ; Exact mapped bytes 74 32: je 0x5887e627
        __asm _emit 0x74
        __asm _emit 0x32
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e61b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e61b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e600
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e61f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e620
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 10h]
        mov byte ptr [eax], 0
        push 5899f560h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, eax
        mov eax, dword ptr [esi + 1d4h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887e677
        __asm _emit 0x74
        __asm _emit 0x33
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x5887e677
        __asm _emit 0x74
        __asm _emit 0x2f
        mov esi, 80h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e66b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e66b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e650
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e66f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e670
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 10h]
        mov byte ptr [eax], 0
        lea ecx, [esi + 200h]
        mov edx, 3
        mov edi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x5887e687
        __asm _emit 0x75
        __asm _emit 0xf3
        lea eax, [ebp - 8]
        cmp eax, 7
        ; Exact mapped bytes 77 23: ja 0x5887e6bf
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes FF 24 85 64 E9 87 58: jmp dword ptr [eax*4 + 0x5887e964]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x58
        mov eax, 4
        ; Exact mapped bytes EB 18: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, 5
        ; Exact mapped bytes EB 11: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, 6
        ; Exact mapped bytes EB 0A: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, 7
        ; Exact mapped bytes EB 03: jmp 0x5887e6c2
        __asm _emit 0xeb
        __asm _emit 0x03
        lea eax, [ebp - 1]
        movzx edx, byte ptr [eax + 58a0b4cch]
        mov ecx, dword ptr [esi + 268h]
        push edx
        ; Exact mapped bytes E8 8B 8C 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 268h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        push 0
        push edi
        push 0
        mov ecx, esi
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x5887e91d
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899f3b0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ebp, dword ptr [esp + 20h]
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 75 77: jne 0x5887e780
        __asm _emit 0x75
        __asm _emit 0x77
        ; Exact mapped bytes E8 64 E5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov ebx, dword ptr [esp + 18h]
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887e71e
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 54 E5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 8]
        push ecx
        mov ecx, dword ptr [esi + 264h]
        ; Exact mapped bytes E8 32 8C 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 264h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, edi
        mov edx, 3
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887e740
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esi + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5887e799
        __asm _emit 0x74
        __asm _emit 0x3d
        lea edx, [esp + 20h]
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x5887e785
        __asm _emit 0x74
        __asm _emit 0x16
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 10: je 0x5887e785
        __asm _emit 0x74
        __asm _emit 0x10
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e765
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 09: jmp 0x5887e789
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB 8B: jmp 0x5887e710
        __asm _emit 0xeb
        __asm _emit 0x8b
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e78a
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 14h]
        mov byte ptr [eax], 0
        push 5899f560h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, eax
        mov eax, dword ptr [esi + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5887e7ef
        __asm _emit 0x74
        __asm _emit 0x39
        test edx, edx
        ; Exact mapped bytes 74 35: je 0x5887e7ef
        __asm _emit 0x74
        __asm _emit 0x35
        mov esi, 80h
        nop
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e7db
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e7db
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e7c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e7df
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e7e0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 14h]
        mov byte ptr [eax], 0
        test ebp, ebp
        ; Exact mapped bytes 75 2E: jne 0x5887e821
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes E8 7A E4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887e804
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 6E E4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx edx, word ptr [ebx + 8]
        mov ecx, dword ptr [esi + 264h]
        push edx
        ; Exact mapped bytes E8 4C 8B 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 1
        push 0
        mov ecx, esi
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x5887e91d
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB D4: jmp 0x5887e7fa
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [esp + 1ch]
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0C DC FF FF: call 0x5887c440
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x5887e922
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 1c8h]
        lea ebx, [eax + 0bh]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5887e887
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, 5898c922h
        mov esi, 80h
        ; Exact mapped bytes EB 06: jmp 0x5887e860
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E860 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5887e2b0_segment_01() {
    __asm {
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e87b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e87b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e860
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e87f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e880
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 10h]
        mov byte ptr [eax], 0
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 B6: jne 0x5887e845
        __asm _emit 0x75
        __asm _emit 0xb6
        mov eax, dword ptr [esi + 234h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5887e8cd
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, 5898c922h
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887e8c1
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887e8c1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887e8a6
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887e8c5
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887e8c6
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 10h]
        mov byte ptr [eax], 0
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899f630h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 1c8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 F7 33 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        push 5899f60ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 1d0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 E1 33 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        push 5899f5e8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 1d4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 CB 33 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, esi
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 8E BF FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 120h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 A6 E2 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 114h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
