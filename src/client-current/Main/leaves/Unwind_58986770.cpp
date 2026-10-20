// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986770 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58986770() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 08 81 DE FF: jmp 0x5876e880
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
    }
}
