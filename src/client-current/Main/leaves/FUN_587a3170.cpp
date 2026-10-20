// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3170 .. +0x1F2 bytes.
extern "C" __declspec(naked) void FUN_587a3170() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 16ch]
        push esi
        push edi
        mov dword ptr [esp + 10h], 0
        cmp eax, 3ch
        ; Exact mapped bytes 73 0B: jae 0x587a3197
        __asm _emit 0x73
        __asm _emit 0x0b
        mov ecx, eax
        imul ecx, eax
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x587a319f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0e10h
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 0ch]
        mov ebx, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x587a326c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 26 35 13 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x35
        __asm _emit 0x13
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x587a3261
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 4]
        push 0
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 8A 37 13 00: call 0x588d6960
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x587a31e8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 BF 64 01 00 00 06: cmp word ptr [edi + 0x164], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x587a32e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        sub eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edi + 4]
        sub ecx, dword ptr [ebp + 4]
        imul eax, eax
        lea edx, [eax*8]
        sub edx, eax
        add edx, edx
        mov eax, 66666667h
        imul edx
        mov eax, ecx
        imul eax, ecx
        sar edx, 2
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        add esi, eax
        cmp ebx, esi
        ; Exact mapped bytes 76 02: jbe 0x587a3220
        __asm _emit 0x76
        __asm _emit 0x02
        mov ebx, esi
        mov eax, dword ptr [ebp + 3f0h]
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x587a3252
        __asm _emit 0x74
        __asm _emit 0x28
        mov cl, byte ptr [eax + 354h]
        cmp cl, byte ptr [edi + 354h]
        ; Exact mapped bytes 74 29: je 0x587a3261
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [edi + 100ch]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587a3252
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x587a3261
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, edi
        ; Exact mapped bytes E8 E7 7D 13 00: call 0x588db040
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7d
        __asm _emit 0x13
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 86 CB 00 00 00: jbe 0x587a332c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x587a31b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 3f0h]
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov cl, byte ptr [ecx + 354h]
        cmp cl, byte ptr [eax + 354h]
        ; Exact mapped bytes 74 25: je 0x587a32ae
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 66 8B 55 24: mov dx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1C: je 0x587a32ae
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 45 24: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 3e8h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587a32ae
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        test byte ptr [ebp + 113h], 1
        ; Exact mapped bytes 74 21: je 0x587a32d8
        __asm _emit 0x74
        __asm _emit 0x21
        cmp dword ptr [ebp + 13ch], 0
        ; Exact mapped bytes 74 18: je 0x587a32d8
        __asm _emit 0x74
        __asm _emit 0x18
        cmp ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 7D 12: jge 0x587a32d8
        __asm _emit 0x7d
        __asm _emit 0x12
        cmp ebx, dword ptr [ebp + 40ch]
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x587a3355
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 40ch], ebx
        mov eax, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
        mov dword ptr [ebp + 3ech], edi
        movzx eax, word ptr [edi + 350h]
        mov dword ptr [ebp + 144h], eax
        mov ecx, dword ptr [edi + 100ch]
        mov dl, byte ptr [ecx + 4]
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 17: jne 0x587a331f
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 66 83 BF 64 01 00 00 00: cmp word ptr [edi + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587a331f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dword ptr [esp + 10h], 3
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x587a326c
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 10h], 1
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x587a326c
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 24: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 85 76 FF FF FF: jne 0x587a32ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 4D 24 01: or word ptr [ebp + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 3e8h]
        test eax, eax
        ; Exact mapped bytes 0F 84 63 FF FF FF: je 0x587a32ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x587a32ae
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 8
        ret
    }
}
