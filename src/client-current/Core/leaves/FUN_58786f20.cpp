// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786F20 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58786f20() {
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
        ; Exact mapped bytes 8B 80 00 01 00 00: mov eax, dword ptr [eax + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 6B E0 0A C2: xor eax, 0xc20ae06b
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0xc2
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
