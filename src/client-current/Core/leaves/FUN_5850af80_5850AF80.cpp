// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850AF80 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5850af80_5850AF80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 4D 0C: movsx ecx, byte ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x0c
        cmp eax, ecx
        ; Exact mapped bytes 75 09: jne 0x5850af99
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5850afa0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
