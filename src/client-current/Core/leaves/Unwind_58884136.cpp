// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58884136 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58884136() {
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
        ; Exact mapped bytes E9 EC 91 D0 FF: jmp 0x5858d330
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0xff
    }
}
