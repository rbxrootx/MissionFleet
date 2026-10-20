// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58988120 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58988120() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 28 DE E2 FF: jmp 0x587b5f50
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xde
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
