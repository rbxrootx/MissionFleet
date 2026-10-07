// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 772 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887AA10 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5887aa10_segment_00() {
    __asm {
        ; Exact mapped bytes 0F BF 44 24 04: movsx eax, word ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        push ebx
        mov edx, 1
        sub eax, edx
        push esi
        push edi
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x5887ac1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edx
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x5887ab16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + 244h]
        lea edi, [edx + 4]
        ; Exact mapped bytes EB 08: jmp 0x5887aa40
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887AA40 .. +0x1ED bytes.
extern "C" __declspec(naked) void FUN_5887aa10_segment_01() {
    __asm {
        mov esi, dword ptr [eax]
        mov ebx, 0fffdh
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        mov esi, dword ptr [eax]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        add eax, 4
        sub edi, edx
        ; Exact mapped bytes 75 E3: jne 0x5887aa40
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ecx + 258h]
        mov esi, ebx
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 258h]
        mov esi, 0fffdh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 25ch]
        mov esi, ebx
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 25ch]
        mov esi, 0fffdh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 260h]
        mov esi, ebx
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 260h]
        mov esi, 0fffdh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 148h]
        mov eax, 2
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 148h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 13ch]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 13ch]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        add ecx, 140h
        mov esi, dword ptr [ecx + 0ch]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 0ch]
        mov edi, ebx
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx]
        mov edi, ebx
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        add ecx, 4
        sub eax, edx
        ; Exact mapped bytes 75 D1: jne 0x5887aae1
        __asm _emit 0x75
        __asm _emit 0xd1
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea esi, [ecx + 244h]
        mov ebx, 5
        mov eax, 2
        mov edi, dword ptr [esi]
        ; Exact mapped bytes 66 09 47 24: or word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x47
        __asm _emit 0x24
        mov edi, dword ptr [esi]
        ; Exact mapped bytes 66 09 57 24: or word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x57
        __asm _emit 0x24
        add esi, 4
        sub ebx, edx
        ; Exact mapped bytes 75 ED: jne 0x5887ab26
        __asm _emit 0x75
        __asm _emit 0xed
        mov esi, dword ptr [ecx + 258h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 258h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 25ch]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 25ch]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 260h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 260h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 148h]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 148h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 13ch]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 13ch]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 14ch]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 14ch]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 140h]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 140h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 150h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 150h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 144h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 144h]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea esi, [ecx + 244h]
        mov ebx, 5
        mov eax, 2
        ; Exact mapped bytes EB 03: jmp 0x5887ac30
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887AC30 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_5887aa10_segment_02() {
    __asm {
        mov edi, dword ptr [esi]
        ; Exact mapped bytes 66 09 47 24: or word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x47
        __asm _emit 0x24
        mov edi, dword ptr [esi]
        ; Exact mapped bytes 66 09 57 24: or word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x57
        __asm _emit 0x24
        add esi, 4
        sub ebx, edx
        ; Exact mapped bytes 75 ED: jne 0x5887ac30
        __asm _emit 0x75
        __asm _emit 0xed
        mov esi, dword ptr [ecx + 258h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 258h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 25ch]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 25ch]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 260h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 260h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 148h]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 148h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 13ch]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 13ch]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 14ch]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 14ch]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 140h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 140h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 150h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 150h]
        mov edx, edi
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 144h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 144h]
        mov eax, edi
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
