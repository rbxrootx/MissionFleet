// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986866 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58986866() {
    __asm {
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 81 C1 B0 00 00 00: add ecx, 0xb0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4C CE DC FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
