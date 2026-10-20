// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F410 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888f410() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 58 5A EB FF: jmp 0x58744e70
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xff
    }
}
