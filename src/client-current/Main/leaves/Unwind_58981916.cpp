// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981916 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58981916() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 84 00 00 00: add ecx, 0x84
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3C AD E4 FF: jmp 0x587cc660
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
