// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F550 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888f550() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 18 59 EB FF: jmp 0x58744e70
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x59
        __asm _emit 0xeb
        __asm _emit 0xff
    }
}
