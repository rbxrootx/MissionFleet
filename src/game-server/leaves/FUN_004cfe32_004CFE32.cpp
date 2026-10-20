// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFE32 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_004cfe32_004CFE32() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4cfe3f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 13: jmp 0x4cfe52
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 60 23 5E 00: call dword ptr [0x5e2360]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
