// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872C880 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_5872c880() {
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
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 00 C4 42 8B 58: mov dword ptr [eax], 0x588b42c4
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0xc4
        __asm _emit 0x42
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 C8 82 08 00: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
