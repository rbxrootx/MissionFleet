// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588622E0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_588622e0_588622E0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, eax
        and ecx, 7ff00000h
        cmp ecx, 7ff00000h
        ; Exact mapped bytes 75 26: jne 0x5886231e
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, eax
        and ecx, 7fffffffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x5886230e
        __asm _emit 0x75
        __asm _emit 0x08
        cmp ecx, 7ff00000h
        ; Exact mapped bytes 74 10: je 0x5886231e
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, eax
        and ecx, 7ff80000h
        cmp ecx, 7ff80000h
        ; Exact mapped bytes 75 0C: jne 0x5886232a
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 7ff80000h
        cmp eax, 7ff80000h
        ; Exact mapped bytes 75 07: jne 0x58862331
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
