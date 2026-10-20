// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58809850 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58809850() {
    __asm {
        ; Exact mapped bytes 8B 81 B4 03 00 00: mov eax, dword ptr [ecx + 0x3b4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
