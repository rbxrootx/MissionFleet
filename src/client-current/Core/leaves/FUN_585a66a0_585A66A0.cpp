// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A66A0 .. +0x2F8 bytes.
extern "C" __declspec(naked) void FUN_585a66a0_585A66A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF B0 22 0E 00 00: movsx esi, word ptr [eax + 0xe22]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb0
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E4 E2 ED FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe2
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        cmp esi, ecx
        ; Exact mapped bytes 0F 85 CC 02 00 00: jne 0x585a6993
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585a66d9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D B0 02 00 00: jge 0x585a6993
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + eax*4 + 0e28h], 0
        ; Exact mapped bytes 0F 84 97 02 00 00: je 0x585a698e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 0e28h]
        movzx edx, byte ptr [ecx]
        cmp edx, 0dh
        ; Exact mapped bytes 0F 85 18 01 00 00: jne 0x585a6828
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E9 68 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        lea ecx, [esi + ecx*4 + 0ea8h]
        ; Exact mapped bytes 0F BF 14 11: movsx edx, word ptr [ecx + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x11
        sub edx, eax
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x585a678f
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 0e28h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 0
        movzx edx, word ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        movzx ecx, byte ptr [ebp - 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 0e22h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 72 FD FF: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6A 68 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        lea eax, [esi + eax*4 + 0ea8h]
        ; Exact mapped bytes 0F BF 14 10: movsx edx, word ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x10
        sub edx, ecx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x585a6823
        __asm _emit 0x74
        __asm _emit 0x50
        push 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 0f28h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 99 60 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        push 0
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        movzx eax, byte ptr [ebp - 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 0e22h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 71 FD FF: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 66 01 00 00: jmp 0x585a698e
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 0f28h]
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [edx + ecx], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x585a68db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B2 67 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        lea eax, [esi + eax*4 + 0ea8h]
        ; Exact mapped bytes 0F BF 0C 08: movsx ecx, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x08
        sub ecx, edx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        push 4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 0f28h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 E9 5F 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x585a68db
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        movzx eax, byte ptr [ebp - 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 0e22h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 71 FD FF: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 0f28h]
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x585a698e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FF 66 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x66
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        lea eax, [esi + eax*4 + 0ea8h]
        ; Exact mapped bytes 0F BF 14 10: movsx edx, word ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x10
        sub edx, ecx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        push 4
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 0f28h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 36 5F 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5f
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x585a698e
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        movzx eax, byte ptr [ebp - 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 0e22h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 70 FD FF: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3D FD FF FF: jmp 0x585a66d0
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
