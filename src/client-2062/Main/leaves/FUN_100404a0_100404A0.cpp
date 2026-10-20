// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100404A0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_100404a0_100404A0() {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 8]
        mov ebx, 20h
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x100404e6
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ecx + 14ch]
        mov ebp, 3
        inc eax
        cdq
        idiv ebp
        test edx, edx
        mov dword ptr [ecx + 14ch], edx
        ; Exact mapped bytes 74 1C: je 0x100404e6
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp edx, 1
        ; Exact mapped bytes 75 08: jne 0x100404d7
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [ecx + 148h], edx
        ; Exact mapped bytes EB 0F: jmp 0x100404e6
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp edx, 2
        ; Exact mapped bytes 75 0A: jne 0x100404e6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ecx + 148h], 0
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 BF: jne 0x100404ab
        __asm _emit 0x75
        __asm _emit 0xbf
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 101aa408h
        push 800h
        ; Exact mapped bytes E8 2F BC 02 00: call 0x1006c130
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
