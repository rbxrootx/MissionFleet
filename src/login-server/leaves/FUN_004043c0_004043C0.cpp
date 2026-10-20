// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004043C0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_004043c0_004043C0() {
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
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 64 88 02 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 14: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x14
        ; Exact mapped bytes 05 6C 07 00 00: add eax, 0x76c
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x07
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
