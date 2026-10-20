// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFFB0 .. +0x270 bytes.
extern "C" __declspec(naked) void FUN_587affb0_587AFFB0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push edi
        mov edi, eax
        movzx ecx, ax
        shr edi, 10h
        cmp ebx, 1
        ; Exact mapped bytes 75 32: jne 0x587afff9
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [esp + 10h]
        movzx eax, byte ptr [eax]
        add eax, ecx
        cmp eax, 0fff1h
        lea edx, [eax - 0fff1h]
        cmovb edx, eax
        lea eax, [edx + edi]
        cmp eax, 0fff1h
        lea ecx, [eax - 0fff1h]
        pop edi
        cmovb ecx, eax
        shl ecx, 10h
        or ecx, edx
        mov eax, ecx
        pop ebx
        ret
        push esi
        mov esi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 75 07: jne 0x587b0009
        __asm _emit 0x75
        __asm _emit 0x07
        lea eax, [esi + 1]
        pop esi
        pop edi
        pop ebx
        ret
        cmp ebx, 10h
        ; Exact mapped bytes 73 3E: jae 0x587b004c
        __asm _emit 0x73
        __asm _emit 0x3e
        test ebx, ebx
        ; Exact mapped bytes 74 0F: je 0x587b0021
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx eax, byte ptr [esi]
        lea esi, [esi + 1]
        add ecx, eax
        add edi, ecx
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x587b0012
        __asm _emit 0x75
        __asm _emit 0xf1
        cmp ecx, 0fff1h
        lea esi, [ecx - 0fff1h]
        mov eax, 80078071h
        cmovb esi, ecx
        mul edi
        shr edx, 0fh
        mov eax, edx
        shl eax, 4
        sub eax, edx
        add eax, edi
        shl eax, 10h
        or eax, esi
        pop esi
        pop edi
        pop ebx
        ret
        cmp ebx, 15b0h
        ; Exact mapped bytes 0F 82 F2 00 00 00: jb 0x587b014a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5e6ea9afh
        mul ebx
        push ebp
        mov ebp, edx
        shr ebp, 0bh
        ; Exact mapped bytes 66 66 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ebx, 15b0h
        mov edx, 15bh
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi]
        add ecx, eax
        movzx eax, byte ptr [esi + 1]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 2]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 3]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 4]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 5]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 6]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 7]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 8]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 9]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0ah]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0bh]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0ch]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0dh]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0eh]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0fh]
        add edi, ecx
        add esi, 10h
        add ecx, eax
        add edi, ecx
        sub edx, 1
        ; Exact mapped bytes 0F 85 75 FF FF FF: jne 0x587b0080
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 80078071h
        mul ecx
        shr edx, 0fh
        imul eax, edx, 0ffff000fh
        add ecx, eax
        mov eax, 80078071h
        mul edi
        shr edx, 0fh
        imul eax, edx, 0ffff000fh
        add edi, eax
        sub ebp, 1
        ; Exact mapped bytes 0F 85 38 FF FF FF: jne 0x587b0070
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        test ebx, ebx
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x587b0215
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 10h
        ; Exact mapped bytes 0F 82 98 00 00 00: jb 0x587b01e2
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ebx
        shr edx, 4
        nop
        movzx eax, byte ptr [esi]
        sub ebx, 10h
        add ecx, eax
        movzx eax, byte ptr [esi + 1]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 2]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 3]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 4]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 5]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 6]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 7]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 8]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 9]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0ah]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0bh]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0ch]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0dh]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0eh]
        add edi, ecx
        add ecx, eax
        movzx eax, byte ptr [esi + 0fh]
        add edi, ecx
        add esi, 10h
        add ecx, eax
        add edi, ecx
        sub edx, 1
        ; Exact mapped bytes 0F 85 72 FF FF FF: jne 0x587b0150
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 74 0F: je 0x587b01f1
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx eax, byte ptr [esi]
        lea esi, [esi + 1]
        add ecx, eax
        add edi, ecx
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x587b01e2
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, 80078071h
        mul ecx
        shr edx, 0fh
        imul eax, edx, 0ffff000fh
        add ecx, eax
        mov eax, 80078071h
        mul edi
        shr edx, 0fh
        imul edx, edx, 0ffff000fh
        add edi, edx
        shl edi, 10h
        or edi, ecx
        pop esi
        mov eax, edi
        pop edi
        pop ebx
        ret
    }
}
