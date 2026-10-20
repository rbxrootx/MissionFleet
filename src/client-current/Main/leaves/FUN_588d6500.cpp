// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D6500 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_588d6500() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
