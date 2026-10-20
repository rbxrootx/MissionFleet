// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED9D2 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_004ed9d2_004ED9D2() {
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
        ; Exact mapped bytes 68 B2 01 00 00: push 0x1b2
        __asm _emit 0x68
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4C 7B 67 00: push 0x677b4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x7b
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 74 C8 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
