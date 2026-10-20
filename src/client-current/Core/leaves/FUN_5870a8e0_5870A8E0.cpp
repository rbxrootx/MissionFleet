// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5870A8E0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5870a8e0_5870A8E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8E 08 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
