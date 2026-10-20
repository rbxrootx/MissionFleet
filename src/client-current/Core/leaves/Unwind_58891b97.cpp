// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891B97 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891b97() {
    __asm {
        ; Exact mapped bytes 8D 4D AC: lea ecx, [ebp - 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E9 B1 72 F0 FF: jmp 0x58798e50
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x72
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
