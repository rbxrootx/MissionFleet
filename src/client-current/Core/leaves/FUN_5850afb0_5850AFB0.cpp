// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850AFB0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5850afb0_5850AFB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 09: jne 0x5850afc5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5850afcc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
