// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E4800 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_586e4800() {
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
        ; Exact mapped bytes 0F B6 45 08: movzx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 03 41 08: add eax, dword ptr [ecx + 8]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x08
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
