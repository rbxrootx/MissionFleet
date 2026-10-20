// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BA460 .. +0x80 bytes.
extern "C" __declspec(naked) void _strstr_004BA460() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push edi
        push ebx
        push esi
        mov dl, byte ptr [ecx]
        mov edi, dword ptr [esp + 10h]
        test dl, dl
        ; Exact mapped bytes 74 69: je 0x4ba4da
        __asm _emit 0x74
        __asm _emit 0x69
        mov dh, byte ptr [ecx + 1]
        test dh, dh
        ; Exact mapped bytes 74 4F: je 0x4ba4c7
        __asm _emit 0x74
        __asm _emit 0x4f
        mov esi, edi
        mov ecx, dword ptr [esp + 14h]
        mov al, byte ptr [edi]
        inc esi
        cmp al, dl
        ; Exact mapped bytes 74 15: je 0x4ba49a
        __asm _emit 0x74
        __asm _emit 0x15
        test al, al
        ; Exact mapped bytes 74 0B: je 0x4ba494
        __asm _emit 0x74
        __asm _emit 0x0b
        mov al, byte ptr [esi]
        inc esi
        cmp al, dl
        ; Exact mapped bytes 74 0A: je 0x4ba49a
        __asm _emit 0x74
        __asm _emit 0x0a
        test al, al
        ; Exact mapped bytes 75 F5: jne 0x4ba489
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
        ; Exact mapped bytes 75 EB: jne 0x4ba48c
        __asm _emit 0x75
        __asm _emit 0xeb
        lea edi, [esi - 1]
        mov ah, byte ptr [ecx + 2]
        test ah, ah
        ; Exact mapped bytes 74 28: je 0x4ba4d3
        __asm _emit 0x74
        __asm _emit 0x28
        mov al, byte ptr [esi]
        add esi, 2
        cmp al, ah
        ; Exact mapped bytes 75 C4: jne 0x4ba478
        __asm _emit 0x75
        __asm _emit 0xc4
        mov al, byte ptr [ecx + 3]
        test al, al
        ; Exact mapped bytes 74 18: je 0x4ba4d3
        __asm _emit 0x74
        __asm _emit 0x18
        mov ah, byte ptr [esi - 1]
        add ecx, 2
        cmp al, ah
        ; Exact mapped bytes 74 DF: je 0x4ba4a4
        __asm _emit 0x74
        __asm _emit 0xdf
        ; Exact mapped bytes EB B1: jmp 0x4ba478
        __asm _emit 0xeb
        __asm _emit 0xb1
        xor eax, eax
        pop esi
        pop ebx
        pop edi
        mov al, dl
        ; Exact mapped bytes E9 03 FB FF FF: jmp 0x4b9fd6
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
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
    }
}
