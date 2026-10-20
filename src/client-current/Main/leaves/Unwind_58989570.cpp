// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989570 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58989570() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 D8 A6 E3 FF: jmp 0x587c3c50
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xa6
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
