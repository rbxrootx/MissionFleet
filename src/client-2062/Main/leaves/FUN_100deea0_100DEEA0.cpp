// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DEEA0 .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_100deea0_100DEEA0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov edx, 2
        mov esi, 0dh
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        lea ebp, [edi + 2ach]
        and eax, 0e1ffh
        mov dword ptr [edi + 58h], 100h
        or eax, 107h
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        mov eax, ebp
        mov ecx, dword ptr [eax]
        add eax, 4
        mov dword ptr [ecx + 5ch], esi
        mov ecx, dword ptr [eax - 4]
        mov ebx, dword ptr [ecx + 18h]
        add ebx, 5bh
        dec edx
        mov dword ptr [ecx + 20h], ebx
        ; Exact mapped bytes 75 E9: jne 0x100deed1
        __asm _emit 0x75
        __asm _emit 0xe9
        lea eax, [edi + 1a8h]
        mov ecx, 40h
        mov edx, dword ptr [eax - 100h]
        mov dword ptr [eax], edx
        add eax, 4
        dec ecx
        ; Exact mapped bytes 75 F2: jne 0x100deef3
        __asm _emit 0x75
        __asm _emit 0xf2
        mov al, byte ptr [edi + 0a6h]
        mov ecx, dword ptr [ebp]
        mov byte ptr [edi + 0a5h], al
        ; Exact mapped bytes E8 2B 4F 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov esi, eax
        ; Exact mapped bytes E8 21 4F 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        add eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7D 50: jge 0x100def76
        __asm _emit 0x7d
        __asm _emit 0x50
        lea ebx, [edi + esi*4 + 1a8h]
        mov ecx, dword ptr [ebp]
        cmp esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7D 3E: jge 0x100def76
        __asm _emit 0x7d
        __asm _emit 0x3e
        cmp dword ptr [ebx], 0
        ; Exact mapped bytes 74 13: je 0x100def50
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes E8 FE 4E 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, esi
        sub ecx, eax
        mov eax, dword ptr [edi + ecx*4 + 78h]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes EB 13: jmp 0x100def63
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes E8 EB 4E 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, esi
        sub edx, eax
        mov eax, dword ptr [edi + edx*4 + 78h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        inc esi
        add ebx, 4
        ; Exact mapped bytes E8 D1 4E 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        add eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7C B7: jl 0x100def2d
        __asm _emit 0x7c
        __asm _emit 0xb7
        mov ecx, edi
        ; Exact mapped bytes E8 43 FA FF FF: call 0x100de9c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 2b4h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 04: je 0x100def92
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 2
        ; Exact mapped bytes 75 05: jne 0x100def97
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov esi, dword ptr [edi + 2b4h]
        mov ecx, edi
        push esi
        ; Exact mapped bytes E8 5B FF 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F3 FF 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 28h
        ; Exact mapped bytes 7E 12: jle 0x100defcd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100defcd
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x100defcf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [edi + 2a8h], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
