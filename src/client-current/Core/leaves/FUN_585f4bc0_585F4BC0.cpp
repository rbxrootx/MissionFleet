// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4BC0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_585f4bc0_585F4BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 498h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A6 65 1C 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x65
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
