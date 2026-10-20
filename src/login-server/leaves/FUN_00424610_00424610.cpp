// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424610 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_00424610_00424610() {
    __asm {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr [ebp + 10h]
        or ecx, ecx
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x42470a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8D 05 44 FF 44 00: lea eax, [0x44ff44]
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 4E: jne 0x424681
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
        ; Exact mapped bytes 74 21: je 0x424665
        __asm _emit 0x74
        __asm _emit 0x21
        or al, al
        ; Exact mapped bytes 74 1D: je 0x424665
        __asm _emit 0x74
        __asm _emit 0x1d
        inc esi
        inc edi
        cmp ah, bh
        ; Exact mapped bytes 72 06: jb 0x424654
        __asm _emit 0x72
        __asm _emit 0x06
        cmp ah, bl
        ; Exact mapped bytes 77 02: ja 0x424654
        __asm _emit 0x77
        __asm _emit 0x02
        add ah, dh
        cmp al, bh
        ; Exact mapped bytes 72 06: jb 0x42465e
        __asm _emit 0x72
        __asm _emit 0x06
        cmp al, bl
        ; Exact mapped bytes 77 02: ja 0x42465e
        __asm _emit 0x77
        __asm _emit 0x02
        add al, dh
        cmp ah, al
        ; Exact mapped bytes 75 0D: jne 0x42466f
        __asm _emit 0x75
        __asm _emit 0x0d
        dec ecx
        ; Exact mapped bytes 75 D7: jne 0x42463c
        __asm _emit 0x75
        __asm _emit 0xd7
        xor ecx, ecx
        cmp ah, al
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x42470a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 0F 82 90 00 00 00: jb 0x42470a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x42470a
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F0 FF 05 48 10 45 00: lock inc dword ptr [0x451048]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 10 45 00 00: cmp dword ptr [0x451044], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 04: jg 0x424695
        __asm _emit 0x7f
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 19: jmp 0x4246ae
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes F0 FF 0D 48 10 45 00: lock dec dword ptr [0x451048]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov ebx, ecx
        push 13h
        ; Exact mapped bytes E8 65 DF FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp], 1
        mov ecx, ebx
        xor eax, eax
        xor ebx, ebx
        mov edi, edi
        mov al, byte ptr [esi]
        or eax, eax
        mov bl, byte ptr [edi]
        ; Exact mapped bytes 74 23: je 0x4246df
        __asm _emit 0x74
        __asm _emit 0x23
        or ebx, ebx
        ; Exact mapped bytes 74 1F: je 0x4246df
        __asm _emit 0x74
        __asm _emit 0x1f
        inc esi
        inc edi
        push ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 93 21 00 00: call 0x42685d
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        ; Exact mapped bytes E8 89 21 00 00: call 0x42685d
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop ecx
        cmp eax, ebx
        ; Exact mapped bytes 75 09: jne 0x4246e5
        __asm _emit 0x75
        __asm _emit 0x09
        dec ecx
        ; Exact mapped bytes 75 D5: jne 0x4246b4
        __asm _emit 0x75
        __asm _emit 0xd5
        xor ecx, ecx
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x4246ee
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 72 02: jb 0x4246ee
        __asm _emit 0x72
        __asm _emit 0x02
        neg ecx
        pop eax
        or eax, eax
        ; Exact mapped bytes 75 09: jne 0x4246fc
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes F0 FF 0D 48 10 45 00: lock dec dword ptr [0x451048]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x42470a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ebx, ecx
        push 13h
        ; Exact mapped bytes E8 66 DF FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
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
