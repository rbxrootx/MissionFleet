// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874F130 .. +0xF41 bytes.
extern "C" __declspec(naked) void FUN_5874f130_5874F130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c1ch], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5874f159
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 13: jge 0x5874f172
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0ad0h], 0
        ; Exact mapped bytes EB DE: jmp 0x5874f150
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 39 00 00: call 0x58752aa0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5874f18d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x5874f21c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2dch]
        and ecx, 3ffh
        xor ecx, 55h
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx + 2dch]
        shr edx, 0ah
        and edx, 3ffh
        xor edx, 55h
        add ecx, edx
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 2dch]
        shr eax, 14h
        and eax, 3ffh
        xor eax, 55h
        add ecx, eax
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + edx + 2e0h]
        xor edx, 55h
        imul ecx, edx
        imul eax, ecx, 5
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0c1ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c1ch], eax
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x5874f184
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 36: je 0x5874f25b
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
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
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 20: jne 0x5874f25b
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 2A 82 1C 0C 00 00: cvtsi2sd xmm0, dword ptr [edx + 0xc1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x82
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 05 C0 33 8A 58: mulsd xmm0, qword ptr [0x588a33c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 0F 84 CF 0C 00 00: je 0x5874ff37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1f4h]
        shr edx, 6
        and edx, 0fh
        add eax, edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bd0h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        imul ecx, dword ptr [eax + 70h], 3e8h
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0c1ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c1ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1fch]
        xor ecx, 55555555h
        mov edx, dword ptr [edx + 68h]
        add edx, ecx
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bf8h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5874f38c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        movzx ecx, word ptr [eax + 120h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        imul ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 234h]
        imul ecx, eax
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0c1ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c1ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        movzx eax, byte ptr [edx + 98h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 234h]
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 4
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0bfch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        movzx eax, byte ptr [ecx + 99h]
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + 234h]
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 4
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0c04h], eax
        ; Exact mapped bytes EB 2C: jmp 0x5874f3b8
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0bfch], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0c04h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5874f465
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        movzx eax, word ptr [edx + 11eh]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        imul eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 236h]
        imul eax, edx
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0c1ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        movzx eax, byte ptr [ecx + 98h]
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + 236h]
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0bfch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        movzx eax, byte ptr [eax + 99h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 236h]
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0c04h], eax
        ; Exact mapped bytes EB 2C: jmp 0x5874f491
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0bfch], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0c04h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 7E: je 0x5874f518
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        movzx eax, word ptr [edx + 124h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        imul eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 23ah]
        imul eax, edx
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0c1ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c1ch], eax
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 23ah]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        movzx edx, word ptr [eax + 124h]
        imul ecx, edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 23ah]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        movzx eax, byte ptr [ecx + 9bh]
        imul edx, eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c10h], edx
        ; Exact mapped bytes EB 1A: jmp 0x5874f532
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        movzx eax, word ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c18h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 74 6A: je 0x5874f5bb
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        movzx edx, word ptr [ecx + 122h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        imul edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 238h]
        imul edx, ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 0c1ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        movzx eax, byte ptr [eax + 9ah]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 238h]
        imul eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 0c18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c18h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5874f5cd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1ch
        ; Exact mapped bytes 0F 8D 8D 02 00 00: jge 0x5874f864
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 30h], 0
        ; Exact mapped bytes 0F 84 77 02 00 00: je 0x5874f85f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 30h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c1ch]
        add eax, dword ptr [ecx + 24h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 30h]
        movzx edx, word ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 0c18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c18h], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x5874f743
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 0c6ch]
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx]
        xor eax, 55h
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0b0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        movzx ecx, byte ptr [eax]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 2E: jne 0x5874f6c1
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        movzx eax, word ptr [edx + 9eh]
        imul eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 2C: jmp 0x5874f6ed
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0b0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        movzx edx, word ptr [ecx + 0ach]
        imul edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov eax, dword ptr [edx + 24h]
        imul eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7E 17: jle 0x5874f72e
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c1ch]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        ; Exact mapped bytes EB 15: jmp 0x5874f743
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c1ch]
        add eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x5874f85f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 0c6ch]
        mov eax, 2
        shl eax, 0
        movzx ecx, word ptr [edx + eax]
        xor ecx, 55h
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        movzx ecx, byte ptr [eax]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 2E: jne 0x5874f7dd
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        movzx edx, word ptr [ecx + 9eh]
        imul edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 2C: jmp 0x5874f809
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 0ach]
        imul eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0b0h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov eax, dword ptr [edx + 24h]
        imul eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7E 17: jle 0x5874f84a
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c1ch]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        ; Exact mapped bytes EB 15: jmp 0x5874f85f
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c1ch]
        add eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        ; Exact mapped bytes E9 60 FD FF FF: jmp 0x5874f5c4
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x5874f86f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D B3 00 00 00: jge 0x5874f92c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 30h], 0
        ; Exact mapped bytes 74 3C: je 0x5874f8c2
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 30h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        imul eax, eax, 0
        movzx edx, word ptr [edx + eax]
        xor edx, 55h
        imul edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 0c1ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 74 4A: je 0x5874f927
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        shl eax, 0
        movzx edx, word ptr [edx + eax]
        xor edx, 55h
        imul edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 0c1ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], edx
        ; Exact mapped bytes E9 3A FF FF FF: jmp 0x5874f866
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 37: je 0x5874f96c
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c1ch]
        add eax, dword ptr [ecx + 24h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        movzx ecx, word ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0c18h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c18h], ecx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 0F 84 F2 04 00 00: je 0x5874fe6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c1ch]
        add edx, dword ptr [eax + 24h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c1ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        movzx eax, word ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0c18h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c18h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x5874fa84
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        movzx eax, word ptr [edx + 7eh]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0c1ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        ; Exact mapped bytes F2 0F 2A C8: cvtsi2sd xmm1, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes F2 0F 2A 4D D4: cvtsi2sd xmm1, dword ptr [ebp - 0x2c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 2ch]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E C1: divsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 5E 05 D8 51 89 58: divsd xmm0, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 08: je 0x5874fa32
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5874fa39
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov eax, dword ptr [eax + 98h]
        xor edx, edx
        div dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes F2 0F 2A 45 CC: cvtsi2sd xmm0, dword ptr [ebp - 0x34]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 34h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B2 15 10 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 AA 18 0E 00: call 0x58831320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c44h], eax
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x5874fb3b
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        movzx edx, word ptr [ecx + 7eh]
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 0c1ch], 64h
        cdq
        mov ecx, 3e8h
        idiv ecx
        ; Exact mapped bytes F2 0F 2A C8: cvtsi2sd xmm1, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes F2 0F 2A 4D C8: cvtsi2sd xmm1, dword ptr [ebp - 0x38]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 38h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E C1: divsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 5E 05 D8 51 89 58: divsd xmm0, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 08: je 0x5874faed
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x5874faf4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        imul eax, dword ptr [eax + 98h], 5ah
        xor edx, edx
        div dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes F2 0F 2A 45 C0: cvtsi2sd xmm0, dword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 F6 14 10 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 EE 17 0E 00: call 0x58831320
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c44h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c50h]
        add ecx, 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, ecx
        imul eax, dword ptr [edx + 0c44h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c48h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 74 1A: je 0x5874fb95
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
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
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5874fc2f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c48h], 32h
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x5874fc2a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c48h], 32h
        mov ecx, dword ptr [ebp - 4]
        mov eax, 1388h
        xor edx, edx
        div dword ptr [ecx + 0c44h]
        sub eax, 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c50h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c50h]
        add ecx, 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, ecx
        imul eax, dword ptr [edx + 0c44h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 32h
        ; Exact mapped bytes 7E 17: jle 0x5874fc0f
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        ; Exact mapped bytes EB 1B: jmp 0x5874fc2a
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp - 44h], 32h
        ; Exact mapped bytes 7D 15: jge 0x5874fc2a
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        ; Exact mapped bytes E9 79 01 00 00: jmp 0x5874fda8
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 74 1A: je 0x5874fc5f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 5
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5874fcf9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c48h], 3ch
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x5874fcf4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c48h], 3ch
        mov ecx, dword ptr [ebp - 4]
        mov eax, 1770h
        xor edx, edx
        div dword ptr [ecx + 0c44h]
        sub eax, 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c50h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c50h]
        add ecx, 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, ecx
        imul eax, dword ptr [edx + 0c44h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 3ch
        ; Exact mapped bytes 7E 17: jle 0x5874fcd9
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        ; Exact mapped bytes EB 1B: jmp 0x5874fcf4
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp - 48h], 3ch
        ; Exact mapped bytes 7D 15: jge 0x5874fcf4
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x5874fda8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5874fda8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c48h], 28h
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x5874fda8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c48h], 28h
        mov ecx, dword ptr [ebp - 4]
        mov eax, 0fa0h
        xor edx, edx
        div dword ptr [ecx + 0c44h]
        sub eax, 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c50h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c50h]
        add ecx, 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, ecx
        imul eax, dword ptr [edx + 0c44h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 28h
        ; Exact mapped bytes 7E 17: jle 0x5874fd8d
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        ; Exact mapped bytes EB 1B: jmp 0x5874fda8
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp - 4ch], 28h
        ; Exact mapped bytes 7D 15: jge 0x5874fda8
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5874fe57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c48h], 28h
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x5874fe57
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c48h], 28h
        mov ecx, dword ptr [ebp - 4]
        mov eax, 0fa0h
        xor edx, edx
        div dword ptr [ecx + 0c44h]
        sub eax, 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c50h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c50h]
        add ecx, 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, ecx
        imul eax, dword ptr [edx + 0c44h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 28h
        ; Exact mapped bytes 7E 17: jle 0x5874fe3c
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        ; Exact mapped bytes EB 1B: jmp 0x5874fe57
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp - 50h], 28h
        ; Exact mapped bytes 7D 15: jge 0x5874fe57
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c50h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c54h]
        mov dword ptr [edx + 0c4ch], ecx
        ; Exact mapped bytes EB 27: jmp 0x5874fe92
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c44h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c48h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 53: je 0x5874feee
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        movzx ecx, word ptr [ecx + 0ah]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        movzx edx, word ptr [eax + 0ah]
        mov eax, 64h
        sub eax, edx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0c18h]
        cdq
        mov esi, 3e8h
        idiv esi
        add ecx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c58h], ecx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c58h], 64h
        ; Exact mapped bytes 7E 0D: jle 0x5874feec
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c58h], 64h
        ; Exact mapped bytes EB 0D: jmp 0x5874fefb
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c58h], 0
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 0ac8h]
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c14h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c14h], 384h
        ; Exact mapped bytes 7E 0D: jle 0x5874ff35
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c14h], 384h
        ; Exact mapped bytes EB 1A: jmp 0x5874ff51
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bd0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c44h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c44h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c48h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c48h], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0bfch]
        xor eax, 55555555h
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0bfch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c04h]
        xor edx, 55555555h
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 0c04h], edx
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0bfch]
        xor eax, 55555555h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0bfch], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c04h]
        xor edx, 55555555h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0c04h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c18h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c18h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c14h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c14h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c1ch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
