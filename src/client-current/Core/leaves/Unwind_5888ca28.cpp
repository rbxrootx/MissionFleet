// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888CA28 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5888ca28() {
    __asm {
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 81 C1 38 01 00 00: add ecx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1A C6 E5 FF: jmp 0x586e9050
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xc6
        __asm _emit 0xe5
        __asm _emit 0xff
    }
}
