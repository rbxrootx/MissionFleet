// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589891E0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589891e0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 48 A1 DA FF: jmp 0x58733330
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xa1
        __asm _emit 0xda
        __asm _emit 0xff
    }
}
