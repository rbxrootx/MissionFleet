// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D29B0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_585d29b0() {
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
        ; Exact mapped bytes E8 F1 2E EC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 03 41 54: add eax, dword ptr [ecx + 0x54]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
