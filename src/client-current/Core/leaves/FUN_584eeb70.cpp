// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EEB70 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_584eeb70() {
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
        ; Exact mapped bytes A1 C4 BF 90 58: mov eax, dword ptr [0x5890bfc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes A3 C4 BF 90 58: mov dword ptr [0x5890bfc4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A1 C4 BF 90 58: mov eax, dword ptr [0x5890bfc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
