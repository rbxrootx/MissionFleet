// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888CA20 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888ca20() {
    __asm {
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E9 98 ED CD FF: jmp 0x5856b7c0
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xed
        __asm _emit 0xcd
        __asm _emit 0xff
    }
}
