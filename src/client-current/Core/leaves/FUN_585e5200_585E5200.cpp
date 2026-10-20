// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E5200 .. +0x16E bytes.
extern "C" __declspec(naked) void FUN_585e5200_585E5200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes C7 05 60 06 96 58 00 00 00 00: mov dword ptr [0x58960660], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x585e52b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10bf0h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 6C EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585e524e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 6E EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 65: je 0x585e52b9
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 7D EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 17 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 7D EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 43: je 0x585e52b7
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C4 71 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5D F7 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x585e52b7
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B1 71 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A F7 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10bf0h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10bf0h], eax
        ; Exact mapped bytes EB 8A: jmp 0x585e5243
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585e52cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 7D 3A: jge 0x585e530b
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 328h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 328h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        ; Exact mapped bytes EB B7: jmp 0x585e52c2
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21abch], 0
        ; Exact mapped bytes 75 52: jne 0x585e5369
        __asm _emit 0x75
        __asm _emit 0x52
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585e5329
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 106c0h]
        ; Exact mapped bytes 7D 25: jge 0x585e535c
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 1F: jge 0x585e535c
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 57 07 13 00: call 0x58715ab0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C4: jmp 0x585e5320
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21abch], 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
