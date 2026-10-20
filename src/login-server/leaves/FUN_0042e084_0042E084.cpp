// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E084 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0042e084_0042E084() {
    __asm {
        push ebx
        xor ebx, ebx
        cmp dword ptr [esp + 10h], ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        ; Exact mapped bytes 75 08: jne 0x42e09a
        __asm _emit 0x75
        __asm _emit 0x08
        cmp esi, ebx
        ; Exact mapped bytes 74 04: je 0x42e09a
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1D: jmp 0x42e0b7
        __asm _emit 0xeb
        __asm _emit 0x1d
        push ebx
        push ebx
        push dword ptr [esp + 1ch]
        push esi
        push -1
        push dword ptr [esp + 24h]
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 88 C2 43 00: call dword ptr [0x43c288]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 7E 04: jle 0x42e0b7
        __asm _emit 0x7e
        __asm _emit 0x04
        mov byte ptr [eax + esi - 1], bl
        pop esi
        pop ebx
        ret
    }
}
