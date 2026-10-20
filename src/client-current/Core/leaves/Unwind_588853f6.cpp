// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588853F6 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_588853f6() {
    __asm {
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 81 C1 F4 06 01 00: add ecx, 0x106f4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 4C 49 C2 FF: jmp 0x584a9d50
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x49
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
