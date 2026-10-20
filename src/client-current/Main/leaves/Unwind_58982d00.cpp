// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58982D00 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58982d00() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 08 FF F7 FF: jmp 0x58902c10
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
