// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58984226 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58984226() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 81 C1 58 02 00 00: add ecx, 0x258
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C F4 DC FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0xf4
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
