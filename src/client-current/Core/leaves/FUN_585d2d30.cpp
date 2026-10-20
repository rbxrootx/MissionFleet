// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D2D30 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_585d2d30() {
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
        ; Exact mapped bytes 6B 88 F4 05 00 00 18: imul ecx, dword ptr [eax + 0x5f4], 0x18
        __asm _emit 0x6b
        __asm _emit 0x88
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8D 84 0A 04 05 00 00: lea eax, [edx + ecx + 0x504]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x05
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
