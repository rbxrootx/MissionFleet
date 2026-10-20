// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58982BB8 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58982bb8() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 4C 02 00 00: add ecx, 0x24c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 1B E8 FF: jmp 0x58804720
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x1b
        __asm _emit 0xe8
        __asm _emit 0xff
    }
}
