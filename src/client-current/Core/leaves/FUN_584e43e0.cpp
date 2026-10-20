// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E43E0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_584e43e0() {
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
        ; Exact mapped bytes 0F AF 45 10: imul eax, dword ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 7D 0C: idiv dword ptr [ebp + 0xc]
        __asm _emit 0xf7
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
