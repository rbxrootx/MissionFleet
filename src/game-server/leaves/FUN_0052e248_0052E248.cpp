// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E248 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_0052e248_0052E248() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 F2 71 01 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 78 2C 00: cmp dword ptr [eax + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 94 C1: sete cl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc1
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
