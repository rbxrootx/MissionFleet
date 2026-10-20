// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A470 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898a470() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 F8 ED E3 FF: jmp 0x587c9270
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
