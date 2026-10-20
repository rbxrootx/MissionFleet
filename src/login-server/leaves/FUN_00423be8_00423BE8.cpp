// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423BE8 .. +0x2F6 bytes.
extern "C" __declspec(naked) void FUN_00423be8_00423BE8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 10h]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov edx, edi
        lea esi, [eax + 17h]
        sub edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ecx + 10h]
        and esi, 0fffffff0h
        shr edx, 0fh
        mov ecx, edx
        imul ecx, ecx, 204h
        lea ecx, [ecx + eax + 144h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [edi - 4]
        dec ecx
        cmp esi, ecx
        mov dword ptr [ebp + 10h], ecx
        mov ebx, dword ptr [ecx + edi - 4]
        lea edi, [ecx + edi - 4]
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 8E 5F 01 00 00: jle 0x423d96
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test bl, 1
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x423d8f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, ecx
        cmp esi, ebx
        ; Exact mapped bytes 0F 8F 45 01 00 00: jg 0x423d8f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sar ecx, 4
        dec ecx
        cmp ecx, 3fh
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 76 06: jbe 0x423c5f
        __asm _emit 0x76
        __asm _emit 0x06
        push 3fh
        pop ecx
        mov dword ptr [ebp - 8], ecx
        mov ebx, dword ptr [edi + 4]
        cmp ebx, dword ptr [edi + 8]
        ; Exact mapped bytes 75 48: jne 0x423caf
        __asm _emit 0x75
        __asm _emit 0x48
        cmp ecx, 20h
        ; Exact mapped bytes 73 1F: jae 0x423c8b
        __asm _emit 0x73
        __asm _emit 0x1f
        mov ebx, 80000000h
        shr ebx, cl
        mov ecx, dword ptr [ebp - 8]
        lea ecx, [ecx + eax + 4]
        not ebx
        and dword ptr [eax + edx*4 + 44h], ebx
        dec byte ptr [ecx]
        ; Exact mapped bytes 75 2B: jne 0x423caf
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx], ebx
        ; Exact mapped bytes EB 24: jmp 0x423caf
        __asm _emit 0xeb
        __asm _emit 0x24
        add ecx, -20h
        mov ebx, 80000000h
        shr ebx, cl
        mov ecx, dword ptr [ebp - 8]
        lea ecx, [ecx + eax + 4]
        not ebx
        and dword ptr [eax + edx*4 + 0c4h], ebx
        dec byte ptr [ecx]
        ; Exact mapped bytes 75 06: jne 0x423caf
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx + 4], ebx
        mov ecx, dword ptr [edi + 8]
        mov ebx, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], ebx
        mov ecx, dword ptr [edi + 4]
        mov edi, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edi
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, esi
        add dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8E AA 00 00 00: jle 0x423d7d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        sar edi, 4
        dec edi
        lea ecx, [ecx + esi - 4]
        cmp edi, 3fh
        ; Exact mapped bytes 76 03: jbe 0x423ce9
        __asm _emit 0x76
        __asm _emit 0x03
        push 3fh
        pop edi
        mov ebx, dword ptr [ebp - 0ch]
        lea ebx, [ebx + edi*8]
        mov dword ptr [ebp + 10h], ebx
        mov ebx, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], ebx
        mov dword ptr [ebx + 4], ecx
        mov ebx, dword ptr [ecx + 4]
        mov dword ptr [ebx + 8], ecx
        mov ebx, dword ptr [ecx + 4]
        cmp ebx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 5C: jne 0x423d6b
        __asm _emit 0x75
        __asm _emit 0x5c
        mov cl, byte ptr [edi + eax + 4]
        cmp edi, 20h
        mov byte ptr [ebp + 13h], cl
        inc cl
        mov byte ptr [edi + eax + 4], cl
        ; Exact mapped bytes 73 21: jae 0x423d42
        __asm _emit 0x73
        __asm _emit 0x21
        cmp byte ptr [ebp + 13h], 0
        ; Exact mapped bytes 75 0E: jne 0x423d35
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ebx, 80000000h
        mov ecx, edi
        shr ebx, cl
        mov ecx, dword ptr [ebp + 8]
        or dword ptr [ecx], ebx
        lea eax, [eax + edx*4 + 44h]
        mov edx, 80000000h
        mov ecx, edi
        ; Exact mapped bytes EB 25: jmp 0x423d67
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp byte ptr [ebp + 13h], 0
        ; Exact mapped bytes 75 10: jne 0x423d58
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [edi - 20h]
        mov ebx, 80000000h
        shr ebx, cl
        mov ecx, dword ptr [ebp + 8]
        or dword ptr [ecx + 4], ebx
        lea eax, [eax + edx*4 + 0c4h]
        lea ecx, [edi - 20h]
        mov edx, 80000000h
        shr edx, cl
        or dword ptr [eax], edx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [edx + esi - 4]
        mov dword ptr [eax], ecx
        mov dword ptr [ecx + eax - 4], ecx
        ; Exact mapped bytes EB 03: jmp 0x423d80
        __asm _emit 0xeb
        __asm _emit 0x03
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [esi + 1]
        mov dword ptr [edx - 4], eax
        mov dword ptr [edx + esi - 8], eax
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x423ed6
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x423ed9
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 3A 01 00 00: jge 0x423ed6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 0ch]
        sub dword ptr [ebp + 10h], esi
        lea ecx, [esi + 1]
        mov dword ptr [ebx - 4], ecx
        lea ebx, [ebx + esi - 4]
        mov esi, dword ptr [ebp + 10h]
        mov dword ptr [ebp + 0ch], ebx
        sar esi, 4
        dec esi
        mov dword ptr [ebx - 4], ecx
        cmp esi, 3fh
        ; Exact mapped bytes 76 03: jbe 0x423dc1
        __asm _emit 0x76
        __asm _emit 0x03
        push 3fh
        pop esi
        test byte ptr [ebp - 4], 1
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x423e50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 4]
        sar esi, 4
        dec esi
        cmp esi, 3fh
        ; Exact mapped bytes 76 03: jbe 0x423dda
        __asm _emit 0x76
        __asm _emit 0x03
        push 3fh
        pop esi
        mov ecx, dword ptr [edi + 4]
        cmp ecx, dword ptr [edi + 8]
        ; Exact mapped bytes 75 47: jne 0x423e29
        __asm _emit 0x75
        __asm _emit 0x47
        cmp esi, 20h
        ; Exact mapped bytes 73 1E: jae 0x423e05
        __asm _emit 0x73
        __asm _emit 0x1e
        mov ebx, 80000000h
        mov ecx, esi
        shr ebx, cl
        lea esi, [esi + eax + 4]
        not ebx
        and dword ptr [eax + edx*4 + 44h], ebx
        dec byte ptr [esi]
        ; Exact mapped bytes 75 28: jne 0x423e26
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx], ebx
        ; Exact mapped bytes EB 21: jmp 0x423e26
        __asm _emit 0xeb
        __asm _emit 0x21
        lea ecx, [esi - 20h]
        mov ebx, 80000000h
        shr ebx, cl
        lea ecx, [esi + eax + 4]
        not ebx
        and dword ptr [eax + edx*4 + 0c4h], ebx
        dec byte ptr [ecx]
        ; Exact mapped bytes 75 06: jne 0x423e26
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edi + 8]
        mov esi, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], esi
        mov ecx, dword ptr [edi + 4]
        mov esi, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], esi
        mov esi, dword ptr [ebp + 10h]
        add esi, dword ptr [ebp - 4]
        mov dword ptr [ebp + 10h], esi
        sar esi, 4
        dec esi
        cmp esi, 3fh
        ; Exact mapped bytes 76 03: jbe 0x423e50
        __asm _emit 0x76
        __asm _emit 0x03
        push 3fh
        pop esi
        mov ecx, dword ptr [ebp - 0ch]
        mov edi, dword ptr [ecx + esi*8 + 4]
        lea ecx, [ecx + esi*8]
        mov dword ptr [ebx + 4], edi
        mov dword ptr [ebx + 8], ecx
        mov dword ptr [ecx + 4], ebx
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [ecx + 8], ebx
        mov ecx, dword ptr [ebx + 4]
        cmp ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes 75 5C: jne 0x423ecd
        __asm _emit 0x75
        __asm _emit 0x5c
        mov cl, byte ptr [esi + eax + 4]
        cmp esi, 20h
        mov byte ptr [ebp + 0fh], cl
        inc cl
        mov byte ptr [esi + eax + 4], cl
        ; Exact mapped bytes 73 21: jae 0x423ea4
        __asm _emit 0x73
        __asm _emit 0x21
        cmp byte ptr [ebp + 0fh], 0
        ; Exact mapped bytes 75 0E: jne 0x423e97
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edi, 80000000h
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr [ebp + 8]
        or dword ptr [ecx], edi
        lea eax, [eax + edx*4 + 44h]
        mov edx, 80000000h
        mov ecx, esi
        ; Exact mapped bytes EB 25: jmp 0x423ec9
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp byte ptr [ebp + 0fh], 0
        ; Exact mapped bytes 75 10: jne 0x423eba
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [esi - 20h]
        mov edi, 80000000h
        shr edi, cl
        mov ecx, dword ptr [ebp + 8]
        or dword ptr [ecx + 4], edi
        lea eax, [eax + edx*4 + 0c4h]
        lea ecx, [esi - 20h]
        mov edx, 80000000h
        shr edx, cl
        or dword ptr [eax], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebx], eax
        mov dword ptr [eax + ebx - 4], eax
        push 1
        pop eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
