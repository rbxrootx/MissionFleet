// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799580 .. +0x1E9 bytes.
extern "C" __declspec(naked) void FUN_58799580_58799580() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        push ebp
        mov ebx, ecx
        push edi
        mov edi, dword ptr [esp + 18h]
        inc dword ptr [ebx + 4]
        mov ebp, dword ptr [ebx]
        mov dword ptr [edi + 4], edx
        cmp edx, ebp
        ; Exact mapped bytes 75 15: jne 0x587995ae
        __asm _emit 0x75
        __asm _emit 0x15
        mov dword ptr [ebp], edi
        mov eax, edi
        mov dword ptr [ebp + 4], edi
        mov dword ptr [ebp + 8], edi
        mov byte ptr [edi + 0ch], 1
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 75 0D: jne 0x587995c2
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [edx + 8], edi
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0F: jne 0x587995cc
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [ebp + 8], edi
        ; Exact mapped bytes EB 0A: jmp 0x587995cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [edx], edi
        cmp edx, dword ptr [ebp]
        ; Exact mapped bytes 75 03: jne 0x587995cc
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ebp], edi
        mov ecx, dword ptr [edi + 4]
        mov eax, edi
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 0F 85 7F 01 00 00: jne 0x5879975a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov esi, dword ptr [edx + 4]
        mov ecx, dword ptr [esi]
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x5879969a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x587996a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edx + 8]
        cmp eax, esi
        ; Exact mapped bytes 75 37: jne 0x5879963b
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [esi]
        mov eax, edx
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esi]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 03: jne 0x58799616
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [esi + 4], ecx
        mov ecx, dword ptr [ebx]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 05: jne 0x58799628
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 4], esi
        ; Exact mapped bytes EB 0E: jmp 0x58799636
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [edx + 4]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 75 04: jne 0x58799633
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [ecx], esi
        ; Exact mapped bytes EB 03: jmp 0x58799636
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ecx + 8], esi
        mov dword ptr [esi], eax
        mov dword ptr [eax + 4], esi
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx + 0ch], 1
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 4]
        mov byte ptr [ecx + 0ch], 0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 4]
        mov esi, dword ptr [edx]
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esi + 8]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 03: jne 0x58799665
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 4], edx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [esi + 4], ecx
        mov ecx, dword ptr [ebx]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0B: jne 0x5879967d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [ecx + 4], esi
        mov dword ptr [esi + 8], edx
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x58799749
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 0B: jne 0x58799690
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [ecx + 8], esi
        mov dword ptr [esi + 8], edx
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x58799749
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx], esi
        mov dword ptr [esi + 8], edx
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x58799749
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 1D: jne 0x587996bd
        __asm _emit 0x75
        __asm _emit 0x1d
        mov byte ptr [edx + 0ch], 1
        mov byte ptr [ecx + 0ch], 1
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 4]
        mov byte ptr [ecx + 0ch], 0
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x5879974c
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edx]
        cmp eax, esi
        ; Exact mapped bytes 75 3A: jne 0x587996fd
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 8]
        mov eax, edx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esi + 8]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 03: jne 0x587996d6
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [esi + 4], ecx
        mov ecx, dword ptr [ebx]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 05: jne 0x587996e8
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 4], esi
        ; Exact mapped bytes EB 0F: jmp 0x587996f7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [edx + 4]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 05: jne 0x587996f5
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 8], esi
        ; Exact mapped bytes EB 02: jmp 0x587996f7
        __asm _emit 0xeb
        __asm _emit 0x02
        mov dword ptr [ecx], esi
        mov dword ptr [esi + 8], eax
        mov dword ptr [eax + 4], esi
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx + 0ch], 1
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 4]
        mov byte ptr [ecx + 0ch], 0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 4]
        mov esi, dword ptr [edx + 8]
        mov ecx, dword ptr [esi]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esi]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 03: jne 0x58799727
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 4], edx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [esi + 4], ecx
        mov ecx, dword ptr [ebx]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 05: jne 0x58799739
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 4], esi
        ; Exact mapped bytes EB 0E: jmp 0x58799747
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [edx + 4]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 04: jne 0x58799744
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [ecx], esi
        ; Exact mapped bytes EB 03: jmp 0x58799747
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ecx + 8], esi
        mov dword ptr [esi], edx
        mov dword ptr [edx + 4], esi
        mov ecx, dword ptr [eax + 4]
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 0F 84 87 FE FF FF: je 0x587995e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov eax, dword ptr [ebp + 4]
        mov byte ptr [eax + 0ch], 1
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
