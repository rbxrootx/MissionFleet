// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892040 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892040() {
    __asm {
        ; Exact mapped bytes 8B 4D DC: mov ecx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 A8 7B C1 FF: jmp 0x584a9bf0
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x7b
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
