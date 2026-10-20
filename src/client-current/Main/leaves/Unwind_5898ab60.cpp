// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AB60 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898ab60() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 08 20 FE FF: jmp 0x5896cb70
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
