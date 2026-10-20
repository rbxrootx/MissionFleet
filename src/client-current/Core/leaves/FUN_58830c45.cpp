// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830C45 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58830c45() {
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
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 48 20: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        ; Exact mapped bytes 89 50 24: mov dword ptr [eax + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
