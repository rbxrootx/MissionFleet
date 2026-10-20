// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589889F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589889f0() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 68 A3 F7 FF: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
