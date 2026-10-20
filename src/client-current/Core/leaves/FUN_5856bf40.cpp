// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856BF40 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_5856bf40() {
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
        ; Exact mapped bytes C7 00 80 97 8A 58: mov dword ptr [eax], 0x588a9780
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x97
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 98 99 24 00: call 0x587b58f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x99
        __asm _emit 0x24
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
