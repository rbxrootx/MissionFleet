// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550B10 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58550b10() {
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
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 81 08: mov ecx, dword ptr [ecx + eax*4 + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0x08
        ; Exact mapped bytes E8 EA 2F 01 00: call 0x58563b10
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
