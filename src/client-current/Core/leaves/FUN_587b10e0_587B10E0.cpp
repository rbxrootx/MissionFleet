// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B10E0 .. +0x217 bytes.
extern "C" __declspec(naked) void FUN_587b10e0_587B10E0() {
    __asm {
        sub esp, 24h
        mov eax, dword ptr [esp + 2ch]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push ebp
        push esi
        push edi
        mov edx, dword ptr [eax]
        xor ebp, ebp
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        mov edi, dword ptr [esp + 34h]
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], edx
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [eax + 10h]
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esp + 20h], ecx
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 11 87 3C 0B 00 00: movups xmmword ptr [edi + 0xb3c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x87
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 0ch], ecx
        xor ecx, ecx
        ; Exact mapped bytes 0F 11 87 4C 0B 00 00: movups xmmword ptr [edi + 0xb4c], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x87
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1454h]
        mov dword ptr [esp + 2ch], esi
        mov eax, dword ptr [edi + eax*4 + 0b5ch]
        ; Exact mapped bytes 66 89 4C 82 02: mov word ptr [edx + eax*4 + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x82
        __asm _emit 0x02
        mov edx, dword ptr [edi + 1454h]
        inc edx
        cmp edx, 23dh
        ; Exact mapped bytes 0F 8D 9D 01 00 00: jge 0x587b12f0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 0b5ch]
        mov eax, 23dh
        lea ecx, [ecx + edx*4]
        sub eax, edx
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], eax
        push ebx
        mov ebx, dword ptr [ecx]
        mov ecx, dword ptr [esp + 38h]
        lea eax, [ebx*4]
        mov dword ptr [esp + 2ch], eax
        add eax, ecx
        mov dword ptr [esp + 14h], eax
        movzx eax, word ptr [eax + 2]
        movzx ecx, word ptr [ecx + eax*4 + 2]
        inc ecx
        cmp ecx, esi
        mov eax, ecx
        mov ecx, dword ptr [esp + 14h]
        cmovg eax, esi
        mov dword ptr [esp + 20h], eax
        lea eax, [ebp + 1]
        cmovle eax, ebp
        mov ebp, eax
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 89 41 02: mov word ptr [ecx + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x02
        cmp ebx, edx
        ; Exact mapped bytes 7F 4D: jg 0x587b1201
        __asm _emit 0x7f
        __asm _emit 0x4d
        ; Exact mapped bytes 66 FF 84 47 3C 0B 00 00: inc word ptr [edi + eax*2 + 0xb3c]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes 7C 0B: jl 0x587b11cf
        __asm _emit 0x7c
        __asm _emit 0x0b
        sub ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 24h]
        mov ecx, dword ptr [ecx + ebx*4]
        mov ebx, dword ptr [esp + 14h]
        add eax, ecx
        movzx ebx, word ptr [ebx]
        imul eax, ebx
        add dword ptr [edi + 16a8h], eax
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x587b1201
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esp + 2ch]
        movzx eax, word ptr [edx + eax + 2]
        mov edx, dword ptr [esp + 3ch]
        add eax, ecx
        imul eax, ebx
        add dword ptr [edi + 16ach], eax
        mov ecx, dword ptr [esp + 18h]
        add ecx, 4
        sub dword ptr [esp + 1ch], 1
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 0F 85 59 FF FF FF: jne 0x587b1170
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebp, ebp
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x587b12ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi - 1]
        add esi, 59eh
        lea ebx, [edi + esi*2]
        mov esi, 0ffffh
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edx
        lea eax, [edi + 0b3ch]
        ; Exact mapped bytes 66 83 3C 48 00: cmp word ptr [eax + ecx*2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x48
        __asm _emit 0x00
        lea eax, [eax + ecx*2]
        ; Exact mapped bytes 75 0A: jne 0x587b125c
        __asm _emit 0x75
        __asm _emit 0x0a
        lea eax, [eax - 2]
        dec ecx
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 F6: je 0x587b1252
        __asm _emit 0x74
        __asm _emit 0xf6
        ; Exact mapped bytes 66 01 B4 4F 3C 0B 00 00: add word ptr [edi + ecx*2 + 0xb3c], si
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0xb4
        __asm _emit 0x4f
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        sub ebp, 2
        ; Exact mapped bytes 66 83 84 4F 3E 0B 00 00 02: add word ptr [edi + ecx*2 + 0xb3e], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x3e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 66 01 33: add word ptr [ebx], si
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x33
        test ebp, ebp
        ; Exact mapped bytes 7F C9: jg 0x587b1240
        __asm _emit 0x7f
        __asm _emit 0xc9
        mov esi, dword ptr [esp + 30h]
        mov edx, 23dh
        test esi, esi
        ; Exact mapped bytes 74 6B: je 0x587b12ef
        __asm _emit 0x74
        __asm _emit 0x6b
        movzx eax, word ptr [ebx]
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x587b12e3
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 3ch]
        lea ebx, [edi + 0b5ch]
        lea ebx, [ebx + edx*4]
        mov ebp, dword ptr [ebx - 4]
        lea ebx, [ebx - 4]
        dec edx
        mov dword ptr [esp + 30h], edx
        cmp ebp, ecx
        ; Exact mapped bytes 7F 34: jg 0x587b12db
        __asm _emit 0x7f
        __asm _emit 0x34
        mov ecx, dword ptr [esp + 38h]
        movzx ecx, word ptr [ecx + ebp*4 + 2]
        cmp ecx, esi
        ; Exact mapped bytes 74 22: je 0x587b12d6
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, esi
        sub edx, ecx
        mov ecx, dword ptr [esp + 38h]
        movzx ecx, word ptr [ecx + ebp*4]
        imul edx, ecx
        mov ecx, dword ptr [esp + 38h]
        add dword ptr [edi + 16a8h], edx
        mov edx, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 89 74 A9 02: mov word ptr [ecx + ebp*4 + 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0xa9
        __asm _emit 0x02
        mov ecx, dword ptr [esp + 3ch]
        dec eax
        test eax, eax
        ; Exact mapped bytes 75 B9: jne 0x587b1298
        __asm _emit 0x75
        __asm _emit 0xb9
        mov ebx, dword ptr [esp + 1ch]
        sub ebx, 2
        mov dword ptr [esp + 1ch], ebx
        sub esi, 1
        ; Exact mapped bytes 75 95: jne 0x587b1284
        __asm _emit 0x75
        __asm _emit 0x95
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 24h
        ret
    }
}
