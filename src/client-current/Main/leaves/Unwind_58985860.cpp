// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58985860 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58985860() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 D8 25 ED FF: jmp 0x58857e40
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
    }
}
