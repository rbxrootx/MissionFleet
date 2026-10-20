// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D779 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0042d779_0042D779() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 4]
        test esi, esi
        push edi
        ; Exact mapped bytes 74 23: je 0x42d7a5
        __asm _emit 0x74
        __asm _emit 0x23
        mov edi, dword ptr [esp + 0ch]
        xor edx, edx
        mov eax, edi
        shr eax, 4
        div dword ptr [ecx + 8]
        mov edx, dword ptr [esi + edx*4]
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x42d7a5
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [edx + 4], edi
        ; Exact mapped bytes 74 04: je 0x42d7a0
        __asm _emit 0x74
        __asm _emit 0x04
        mov edx, dword ptr [edx]
        ; Exact mapped bytes EB F3: jmp 0x42d793
        __asm _emit 0xeb
        __asm _emit 0xf3
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes EB 02: jmp 0x42d7a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
