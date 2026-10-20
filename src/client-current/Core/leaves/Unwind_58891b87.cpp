// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891B87 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891b87() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 A1 73 F0 FF: jmp 0x58798f30
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
