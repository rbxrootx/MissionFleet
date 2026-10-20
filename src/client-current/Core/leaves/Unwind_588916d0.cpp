// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588916D0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588916d0() {
    __asm {
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 83 C1 0C: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0c
        ; Exact mapped bytes E9 F5 77 F0 FF: jmp 0x58798ed0
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x77
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
