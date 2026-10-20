// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58982BF0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58982bf0() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 18 00 F8 FF: jmp 0x58902c10
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
