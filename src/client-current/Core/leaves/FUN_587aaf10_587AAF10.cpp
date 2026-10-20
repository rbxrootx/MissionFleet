// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AAF10 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_587aaf10_587AAF10() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x587aaf25
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 90h
        ; Exact mapped bytes 74 05: je 0x587aaf25
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 0cch
        ; Exact mapped bytes 75 1E: jne 0x587aaf43
        __asm _emit 0x75
        __asm _emit 0x1e
        mov esi, dword ptr [esp + 0ch]
        mov eax, 1
        cmp esi, eax
        ; Exact mapped bytes 76 0A: jbe 0x587aaf3c
        __asm _emit 0x76
        __asm _emit 0x0a
        cmp byte ptr [edx + eax], cl
        ; Exact mapped bytes 75 0C: jne 0x587aaf43
        __asm _emit 0x75
        __asm _emit 0x0c
        inc eax
        cmp eax, esi
        ; Exact mapped bytes 72 F6: jb 0x587aaf32
        __asm _emit 0x72
        __asm _emit 0xf6
        mov eax, 1
        pop esi
        ret
        xor eax, eax
        pop esi
        ret
    }
}
