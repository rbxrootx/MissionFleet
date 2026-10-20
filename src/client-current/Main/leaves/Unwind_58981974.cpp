// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981974 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58981974() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 94 00 00 00: add ecx, 0x94
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EE AC E4 FF: jmp 0x587cc670
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xac
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
