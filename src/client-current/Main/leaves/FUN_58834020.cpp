// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834020 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58834020() {
    __asm {
        ; Exact mapped bytes 8B 81 F0 01 00 00: mov eax, dword ptr [ecx + 0x1f0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
