// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E520 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887e520() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 98 02 C3 FF: jmp 0x584ae7c0
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
