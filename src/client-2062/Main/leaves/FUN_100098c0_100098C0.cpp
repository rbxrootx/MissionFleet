// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100098C0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_100098c0_100098C0() {
    __asm {
        ; Exact mapped bytes 8B 81 64 04 00 00: mov eax, dword ptr [ecx + 0x464]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
