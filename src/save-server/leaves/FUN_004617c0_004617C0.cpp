// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004617C0 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_004617c0_004617C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C1 34: add ecx, 0x34
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x34
        ; Exact mapped bytes E8 1A B1 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb1
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
