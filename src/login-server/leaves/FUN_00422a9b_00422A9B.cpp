// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422A9B .. +0x1B4 bytes.
extern "C" __declspec(naked) void FUN_00422a9b_00422A9B() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        push ebx
        push esi
        and dword ptr [ecx], 0
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x422ac5
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [edi], esi
        add edi, 4
        mov dword ptr [ebp + 0ch], edi
        cmp byte ptr [eax], 22h
        ; Exact mapped bytes 75 44: jne 0x422b0e
        __asm _emit 0x75
        __asm _emit 0x44
        mov dl, byte ptr [eax + 1]
        inc eax
        cmp dl, 22h
        ; Exact mapped bytes 74 29: je 0x422afc
        __asm _emit 0x74
        __asm _emit 0x29
        test dl, dl
        ; Exact mapped bytes 74 25: je 0x422afc
        __asm _emit 0x74
        __asm _emit 0x25
        movzx edx, dl
        test byte ptr [edx + 4512c1h], 4
        ; Exact mapped bytes 74 0C: je 0x422aef
        __asm _emit 0x74
        __asm _emit 0x0c
        inc dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x422aef
        __asm _emit 0x74
        __asm _emit 0x06
        mov dl, byte ptr [eax]
        mov byte ptr [esi], dl
        inc esi
        inc eax
        inc dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 D5: je 0x422aca
        __asm _emit 0x74
        __asm _emit 0xd5
        mov dl, byte ptr [eax]
        mov byte ptr [esi], dl
        inc esi
        ; Exact mapped bytes EB CE: jmp 0x422aca
        __asm _emit 0xeb
        __asm _emit 0xce
        inc dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x422b06
        __asm _emit 0x74
        __asm _emit 0x04
        and byte ptr [esi], 0
        inc esi
        cmp byte ptr [eax], 22h
        ; Exact mapped bytes 75 46: jne 0x422b51
        __asm _emit 0x75
        __asm _emit 0x46
        inc eax
        ; Exact mapped bytes EB 43: jmp 0x422b51
        __asm _emit 0xeb
        __asm _emit 0x43
        inc dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x422b19
        __asm _emit 0x74
        __asm _emit 0x05
        mov dl, byte ptr [eax]
        mov byte ptr [esi], dl
        inc esi
        mov dl, byte ptr [eax]
        inc eax
        movzx ebx, dl
        test byte ptr [ebx + 4512c1h], 4
        ; Exact mapped bytes 74 0C: je 0x422b34
        __asm _emit 0x74
        __asm _emit 0x0c
        inc dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x422b33
        __asm _emit 0x74
        __asm _emit 0x05
        mov bl, byte ptr [eax]
        mov byte ptr [esi], bl
        inc esi
        inc eax
        cmp dl, 20h
        ; Exact mapped bytes 74 09: je 0x422b42
        __asm _emit 0x74
        __asm _emit 0x09
        test dl, dl
        ; Exact mapped bytes 74 09: je 0x422b46
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dl, 9
        ; Exact mapped bytes 75 CC: jne 0x422b0e
        __asm _emit 0x75
        __asm _emit 0xcc
        test dl, dl
        ; Exact mapped bytes 75 03: jne 0x422b49
        __asm _emit 0x75
        __asm _emit 0x03
        dec eax
        ; Exact mapped bytes EB 08: jmp 0x422b51
        __asm _emit 0xeb
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x422b51
        __asm _emit 0x74
        __asm _emit 0x04
        and byte ptr [esi - 1], 0
        and dword ptr [ebp + 18h], 0
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x422c3e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        cmp dl, 20h
        ; Exact mapped bytes 74 05: je 0x422b6a
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dl, 9
        ; Exact mapped bytes 75 03: jne 0x422b6d
        __asm _emit 0x75
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB F1: jmp 0x422b5e
        __asm _emit 0xeb
        __asm _emit 0xf1
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x422c3e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x422b82
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [edi], esi
        add edi, 4
        mov dword ptr [ebp + 0ch], edi
        mov edx, dword ptr [ebp + 14h]
        inc dword ptr [edx]
        mov dword ptr [ebp + 8], 1
        xor ebx, ebx
        cmp byte ptr [eax], 5ch
        ; Exact mapped bytes 75 04: jne 0x422b99
        __asm _emit 0x75
        __asm _emit 0x04
        inc eax
        inc ebx
        ; Exact mapped bytes EB F7: jmp 0x422b90
        __asm _emit 0xeb
        __asm _emit 0xf7
        cmp byte ptr [eax], 22h
        ; Exact mapped bytes 75 2C: jne 0x422bca
        __asm _emit 0x75
        __asm _emit 0x2c
        test bl, 1
        ; Exact mapped bytes 75 25: jne 0x422bc8
        __asm _emit 0x75
        __asm _emit 0x25
        xor edi, edi
        cmp dword ptr [ebp + 18h], edi
        ; Exact mapped bytes 74 0D: je 0x422bb7
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp byte ptr [eax + 1], 22h
        lea edx, [eax + 1]
        ; Exact mapped bytes 75 04: jne 0x422bb7
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, edx
        ; Exact mapped bytes EB 03: jmp 0x422bba
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp + 8], edi
        mov edi, dword ptr [ebp + 0ch]
        xor edx, edx
        cmp dword ptr [ebp + 18h], edx
        sete dl
        mov dword ptr [ebp + 18h], edx
        shr ebx, 1
        mov edx, ebx
        dec ebx
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x422bdf
        __asm _emit 0x74
        __asm _emit 0x0e
        inc ebx
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x422bda
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [esi], 5ch
        inc esi
        inc dword ptr [ecx]
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x422bd2
        __asm _emit 0x75
        __asm _emit 0xf3
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 4A: je 0x422c2f
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 0A: jne 0x422bf5
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dl, 20h
        ; Exact mapped bytes 74 3F: je 0x422c2f
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dl, 9
        ; Exact mapped bytes 74 3A: je 0x422c2f
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2E: je 0x422c29
        __asm _emit 0x74
        __asm _emit 0x2e
        test esi, esi
        ; Exact mapped bytes 74 19: je 0x422c18
        __asm _emit 0x74
        __asm _emit 0x19
        movzx ebx, dl
        test byte ptr [ebx + 4512c1h], 4
        ; Exact mapped bytes 74 06: je 0x422c11
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [esi], dl
        inc esi
        inc eax
        inc dword ptr [ecx]
        mov dl, byte ptr [eax]
        mov byte ptr [esi], dl
        inc esi
        ; Exact mapped bytes EB 0F: jmp 0x422c27
        __asm _emit 0xeb
        __asm _emit 0x0f
        movzx edx, dl
        test byte ptr [edx + 4512c1h], 4
        ; Exact mapped bytes 74 03: je 0x422c27
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        inc dword ptr [ecx]
        inc dword ptr [ecx]
        inc eax
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x422b87
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x422c37
        __asm _emit 0x74
        __asm _emit 0x04
        and byte ptr [esi], 0
        inc esi
        inc dword ptr [ecx]
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x422b55
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 74 03: je 0x422c45
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [edi], 0
        mov eax, dword ptr [ebp + 14h]
        pop edi
        pop esi
        pop ebx
        inc dword ptr [eax]
        pop ebp
        ret
    }
}
