// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004043E0 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_004043e0_004043E0() {
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
        ; Exact mapped bytes E8 44 88 02 00: call 0x42cc35
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 10: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
