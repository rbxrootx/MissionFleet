// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986B60 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58986b60() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 58 CB DC FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xcb
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
