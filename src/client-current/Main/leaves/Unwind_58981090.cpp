// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981090 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58981090() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 A8 6A F8 FF: jmp 0x58907b40
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
