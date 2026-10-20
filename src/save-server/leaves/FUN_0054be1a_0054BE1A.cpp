// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BE1A .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_0054be1a_0054BE1A() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes C1 F8 1F: sar eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 83 E0 01: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 8B 04 85 94 AB 67 00: mov eax, dword ptr [eax*4 + 0x67ab94]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xab
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
