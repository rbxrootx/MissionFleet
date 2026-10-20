// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B930 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b930() {
    __asm {
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 78 9F F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x9f
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
