// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981470 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58981470() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 B8 38 E4 FF: jmp 0x587c4d30
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
