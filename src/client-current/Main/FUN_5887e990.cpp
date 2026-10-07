// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 814 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E990 .. +0x32E bytes.
extern "C" __declspec(naked) void FUN_5887e990_segment_00() {
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
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0a4h]
        mov dword ptr [esp + 8], eax
        cmp esi, dword ptr [edi + 0a8h]
        ; Exact mapped bytes 76 05: jbe 0x5887e9c6
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 AC E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        push ebx
        push ebp
        mov ebp, dword ptr [edi + 98h]
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [esp + 14h], 0
        lea ebx, [esi + 22h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov esi, dword ptr [edi + 0a8h]
        cmp dword ptr [edi + 0a4h], esi
        ; Exact mapped bytes 76 05: jbe 0x5887e9f3
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 7F E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [edi + 98h]
        test ebp, ebp
        ; Exact mapped bytes 74 04: je 0x5887ea01
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ebp, eax
        ; Exact mapped bytes 74 05: je 0x5887ea06
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 6C E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 74 6D: je 0x5887ea79
        __asm _emit 0x74
        __asm _emit 0x6d
        test ebp, ebp
        ; Exact mapped bytes 75 3C: jne 0x5887ea4c
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 5D E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [esp + 1ch]
        cmp ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887ea25
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 4D E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 53 E0: mov dx, word ptr [ebx - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0xe0
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 3B 56 02: cmp dx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x02
        ; Exact mapped bytes 74 3C: je 0x5887ea6f
        __asm _emit 0x74
        __asm _emit 0x3c
        test ebp, ebp
        ; Exact mapped bytes 75 1A: jne 0x5887ea51
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 36 E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 1A: ja 0x5887ea5d
        __asm _emit 0x77
        __asm _emit 0x1a
        test ebp, ebp
        ; Exact mapped bytes 74 0F: je 0x5887ea56
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB 0C: jmp 0x5887ea58
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB C6: jmp 0x5887ea17
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB E8: jmp 0x5887ea3e
        __asm _emit 0xeb
        __asm _emit 0xe8
        xor eax, eax
        cmp ebx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 05: jae 0x5887ea62
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 10 E2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        add dword ptr [esp + 1ch], 22h
        add ebx, 22h
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x5887e9e0
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 14h], 1
        ; Exact mapped bytes EB 04: jmp 0x5887ea7d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F BF 44 24 14: movsx eax, word ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        sub eax, 0
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x5887ebfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 85 F9 01 00 00: jne 0x5887ec8d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 8]
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x5887eab3
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5899f3b0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes EB 22: jmp 0x5887ead5
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x5887eac8
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5899f274h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes EB 0D: jmp 0x5887ead5
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5899f550h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 0F 85 7B 00 00 00: jne 0x5887eb61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 87 E1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov esi, dword ptr [esp + 1ch]
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887eafb
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 77 E1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx eax, word ptr [esi + 8]
        mov ecx, dword ptr [edi + 264h]
        push eax
        ; Exact mapped bytes E8 55 88 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 264h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        lea ecx, [edi + 1f4h]
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
        ; Exact mapped bytes 75 F1: jne 0x5887eb21
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [edi + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5887eb72
        __asm _emit 0x74
        __asm _emit 0x35
        lea edx, [esp + 20h]
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x5887eb66
        __asm _emit 0x74
        __asm _emit 0x16
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 10: je 0x5887eb66
        __asm _emit 0x74
        __asm _emit 0x10
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887eb46
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 09: jmp 0x5887eb6a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB 87: jmp 0x5887eaed
        __asm _emit 0xeb
        __asm _emit 0x87
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887eb6b
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 1ch]
        mov byte ptr [eax], 0
        push 5899f6e4h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, eax
        mov eax, dword ptr [edi + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5887ebbb
        __asm _emit 0x74
        __asm _emit 0x30
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x5887ebbb
        __asm _emit 0x74
        __asm _emit 0x2c
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887ebaf
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887ebaf
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887eb94
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887ebb3
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887ebb4
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 1ch]
        mov byte ptr [eax], 0
        test ebp, ebp
        ; Exact mapped bytes 75 37: jne 0x5887ebf6
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 AE E0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887ebd0
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A2 E0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx edx, word ptr [esi + 8]
        mov ecx, dword ptr [edi + 264h]
        push edx
        ; Exact mapped bytes E8 80 87 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 1
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 C3 BC FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5887ec8d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB CB: jmp 0x5887ebc6
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [esi + 55ch]
        cmp eax, 14h
        ; Exact mapped bytes 74 60: je 0x5887ec66
        __asm _emit 0x74
        __asm _emit 0x60
        cmp eax, 15h
        ; Exact mapped bytes 74 5B: je 0x5887ec66
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899f6c0h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 1c8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 B9 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        push 5899f698h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 1d0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A3 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        push 5899f670h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 1d4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 8D 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 50 BC FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 27: jmp 0x5887ec8d
        __asm _emit 0xeb
        __asm _emit 0x27
        push 5899f650h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 1c8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 60 30 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 23 BC FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 7C 24 14 00: cmp word ptr [esp + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        pop ebp
        pop ebx
        mov ecx, edi
        ; Exact mapped bytes 74 04: je 0x5887ec9d
        __asm _emit 0x74
        __asm _emit 0x04
        push 1
        ; Exact mapped bytes EB 02: jmp 0x5887ec9f
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        push esi
        ; Exact mapped bytes E8 8B E5 FF FF: call 0x5887d230
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 118h]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 25 DF 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 114h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
