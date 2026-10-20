// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004344F0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_004344f0_004344F0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8A 4C 24 04: mov cl, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
