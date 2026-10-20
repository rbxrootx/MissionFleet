// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588803C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588803c0() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 B6 00 FB FF: jmp 0x5883047e
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
    }
}
