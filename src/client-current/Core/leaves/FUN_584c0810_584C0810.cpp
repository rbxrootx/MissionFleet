// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C0810 .. +0x2E1 bytes.
extern "C" __declspec(naked) void FUN_584c0810_584C0810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584c083a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 28h
        ; Exact mapped bytes 0F 8D 90 02 00 00: jge 0x584c0ad4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 24h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 50h], 0
        ; Exact mapped bytes 0F 84 79 02 00 00: je 0x584c0acf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 14h], edx
        imul eax, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 01 56: movsx edx, word ptr [ecx + eax + 0x56]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x56
        cmp edx, -1
        ; Exact mapped bytes 74 15: je 0x584c088a
        __asm _emit 0x74
        __asm _emit 0x15
        imul eax, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 01 56: movsx edx, word ptr [ecx + eax + 0x56]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x56
        cmp edx, 1
        ; Exact mapped bytes 0F 85 DC 01 00 00: jne 0x584c0a66
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 24h
        imul ecx, dword ptr [ebp - 8], 24h
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 60h]
        sub eax, dword ptr [esi + ecx + 58h]
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 F4: movss dword ptr [ebp - 0xc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf4
        imul ecx, dword ptr [ebp - 8], 24h
        imul edx, dword ptr [ebp - 8], 24h
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + ecx + 64h]
        sub ecx, dword ptr [esi + edx + 5ch]
        ; Exact mapped bytes F3 0F 2A C1: cvtsi2ss xmm0, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 11 45 F0: movss dword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        imul edx, dword ptr [ebp - 8], 24h
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + edx + 6ch]
        cdq
        mov ecx, 3
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5f8h], eax
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x584c0973
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 24h
        ; Exact mapped bytes F3 0F 10 05 80 5A 89 58: movss xmm0, dword ptr [0x58895a80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 45 F4: mulss xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 89 F8 05 00 00: cvtsi2ss xmm1, dword ptr [ecx + 0x5f8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 59 C1: mulss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        imul edx, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + edx + 6ch], 5
        ; Exact mapped bytes F3 0F 2A CA: cvtsi2ss xmm1, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + eax + 58h]
        mov dword ptr [ebp - 20h], ecx
        imul eax, dword ptr [ebp - 8], 24h
        ; Exact mapped bytes F3 0F 10 05 80 5A 89 58: movss xmm0, dword ptr [0x58895a80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 45 F0: mulss xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 89 F8 05 00 00: cvtsi2ss xmm1, dword ptr [ecx + 0x5f8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 59 C1: mulss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        imul edx, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + edx + 6ch], 5
        ; Exact mapped bytes F3 0F 2A CA: cvtsi2ss xmm1, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + eax + 5ch]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x584c0a4d
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 24h
        ; Exact mapped bytes F3 0F 10 45 F4: movss xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F3 0F 5E 05 84 5A 89 58: divss xmm0, dword ptr [0x58895a84]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 89 F8 05 00 00: cvtsi2ss xmm1, dword ptr [ecx + 0x5f8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 54 11 6C: cvtsi2ss xmm2, dword ptr [ecx + edx + 0x6c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x6c
        ; Exact mapped bytes F3 0F 5E 15 80 5A 89 58: divss xmm2, dword ptr [0x58895a80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5C CA: subss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 59 0D 88 5A 89 58: mulss xmm1, dword ptr [0x58895a88]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 4D F4: mulss xmm1, dword ptr [ebp - 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xf4
        imul edx, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 54 11 6C: cvtsi2ss xmm2, dword ptr [ecx + edx + 0x6c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x6c
        ; Exact mapped bytes F3 0F 59 15 84 5A 89 58: mulss xmm2, dword ptr [0x58895a84]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E CA: divss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + eax + 58h]
        mov dword ptr [ebp - 20h], edx
        imul edx, dword ptr [ebp - 8], 24h
        ; Exact mapped bytes F3 0F 10 45 F0: movss xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F3 0F 5E 05 84 5A 89 58: divss xmm0, dword ptr [0x58895a84]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 88 F8 05 00 00: cvtsi2ss xmm1, dword ptr [eax + 0x5f8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 24h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 54 08 6C: cvtsi2ss xmm2, dword ptr [eax + ecx + 0x6c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x6c
        ; Exact mapped bytes F3 0F 5E 15 80 5A 89 58: divss xmm2, dword ptr [0x58895a80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5C CA: subss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 59 0D 88 5A 89 58: mulss xmm1, dword ptr [0x58895a88]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 4D F0: mulss xmm1, dword ptr [ebp - 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xf0
        imul ecx, dword ptr [ebp - 8], 24h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 54 08 6C: cvtsi2ss xmm2, dword ptr [eax + ecx + 0x6c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x6c
        ; Exact mapped bytes F3 0F 59 15 84 5A 89 58: mulss xmm2, dword ptr [0x58895a84]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E CA: divss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + edx + 5ch]
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C3 4B 2F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 44: jmp 0x584c0aaa
        __asm _emit 0xeb
        __asm _emit 0x44
        imul eax, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 01 56: movsx edx, word ptr [ecx + eax + 0x56]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x56
        cmp edx, 2
        ; Exact mapped bytes 75 33: jne 0x584c0aaa
        __asm _emit 0x75
        __asm _emit 0x33
        imul eax, dword ptr [ebp - 8], 24h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 6ch]
        sub eax, dword ptr [edx + 5f8h]
        shl eax, 8
        imul ecx, dword ptr [ebp - 8], 24h
        mov esi, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [esi + ecx + 6ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9D 4A 2F 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4a
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        imul edx, dword ptr [ebp - 8], 24h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 5f8h]
        cmp eax, dword ptr [ecx + edx + 6ch]
        ; Exact mapped bytes 75 0F: jne 0x584c0acf
        __asm _emit 0x75
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 8], 24h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 50h], 0
        ; Exact mapped bytes E9 5D FD FF FF: jmp 0x584c0831
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f8h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f8h], ecx
        mov eax, dword ptr [ebp - 18h]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
