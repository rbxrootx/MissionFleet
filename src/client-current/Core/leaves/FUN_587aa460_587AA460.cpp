// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA460 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_587aa460_587AA460() {
    __asm {
        ; Exact mapped bytes 8B 15 98 9C 96 58: mov edx, dword ptr [0x58969c98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, eax
        push esi
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x587aa483
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 90 9C 96 58: mov ecx, dword ptr [0x58969c90]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov esi, dword ptr [esp + 8]
        cmp esi, dword ptr [ecx]
        ; Exact mapped bytes 74 0B: je 0x587aa486
        __asm _emit 0x74
        __asm _emit 0x0b
        inc eax
        add ecx, 2ch
        cmp eax, edx
        ; Exact mapped bytes 72 F4: jb 0x587aa477
        __asm _emit 0x72
        __asm _emit 0xf4
        or eax, 0ffffffffh
        pop esi
        ret
    }
}
