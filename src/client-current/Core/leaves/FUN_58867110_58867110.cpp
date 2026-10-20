// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867110 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_58867110_58867110() {
    __asm {
        mov ecx, dword ptr [esp + 0ch]
        push edi
        test ecx, ecx
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x588671af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push ebx
        mov ebx, ecx
        mov esi, dword ptr [esp + 14h]
        test esi, 3
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 75 0B: jne 0x5886713c
        __asm _emit 0x75
        __asm _emit 0x0b
        shr ecx, 2
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x588671bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x58867163
        __asm _emit 0xeb
        __asm _emit 0x27
        mov al, byte ptr [esi]
        add esi, 1
        mov byte ptr [edi], al
        add edi, 1
        sub ecx, 1
        ; Exact mapped bytes 74 2B: je 0x58867176
        __asm _emit 0x74
        __asm _emit 0x2b
        test al, al
        ; Exact mapped bytes 74 2F: je 0x5886717e
        __asm _emit 0x74
        __asm _emit 0x2f
        test esi, 3
        ; Exact mapped bytes 75 E5: jne 0x5886713c
        __asm _emit 0x75
        __asm _emit 0xe5
        mov ebx, ecx
        shr ecx, 2
        ; Exact mapped bytes 75 61: jne 0x588671bf
        __asm _emit 0x75
        __asm _emit 0x61
        and ebx, 3
        ; Exact mapped bytes 74 13: je 0x58867176
        __asm _emit 0x74
        __asm _emit 0x13
        mov al, byte ptr [esi]
        add esi, 1
        mov byte ptr [edi], al
        add edi, 1
        test al, al
        ; Exact mapped bytes 74 37: je 0x588671a8
        __asm _emit 0x74
        __asm _emit 0x37
        sub ebx, 1
        ; Exact mapped bytes 75 ED: jne 0x58867163
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esp + 10h]
        pop ebx
        pop esi
        pop edi
        ret
        test edi, 3
        ; Exact mapped bytes 74 16: je 0x5886719c
        __asm _emit 0x74
        __asm _emit 0x16
        mov byte ptr [edi], al
        add edi, 1
        sub ecx, 1
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x5886722c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, 3
        ; Exact mapped bytes 75 EA: jne 0x58867186
        __asm _emit 0x75
        __asm _emit 0xea
        mov ebx, ecx
        shr ecx, 2
        ; Exact mapped bytes 75 74: jne 0x58867217
        __asm _emit 0x75
        __asm _emit 0x74
        mov byte ptr [edi], al
        add edi, 1
        sub ebx, 1
        ; Exact mapped bytes 75 F6: jne 0x588671a3
        __asm _emit 0x75
        __asm _emit 0xf6
        pop ebx
        pop esi
        mov eax, dword ptr [esp + 8]
        pop edi
        ret
        mov dword ptr [edi], edx
        add edi, 4
        sub ecx, 1
        ; Exact mapped bytes 74 9F: je 0x5886715e
        __asm _emit 0x74
        __asm _emit 0x9f
        mov edx, 7efefeffh
        mov eax, dword ptr [esi]
        add edx, eax
        xor eax, 0ffffffffh
        xor eax, edx
        mov edx, dword ptr [esi]
        add esi, 4
        test eax, 81010100h
        ; Exact mapped bytes 74 DC: je 0x588671b5
        __asm _emit 0x74
        __asm _emit 0xdc
        test dl, dl
        ; Exact mapped bytes 74 2C: je 0x58867209
        __asm _emit 0x74
        __asm _emit 0x2c
        test dh, dh
        ; Exact mapped bytes 74 1E: je 0x588671ff
        __asm _emit 0x74
        __asm _emit 0x1e
        test edx, 0ff0000h
        ; Exact mapped bytes 74 0C: je 0x588671f5
        __asm _emit 0x74
        __asm _emit 0x0c
        test edx, 0ff000000h
        ; Exact mapped bytes 75 C4: jne 0x588671b5
        __asm _emit 0x75
        __asm _emit 0xc4
        mov dword ptr [edi], edx
        ; Exact mapped bytes EB 18: jmp 0x5886720d
        __asm _emit 0xeb
        __asm _emit 0x18
        and edx, 0ffffh
        mov dword ptr [edi], edx
        ; Exact mapped bytes EB 0E: jmp 0x5886720d
        __asm _emit 0xeb
        __asm _emit 0x0e
        and edx, 0ffh
        mov dword ptr [edi], edx
        ; Exact mapped bytes EB 04: jmp 0x5886720d
        __asm _emit 0xeb
        __asm _emit 0x04
        xor edx, edx
        mov dword ptr [edi], edx
        add edi, 4
        xor eax, eax
        sub ecx, 1
        ; Exact mapped bytes 74 0C: je 0x58867223
        __asm _emit 0x74
        __asm _emit 0x0c
        xor eax, eax
        mov dword ptr [edi], eax
        add edi, 4
        sub ecx, 1
        ; Exact mapped bytes 75 F6: jne 0x58867219
        __asm _emit 0x75
        __asm _emit 0xf6
        and ebx, 3
        ; Exact mapped bytes 0F 85 77 FF FF FF: jne 0x588671a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        pop ebx
        pop esi
        pop edi
        ret
    }
}
