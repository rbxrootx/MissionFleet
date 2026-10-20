// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA8B0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_584aa8b0() {
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
        ; Exact mapped bytes 6B 88 B8 5E 00 00 30: imul ecx, dword ptr [eax + 0x5eb8], 0x30
        __asm _emit 0x6b
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8D 84 0A 3C 41 00 00: lea eax, [edx + ecx + 0x413c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x3c
        __asm _emit 0x41
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
