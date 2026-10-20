// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FE8F0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_585fe8f0_585FE8F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 40000000h
        ; Exact mapped bytes 75 0F: jne 0x585fe90f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], 40000000h
        ; Exact mapped bytes EB 0D: jmp 0x585fe91c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
