// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848F87 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58848f87() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 89 41 04: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 89 41 08: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 10: mov dword ptr [ecx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes 89 41 18: mov dword ptr [ecx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 88 41 24: mov byte ptr [ecx + 0x24], al
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 89 41 28: mov dword ptr [ecx + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x28
        ; Exact mapped bytes 89 41 5C: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5c
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
