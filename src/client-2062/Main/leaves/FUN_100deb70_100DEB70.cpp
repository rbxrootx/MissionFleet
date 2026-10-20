// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DEB70 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_100deb70_100DEB70() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov ecx, dword ptr [esp + 10h]
        push edi
        cmp cl, byte ptr [ebp + 0a5h]
        ; Exact mapped bytes 73 30: jae 0x100debb2
        __asm _emit 0x73
        __asm _emit 0x30
        xor edx, edx
        xor edi, edi
        mov dl, byte ptr [ebp + 0a4h]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 20: jle 0x100debb2
        __asm _emit 0x7e
        __asm _emit 0x20
        lea esi, [ebp + 0a8h]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0D: je 0x100debaa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ebx, ecx
        and ebx, 0ffh
        cmp edi, ebx
        ; Exact mapped bytes 74 12: je 0x100debbb
        __asm _emit 0x74
        __asm _emit 0x12
        inc edi
        inc eax
        add esi, 4
        cmp eax, edx
        ; Exact mapped bytes 7C E6: jl 0x100deb98
        __asm _emit 0x7c
        __asm _emit 0xe6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 2ach]
        push eax
        ; Exact mapped bytes E8 49 52 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 6C: mov ax, word ptr [eax + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 89 62 F4 FF: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        pop edi
        shr eax, 4
        pop esi
        pop ebp
        and eax, 0ffh
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
