// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DCBF0 .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_100dcbf0_100DCBF0() {
    __asm {
        mov al, byte ptr [ecx + 24h]
        push ebx
        push ebp
        push esi
        test al, 2
        push edi
        ; Exact mapped bytes 0F 84 E5 01 00 00: je 0x100dcde4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 68h]
        mov eax, 1
        test byte ptr [esi + 24h], al
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 34: je 0x100dcc46
        __asm _emit 0x74
        __asm _emit 0x34
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 14h]
        mov ebx, dword ptr [edx + 4]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 25: jl 0x100dcc46
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ebp, dword ptr [esi + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 1C: jge 0x100dcc46
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 18h]
        mov ebx, dword ptr [edx + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 0D: jl 0x100dcc46
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov esi, dword ptr [esi + 20h]
        add esi, edi
        cmp ebx, esi
        ; Exact mapped bytes 0F 8C A0 01 00 00: jl 0x100dcde6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 6ch]
        test byte ptr [esi + 24h], al
        ; Exact mapped bytes 74 34: je 0x100dcc82
        __asm _emit 0x74
        __asm _emit 0x34
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 14h]
        mov ebx, dword ptr [edx + 4]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 25: jl 0x100dcc82
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ebp, dword ptr [esi + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 1C: jge 0x100dcc82
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 18h]
        mov ebx, dword ptr [edx + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 0D: jl 0x100dcc82
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov esi, dword ptr [esi + 20h]
        add esi, edi
        cmp ebx, esi
        ; Exact mapped bytes 0F 8C 64 01 00 00: jl 0x100dcde6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 70h]
        test byte ptr [esi + 24h], al
        ; Exact mapped bytes 74 34: je 0x100dccbe
        __asm _emit 0x74
        __asm _emit 0x34
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 14h]
        mov ebx, dword ptr [edx + 4]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 25: jl 0x100dccbe
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ebp, dword ptr [esi + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 1C: jge 0x100dccbe
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 18h]
        mov ebx, dword ptr [edx + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 0D: jl 0x100dccbe
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov esi, dword ptr [esi + 20h]
        add esi, edi
        cmp ebx, esi
        ; Exact mapped bytes 0F 8C 28 01 00 00: jl 0x100dcde6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 74h]
        test byte ptr [esi + 24h], al
        ; Exact mapped bytes 74 34: je 0x100dccfa
        __asm _emit 0x74
        __asm _emit 0x34
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 14h]
        mov ebx, dword ptr [edx + 4]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 25: jl 0x100dccfa
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ebp, dword ptr [esi + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 1C: jge 0x100dccfa
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 18h]
        mov ebx, dword ptr [edx + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 0D: jl 0x100dccfa
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov esi, dword ptr [esi + 20h]
        add esi, edi
        cmp ebx, esi
        ; Exact mapped bytes 0F 8C EC 00 00 00: jl 0x100dcde6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 78h]
        test byte ptr [esi + 24h], al
        ; Exact mapped bytes 74 34: je 0x100dcd36
        __asm _emit 0x74
        __asm _emit 0x34
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 14h]
        mov ebx, dword ptr [edx + 4]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 25: jl 0x100dcd36
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ebp, dword ptr [esi + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 1C: jge 0x100dcd36
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 18h]
        mov ebx, dword ptr [edx + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 0D: jl 0x100dcd36
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov esi, dword ptr [esi + 20h]
        add esi, edi
        cmp ebx, esi
        ; Exact mapped bytes 0F 8C B0 00 00 00: jl 0x100dcde6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 7ch]
        test byte ptr [esi + 24h], al
        ; Exact mapped bytes 74 30: je 0x100dcd6e
        __asm _emit 0x74
        __asm _emit 0x30
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 14h]
        mov ebx, dword ptr [edx + 4]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 21: jl 0x100dcd6e
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ebp, dword ptr [esi + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 18: jge 0x100dcd6e
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 18h]
        mov ebx, dword ptr [edx + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 09: jl 0x100dcd6e
        __asm _emit 0x7c
        __asm _emit 0x09
        mov esi, dword ptr [esi + 20h]
        add esi, edi
        cmp ebx, esi
        ; Exact mapped bytes 7C 78: jl 0x100dcde6
        __asm _emit 0x7c
        __asm _emit 0x78
        mov esi, dword ptr [ecx + 80h]
        test byte ptr [esi + 24h], al
        ; Exact mapped bytes 74 30: je 0x100dcda9
        __asm _emit 0x74
        __asm _emit 0x30
        mov edi, dword ptr [esi + 4]
        mov ebp, dword ptr [esi + 14h]
        mov ebx, dword ptr [edx + 4]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 21: jl 0x100dcda9
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ebp, dword ptr [esi + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7D 18: jge 0x100dcda9
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edi, dword ptr [esi + 8]
        mov ebp, dword ptr [esi + 18h]
        mov ebx, dword ptr [edx + 8]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 7C 09: jl 0x100dcda9
        __asm _emit 0x7c
        __asm _emit 0x09
        mov esi, dword ptr [esi + 20h]
        add esi, edi
        cmp ebx, esi
        ; Exact mapped bytes 7C 3D: jl 0x100dcde6
        __asm _emit 0x7c
        __asm _emit 0x3d
        mov ecx, dword ptr [ecx + 84h]
        test byte ptr [ecx + 24h], al
        ; Exact mapped bytes 74 30: je 0x100dcde4
        __asm _emit 0x74
        __asm _emit 0x30
        mov esi, dword ptr [ecx + 4]
        mov ebx, dword ptr [ecx + 14h]
        mov edi, dword ptr [edx + 4]
        add ebx, esi
        cmp edi, ebx
        ; Exact mapped bytes 7C 21: jl 0x100dcde4
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ebx, dword ptr [ecx + 1ch]
        add ebx, esi
        cmp edi, ebx
        ; Exact mapped bytes 7D 18: jge 0x100dcde4
        __asm _emit 0x7d
        __asm _emit 0x18
        mov esi, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 18h]
        mov edx, dword ptr [edx + 8]
        add edi, esi
        cmp edx, edi
        ; Exact mapped bytes 7C 09: jl 0x100dcde4
        __asm _emit 0x7c
        __asm _emit 0x09
        mov ecx, dword ptr [ecx + 20h]
        add ecx, esi
        cmp edx, ecx
        ; Exact mapped bytes 7C 02: jl 0x100dcde6
        __asm _emit 0x7c
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
