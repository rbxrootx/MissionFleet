// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867ECE0 .. +0x1FF bytes.
extern "C" __declspec(naked) void FUN_5867ece0_5867ECE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 7C E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 D7 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 56 E3 E0 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe3
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 7C E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 86 3A F5 FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3a
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx eax, al
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 7C E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 76 66 F8 FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 24h]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 75 09: jne 0x5867ed6b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 1C: jmp 0x5867ed87
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 75 09: jne 0x5867ed7a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x5867ed81
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 2
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 1a8h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 1a8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edx + eax], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867ede3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D B2 00 00 00: jge 0x5867ee9f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 7B E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A9 39 F5 FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x39
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx ecx, al
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5867ee9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 7B E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 93 65 F8 FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, al
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 75 65: jne 0x5867ee9a
        __asm _emit 0x75
        __asm _emit 0x65
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 7B E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F9 D5 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0A E2 E0 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, ax
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 75 3C: jne 0x5867ee9a
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 1a8h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + ecx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 1a8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 3B FF FF FF: jmp 0x5867edda
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
