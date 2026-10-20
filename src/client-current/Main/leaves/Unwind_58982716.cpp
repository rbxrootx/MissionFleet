// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58982716 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58982716() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 81 C1 04 05 01 00: add ecx, 0x10504
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 64 DC FF: jmp 0x58748b50
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x64
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
