// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987E90 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58987e90() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 48 B5 F7 FF: jmp 0x589033e0
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xb5
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
