// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EB10 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887eb10() {
    __asm {
        ; Exact mapped bytes 8B 4D DC: mov ecx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 B8 6C F3 FF: jmp 0x587b57d0
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x6c
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
