// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981510 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58981510() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 E9 50: sub ecx, 0x50
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x50
        ; Exact mapped bytes E9 F5 32 E4 FF: jmp 0x587c4810
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x32
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
