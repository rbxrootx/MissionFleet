// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B2300C .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58b2300c() {
    __asm {
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 66 0F 46 EC: cmovbe bp, sp
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x46
        __asm _emit 0xec
        ; Exact mapped bytes BD 31 41 C8 51: mov ebp, 0x51c84131
        __asm _emit 0xbd
        __asm _emit 0x31
        __asm _emit 0x41
        __asm _emit 0xc8
        __asm _emit 0x51
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 41 73 FE FF: jmp 0x58b0a35f
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
