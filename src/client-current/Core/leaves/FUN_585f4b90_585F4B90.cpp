// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4B90 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_585f4b90_585F4B90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 86 17 00: call 0x5876d220
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 11d0h], cl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
