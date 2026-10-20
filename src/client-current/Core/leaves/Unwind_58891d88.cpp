// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891D88 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891d88() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 F0 71 F0 FF: jmp 0x58798f80
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x71
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
