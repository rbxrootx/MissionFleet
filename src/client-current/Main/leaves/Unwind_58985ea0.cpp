// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58985EA0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58985ea0() {
    __asm {
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 A8 00 E3 FF: jmp 0x587b5f50
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
