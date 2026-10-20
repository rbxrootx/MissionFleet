// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58554100 .. +0x2C7 bytes.
extern "C" __declspec(naked) void FUN_58554100_58554100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 20h], ecx
        mov eax, 8
        imul ecx, eax, 0
        lea edx, [ebp + ecx - 14h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, 8
        imul eax, edx, 0
        lea ecx, [ebp + eax - 14h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, 8
        shl eax, 0
        lea ecx, [ebp + eax - 14h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax], 0
        mov ecx, 8
        shl ecx, 0
        lea edx, [ebp + ecx - 14h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 28h], 0
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 28h], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes EB 0C: jmp 0x585541b4
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 E8: mov dx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        movzx esi, word ptr [ebp - 18h]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 27 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x27
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 63 01 00 00: jge 0x58554332
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 27 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x27
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F 82 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6F 8E F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8e
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        movzx ecx, word ptr [ebp - 1ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x5855432d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 1ch]
        cmp edx, 5
        ; Exact mapped bytes 74 0D: je 0x58554217
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx eax, word ptr [ebp - 1ch]
        cmp eax, 6
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x5855432d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE C9 FF FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        movzx ecx, word ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7E F3 FF FF: call 0x585535b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 27 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x27
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 18h]
        movzx eax, byte ptr [eax + edx + 1fch]
        lea ecx, [ebp + eax*8 - 14h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 27 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 18h]
        movzx eax, byte ptr [eax + edx + 21ch]
        shl eax, 2
        mov dword ptr [ebp - 38h], eax
        movzx ecx, word ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 62 B9 F4 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        add ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 7D 59: jge 0x585542e1
        __asm _emit 0x7d
        __asm _emit 0x59
        movzx edx, word ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 48 B9 F4 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 27 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x27
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 18h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        lea eax, [ebp + edx*8 - 14h]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 26 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x26
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 18h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        shl edx, 2
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 26 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 18h]
        movzx eax, byte ptr [eax + edx + 1fch]
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x5855432d
        __asm _emit 0x75
        __asm _emit 0x31
        movzx ecx, word ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 74 4F F6 FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 26 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x26
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 18h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp + edx*4 - 28h], eax
        ; Exact mapped bytes E9 76 FE FF FF: jmp 0x585541a8
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + ecx - 28h]
        push edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + ecx - 28h]
        push edx
        mov eax, 8
        shl eax, 0
        lea ecx, [ebp + eax - 14h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, 8
        shl ecx, 0
        lea edx, [ebp + ecx - 14h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        push edx
        mov eax, 8
        imul ecx, eax, 0
        lea edx, [ebp + ecx - 14h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        mov edx, 8
        imul eax, edx, 0
        lea ecx, [ebp + eax - 14h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 B0 12 00: call 0x5867f3d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8D CC 2D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x2d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
