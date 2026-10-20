// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785120 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_58785120() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ach]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x587851ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A9 15 15 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x15
        __asm _emit 0x15
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x587851ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esi + 0ach]
        sub eax, dword ptr [edi + 4]
        cdq
        mov ecx, eax
        mov eax, dword ptr [esi + 8]
        sub eax, dword ptr [edi + 8]
        xor ecx, edx
        sub ecx, edx
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, eax
        imul edx, eax
        imul edx, edx, 75h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes DB 44 24 08: fild dword ptr [esp + 8]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 02 7B 1F 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x7b
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes E8 0D 7B 1F 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7b
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        imul ecx, ecx, 5fh
        mov edi, eax
        mov eax, 51eb851fh
        mul ecx
        shr edx, 5
        cmp edi, edx
        ; Exact mapped bytes 73 33: jae 0x587851df
        __asm _emit 0x73
        __asm _emit 0x33
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 3B 56 7C: cmp dx, word ptr [esi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x7c
        ; Exact mapped bytes 73 1A: jae 0x587851d0
        __asm _emit 0x73
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx]
        ; Exact mapped bytes 72 10: jb 0x587851d4
        __asm _emit 0x72
        __asm _emit 0x10
        movzx edx, word ptr [esi + 7ch]
        inc eax
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 7C F0: jl 0x587851c0
        __asm _emit 0x7c
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ecx
        ret
        pop edi
        ; Exact mapped bytes 66 89 86 B8 00 00 00: mov word ptr [esi + 0xb8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ecx
        ret
        pop edi
        mov dword ptr [esi + 0b4h], 0
        pop esi
        pop ecx
        ret
        mov dword ptr [esi + 0b4h], 0
        pop esi
        pop ecx
        ret
    }
}
