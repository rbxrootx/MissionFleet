// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0E80 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_100a0e80_100A0E80() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [eax + 4]
        mov ebx, ecx
        mov ecx, dword ptr [edi + 31ch]
        mov eax, dword ptr [ebx + 98h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x100a0f8a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 0a8h]
        xor eax, eax
        ; Exact mapped bytes 66 39 83 A4 00 00 00: cmp word ptr [ebx + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        sete al
        ; Exact mapped bytes 66 89 83 A4 00 00 00: mov word ptr [ebx + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebx + 0b4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [edi + 0e74h]
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        and edx, 7c00h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 86 A0 00 00 00: jbe 0x100a0f8a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, ebp
        and esi, 0ffffh
        mov eax, dword ptr [edi + esi*4 + 0cf4h]
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x100a0f6f
        __asm _emit 0x74
        __asm _emit 0x71
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 66: jne 0x100a0f6f
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, dword ptr [ebx + 98h]
        xor eax, eax
        mov al, byte ptr [esi + edi + 1d8h]
        cmp eax, ecx
        ; Exact mapped bytes 75 53: jne 0x100a0f6f
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [ebx + 9ch]
        xor ecx, ecx
        mov cl, byte ptr [esi + edi + 1f8h]
        cmp ecx, eax
        ; Exact mapped bytes 75 40: jne 0x100a0f6f
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 A4 00 00 00: mov dx, word ptr [ebx + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 20b00h]
        push edx
        mov ecx, dword ptr [ecx + esi*4 + 8]
        ; Exact mapped bytes E8 03 3C FA FF: call 0x10044b50
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [edi + esi*4 + 21ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 A4 00 00 00: mov dx, word ptr [ebx + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 ED 3B FA FF: call 0x10044b50
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [edi + esi*4 + 21ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        mov ecx, dword ptr [edi + 0e74h]
        inc ebp
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        shr edx, 0ah
        and edx, 1fh
        ; Exact mapped bytes 66 3B EA: cmp bp, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xea
        ; Exact mapped bytes 0F 82 62 FF FF FF: jb 0x100a0eeb
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop edi
        pop ebp
        pop ebx
        ret
    }
}
