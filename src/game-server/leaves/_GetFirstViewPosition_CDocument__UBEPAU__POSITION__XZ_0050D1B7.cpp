// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D1B7 .. +0x16 bytes.
extern "C" __declspec(naked) void _GetFirstViewPosition_CDocument__UBEPAU__POSITION__XZ_0050D1B7() {
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
        ; Exact mapped bytes 83 C1 28: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x28
        ; Exact mapped bytes E8 C5 5A 02 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5a
        __asm _emit 0x02
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
