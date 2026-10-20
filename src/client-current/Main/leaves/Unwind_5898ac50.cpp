// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AC50 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898ac50() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 E8 CE F7 FF: jmp 0x58907b40
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
