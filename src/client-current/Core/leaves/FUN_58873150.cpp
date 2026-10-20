// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873150 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58873150() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes A3 30 9C 96 58: mov dword ptr [0x58969c30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 34 9C 96 58: mov dword ptr [0x58969c34], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 38 9C 96 58: mov dword ptr [0x58969c38], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 3C 9C 96 58: mov dword ptr [0x58969c3c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
