// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896BF70 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_5896bf70() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
