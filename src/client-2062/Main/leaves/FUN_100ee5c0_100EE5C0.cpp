// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE5C0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_100ee5c0_100EE5C0() {
    __asm {
        ; Exact mapped bytes 8B 81 68 5C 00 00: mov eax, dword ptr [ecx + 0x5c68]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
