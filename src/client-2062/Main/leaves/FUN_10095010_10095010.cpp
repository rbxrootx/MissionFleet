// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095010 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_10095010_10095010() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebp, ebp
        xor ebx, ebx
        mov ecx, dword ptr [edi + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 30: je 0x10095051
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [ecx + 50h]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        inc ebx
        cmp esi, ebp
        mov ecx, esi
        ; Exact mapped bytes 74 0B: je 0x1009503c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 0F BF 97 DC 00 00 00: movsx edx, word ptr [edi + 0xdc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, edx
        ; Exact mapped bytes 75 E1: jne 0x1009501d
        __asm _emit 0x75
        __asm _emit 0xe1
        mov dword ptr [edi + 0f8h], ebp
        mov dword ptr [edi + 68h], ebp
        mov dword ptr [edi + 64h], ebp
        ; Exact mapped bytes 66 89 AF DC 00 00 00: mov word ptr [edi + 0xdc], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x1009501d
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov dword ptr [edi + 68h], ebp
        mov dword ptr [edi + 64h], ebp
        ; Exact mapped bytes 66 89 AF DC 00 00 00: mov word ptr [edi + 0xdc], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
