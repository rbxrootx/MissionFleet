// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888AB50 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888ab50() {
    __asm {
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes E9 68 0C CE FF: jmp 0x5856b7c0
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0xce
        __asm _emit 0xff
    }
}
