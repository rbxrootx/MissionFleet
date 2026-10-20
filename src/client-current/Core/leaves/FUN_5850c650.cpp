// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C650 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_5850c650() {
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
        ; Exact mapped bytes E8 94 E1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
