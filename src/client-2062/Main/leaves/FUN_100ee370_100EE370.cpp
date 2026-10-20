// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE370 .. +0x20C bytes.
extern "C" __declspec(naked) void FUN_100ee370_100EE370() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov edi, 1
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 5ce4h], edi
        mov dword ptr [esi + 5eech], ebx
        mov dword ptr [esi + 5ef0h], ebx
        mov byte ptr [esi + 5ce8h], bl
        mov dword ptr [esi + 0ff8h], ebx
        mov dword ptr [esi + 0ffch], ebx
        mov eax, dword ptr [esi + 0e74h]
        cmp eax, ebx
        ; Exact mapped bytes 74 1F: je 0x100ee3cc
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov eax, 66666667h
        and ecx, 3ffh
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        lea eax, [edx + eax + 1]
        ; Exact mapped bytes EB 02: jmp 0x100ee3ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 1000h], eax
        mov edx, 0aaaaaaaah
        mov dword ptr [esi + 1030h], ebx
        mov dword ptr [esi + 1024h], edx
        mov dword ptr [esi + 1028h], edx
        ; Exact mapped bytes 66 89 9E 98 5C 00 00: mov word ptr [esi + 0x5c98], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 102ch], 0ffffffffh
        mov dword ptr [esi + 5c3ch], ebx
        mov dword ptr [esi + 5c48h], ebx
        ; Exact mapped bytes 66 89 9E 9A 5C 00 00: mov word ptr [esi + 0x5c9a], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 31ch], ebx
        mov dword ptr [esi + 0e9ch], edi
        mov eax, 40000000h
        mov dword ptr [esi + 5ca0h], ebx
        mov dword ptr [esi + 5c68h], eax
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 5c80h], eax
        lea eax, [esi + 100ch]
        xor ecx, ecx
        mov dword ptr [esi + 5c60h], ebx
        mov dword ptr [esi + 5c5ch], ebx
        mov dword ptr [esi + 5c4ch], ebx
        mov byte ptr [esi + 5c8ch], bl
        mov byte ptr [esi + 5c8dh], bl
        mov dword ptr [esi + 5c9ch], ebx
        mov dword ptr [esi + 5c64h], ebx
        mov dword ptr [esi + 5c6ch], ebx
        mov dword ptr [esi + 5c88h], ebx
        mov dword ptr [esi + 5c84h], ebx
        mov dword ptr [esi + 5c74h], ebx
        mov dword ptr [esi + 5c78h], ebx
        mov dword ptr [esi + 5c90h], ebx
        mov dword ptr [esi + 5c7ch], ebx
        mov dword ptr [esi + 5c70h], 40000h
        mov dword ptr [esi + 5c94h], ebx
        mov dword ptr [esi + 5c34h], 4
        mov dword ptr [esi + 5c38h], ebx
        mov dword ptr [eax], ecx
        lea edi, [esi + 1068h]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov ecx, 80h
        xor eax, eax
        mov dword ptr [esi + 1064h], ebx
        mov dword ptr [esi + 105ch], ebx
        mov dword ptr [esi + 1060h], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [esi + 5c20h]
        xor ecx, ecx
        lea edi, [esi + 3d00h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        lea eax, [esi + 5c10h]
        mov dword ptr [esi + 5c10h], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov ecx, 60h
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 1b0h
        lea edi, [esi + 3ec4h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea edi, [esi + 158h]
        mov ecx, 20h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 8B 8E 2C 03 00 00: mov cx, word ptr [esi + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        ; Exact mapped bytes 66 89 8E A4 0E 00 00: mov word ptr [esi + 0xea4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 86 30 03 00 00: movzx ax, byte ptr [esi + 0x330]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 A6 0E 00 00: mov word ptr [esi + 0xea6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0ea8h], edx
        mov dword ptr [esi + 0each], edx
        mov dword ptr [esi + 0eb0h], edx
        mov dword ptr [esi + 0eb4h], edx
        mov dword ptr [esi + 0eb8h], edx
        mov dword ptr [esi + 0ebch], edx
        mov dword ptr [esi + 0ec8h], edx
        mov dword ptr [esi + 0ecch], ebx
        pop esi
        pop ebx
        ret
    }
}
