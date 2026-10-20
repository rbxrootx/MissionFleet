// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883670 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58883670() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E9 45 E1 CD FF: jmp 0x585617c0
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xe1
        __asm _emit 0xcd
        __asm _emit 0xff
    }
}
