// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B290 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_0040b290_0040B290() {
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
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 81 C0 0B 00 00: mov eax, dword ptr [ecx + 0xbc0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 C4 0B 00 00: mov edx, dword ptr [ecx + 0xbc4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
