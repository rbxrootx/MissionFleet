// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981597 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58981597() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E9 CE 4F E4 FF: jmp 0x587c6570
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x4f
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
