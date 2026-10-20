// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A7CA0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_585a7ca0_585A7CA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 8E 1D 00: call 0x58780ba0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x8e
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 91 1D 00: call 0x58780e00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x91
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
