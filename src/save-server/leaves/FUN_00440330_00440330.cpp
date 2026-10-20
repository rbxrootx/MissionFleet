// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440330 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_00440330_00440330() {
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
        ; Exact mapped bytes 68 18 0A 67 00: push 0x670a18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF 5C FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
