// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986850 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58986850() {
    __asm {
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 B8 C3 F7 FF: jmp 0x58902c10
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
