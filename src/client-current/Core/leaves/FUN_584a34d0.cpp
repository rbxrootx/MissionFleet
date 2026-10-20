// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A34D0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_584a34d0() {
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
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 51 0D: movsx edx, byte ptr [ecx + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x0d
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 0A: jne 0x584a34ea
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4D 08: mov dword ptr [ebp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes EB E9: jmp 0x584a34d3
        __asm _emit 0xeb
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
