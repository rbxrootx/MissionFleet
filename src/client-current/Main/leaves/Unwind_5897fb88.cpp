// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897FB88 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_5897fb88() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 64 1F 01 00: add ecx, 0x11f64
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x64
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 8A 74 E4 FF: jmp 0x587c7020
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x74
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
