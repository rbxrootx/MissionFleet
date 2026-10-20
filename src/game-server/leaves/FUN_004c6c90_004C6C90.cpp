// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6C90 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_004c6c90_004C6C90() {
    __asm {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr [ebp + 10h]
        or ecx, ecx
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x4c6d8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8D 05 0C F0 5D 00: lea eax, [0x5df00c]
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 4E: jne 0x4c6d01
        __asm _emit 0x75
        __asm _emit 0x4e
        mov bh, 41h
        mov bl, 5ah
        mov dh, 20h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ah, byte ptr [esi]
        or ah, ah
        mov al, byte ptr [edi]
        ; Exact mapped bytes 74 21: je 0x4c6ce5
        __asm _emit 0x74
        __asm _emit 0x21
        or al, al
        ; Exact mapped bytes 74 1D: je 0x4c6ce5
        __asm _emit 0x74
        __asm _emit 0x1d
        inc esi
        inc edi
        cmp ah, bh
        ; Exact mapped bytes 72 06: jb 0x4c6cd4
        __asm _emit 0x72
        __asm _emit 0x06
        cmp ah, bl
        ; Exact mapped bytes 77 02: ja 0x4c6cd4
        __asm _emit 0x77
        __asm _emit 0x02
        add ah, dh
        cmp al, bh
        ; Exact mapped bytes 72 06: jb 0x4c6cde
        __asm _emit 0x72
        __asm _emit 0x06
        cmp al, bl
        ; Exact mapped bytes 77 02: ja 0x4c6cde
        __asm _emit 0x77
        __asm _emit 0x02
        add al, dh
        cmp ah, al
        ; Exact mapped bytes 75 0D: jne 0x4c6cef
        __asm _emit 0x75
        __asm _emit 0x0d
        dec ecx
        ; Exact mapped bytes 75 D7: jne 0x4c6cbc
        __asm _emit 0x75
        __asm _emit 0xd7
        xor ecx, ecx
        cmp ah, al
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x4c6d8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 0F 82 90 00 00 00: jb 0x4c6d8a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x4c6d8a
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F0 FF 05 10 F1 5D 00: lock inc dword ptr [0x5df110]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C F1 5D 00 00: cmp dword ptr [0x5df10c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 04: jg 0x4c6d15
        __asm _emit 0x7f
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 19: jmp 0x4c6d2e
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes F0 FF 0D 10 F1 5D 00: lock dec dword ptr [0x5df110]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ebx, ecx
        push 13h
        ; Exact mapped bytes E8 CB E4 FE FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esp], 1
        mov ecx, ebx
        xor eax, eax
        xor ebx, ebx
        mov edi, edi
        mov al, byte ptr [esi]
        or eax, eax
        mov bl, byte ptr [edi]
        ; Exact mapped bytes 74 23: je 0x4c6d5f
        __asm _emit 0x74
        __asm _emit 0x23
        or ebx, ebx
        ; Exact mapped bytes 74 1F: je 0x4c6d5f
        __asm _emit 0x74
        __asm _emit 0x1f
        inc esi
        inc edi
        push ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 56 81 FF FF: call 0x4beea0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        add esp, 4
        ; Exact mapped bytes E8 4C 81 FF FF: call 0x4beea0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop ecx
        cmp eax, ebx
        ; Exact mapped bytes 75 09: jne 0x4c6d65
        __asm _emit 0x75
        __asm _emit 0x09
        dec ecx
        ; Exact mapped bytes 75 D5: jne 0x4c6d34
        __asm _emit 0x75
        __asm _emit 0xd5
        xor ecx, ecx
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x4c6d6e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 72 02: jb 0x4c6d6e
        __asm _emit 0x72
        __asm _emit 0x02
        neg ecx
        pop eax
        or eax, eax
        ; Exact mapped bytes 75 09: jne 0x4c6d7c
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes F0 FF 0D 10 F1 5D 00: lock dec dword ptr [0x5df110]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x4c6d8a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ebx, ecx
        push 13h
        ; Exact mapped bytes E8 0B E5 FE FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, ebx
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave
        ret
    }
}
