// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C9410 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_585c9410_585C9410() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        ; Exact mapped bytes E8 5B 14 00 00: call 0x585ca880
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5e80h]
        ; Exact mapped bytes E8 4D 14 00 00: call 0x585ca880
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
