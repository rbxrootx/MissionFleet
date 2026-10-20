// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424720 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_00424720_00424720() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push edi
        push ebx
        push esi
        mov dl, byte ptr [ecx]
        mov edi, dword ptr [esp + 10h]
        test dl, dl
        ; Exact mapped bytes 74 69: je 0x42479a
        __asm _emit 0x74
        __asm _emit 0x69
        mov dh, byte ptr [ecx + 1]
        test dh, dh
        ; Exact mapped bytes 74 4F: je 0x424787
        __asm _emit 0x74
        __asm _emit 0x4f
        mov esi, edi
        mov ecx, dword ptr [esp + 14h]
        mov al, byte ptr [edi]
        inc esi
        cmp al, dl
        ; Exact mapped bytes 74 15: je 0x42475a
        __asm _emit 0x74
        __asm _emit 0x15
        test al, al
        ; Exact mapped bytes 74 0B: je 0x424754
        __asm _emit 0x74
        __asm _emit 0x0b
        mov al, byte ptr [esi]
        inc esi
        cmp al, dl
        ; Exact mapped bytes 74 0A: je 0x42475a
        __asm _emit 0x74
        __asm _emit 0x0a
        test al, al
        ; Exact mapped bytes 75 F5: jne 0x424749
        __asm _emit 0x75
        __asm _emit 0xf5
        pop esi
        pop ebx
        pop edi
        xor eax, eax
        ret
        mov al, byte ptr [esi]
        inc esi
        cmp al, dh
        ; Exact mapped bytes 75 EB: jne 0x42474c
        __asm _emit 0x75
        __asm _emit 0xeb
        lea edi, [esi - 1]
        mov ah, byte ptr [ecx + 2]
        test ah, ah
        ; Exact mapped bytes 74 28: je 0x424793
        __asm _emit 0x74
        __asm _emit 0x28
        mov al, byte ptr [esi]
        add esi, 2
        cmp al, ah
        ; Exact mapped bytes 75 C4: jne 0x424738
        __asm _emit 0x75
        __asm _emit 0xc4
        mov al, byte ptr [ecx + 3]
        test al, al
        ; Exact mapped bytes 74 18: je 0x424793
        __asm _emit 0x74
        __asm _emit 0x18
        mov ah, byte ptr [esi - 1]
        add ecx, 2
        cmp al, ah
        ; Exact mapped bytes 74 DF: je 0x424764
        __asm _emit 0x74
        __asm _emit 0xdf
        ; Exact mapped bytes EB B1: jmp 0x424738
        __asm _emit 0xeb
        __asm _emit 0xb1
        xor eax, eax
        pop esi
        pop ebx
        pop edi
        mov al, dl
        ; Exact mapped bytes E9 23 00 00 00: jmp 0x4247b6
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi - 1]
        pop esi
        pop ebx
        pop edi
        ret
        mov eax, edi
        pop esi
        pop ebx
        pop edi
        ret
        lea eax, [edx - 1]
        pop ebx
        ret
    }
}
