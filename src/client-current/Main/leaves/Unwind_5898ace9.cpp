// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898ACE9 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898ace9() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 6F 9A E3 FF: jmp 0x587c4760
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
