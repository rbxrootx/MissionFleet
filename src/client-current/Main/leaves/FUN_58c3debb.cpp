// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58C3DEBB .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58c3debb() {
    __asm {
        ; Exact mapped bytes 8A 0F: mov cl, byte ptr [edi]
        __asm _emit 0x8a
        __asm _emit 0x0f
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes E9 04 E8 FF FF: jmp 0x58c3c6c8
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
