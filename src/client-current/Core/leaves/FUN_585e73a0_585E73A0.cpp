// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E73A0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_585e73a0_585E73A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10f0h], 0
        ; Exact mapped bytes 75 0C: jne 0x585e73bf
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10f0h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
