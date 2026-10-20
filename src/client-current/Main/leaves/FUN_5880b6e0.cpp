// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880B6E0 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_5880b6e0() {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov eax, 1388h
        cmp dword ptr [esi + 10ch], eax
        ; Exact mapped bytes 7E 06: jle 0x5880b6f9
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 10ch], eax
        mov eax, 3e8h
        cmp dword ptr [esi + 108h], eax
        ; Exact mapped bytes 76 06: jbe 0x5880b70c
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 108h], eax
        cmp dword ptr [esi + 12ch], eax
        ; Exact mapped bytes 7E 06: jle 0x5880b71a
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 12ch], eax
        cmp dword ptr [esi + 124h], eax
        ; Exact mapped bytes 76 06: jbe 0x5880b728
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 124h], eax
        xor edx, edx
        cmp dword ptr [ecx + 8d8h], edx
        ; Exact mapped bytes 74 11: je 0x5880b743
        __asm _emit 0x74
        __asm _emit 0x11
        mov dword ptr [ecx + 8d8h], edx
        mov dword ptr [esi + 1b0h], edx
        pop esi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 1b0h], 1
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 21f04h]
        mov al, byte ptr [ecx + 0ch]
        mov byte ptr [esi + 1b4h], al
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21f04h]
        push edi
        xor edi, edi
        mov dword ptr [esp + 8], edx
        mov dword ptr [esp + 10h], edx
        cmp byte ptr [eax + 0ch], dl
        ; Exact mapped bytes 74 78: je 0x5880b7f5
        __asm _emit 0x74
        __asm _emit 0x78
        push ebx
        push ebp
        nop
        mov eax, dword ptr [eax + 4]
        mov cl, byte ptr [edx + eax + 2]
        ; Exact mapped bytes 8B 2D F8 47 A2 58: mov ebp, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp cl, 0ffh
        ; Exact mapped bytes 74 1A: je 0x5880b7ac
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp cl, 0feh
        ; Exact mapped bytes 74 15: je 0x5880b7ac
        __asm _emit 0x74
        __asm _emit 0x15
        mov ebx, dword ptr [ebp + 4]
        cmp byte ptr [ebx + 354h], cl
        ; Exact mapped bytes 75 06: jne 0x5880b7a8
        __asm _emit 0x75
        __asm _emit 0x06
        inc dword ptr [esp + 10h]
        ; Exact mapped bytes EB 04: jmp 0x5880b7ac
        __asm _emit 0xeb
        __asm _emit 0x04
        inc dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        mov cl, byte ptr [ecx + 354h]
        test cl, cl
        ; Exact mapped bytes 75 0A: jne 0x5880b7c3
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 0F B6 04 02: movzx ax, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x02
        movzx eax, ax
        ; Exact mapped bytes EB 12: jmp 0x5880b7d5
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp cl, 1
        ; Exact mapped bytes 75 0B: jne 0x5880b7d3
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 0F B6 4C 02 01: movzx cx, byte ptr [edx + eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x01
        movzx eax, cx
        ; Exact mapped bytes EB 02: jmp 0x5880b7d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esi + edi + 1b5h], al
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 21f04h]
        movzx ecx, byte ptr [eax + 0ch]
        inc edi
        add edx, 3
        cmp edi, ecx
        ; Exact mapped bytes 75 8D: jne 0x5880b780
        __asm _emit 0x75
        __asm _emit 0x8d
        pop ebp
        pop ebx
        movzx edx, word ptr [esp + 10h]
        movzx eax, word ptr [esp + 8]
        sub eax, edx
        pop edi
        mov dword ptr [esi + 1bch], eax
        pop esi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
