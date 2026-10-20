// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588045B0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588045b0() {
    __asm {
        xor eax, eax
        mov dword ptr [ecx + 2b0h], eax
        mov dword ptr [ecx + 2b4h], 0fah
        cmp dword ptr [ecx + 2f8h], eax
        ; Exact mapped bytes 75 06: jne 0x588045d0
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 2fch], eax
        ret
    }
}
