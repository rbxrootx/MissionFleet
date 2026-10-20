// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F790 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5857f790_5857F790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1bch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DF B9 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb9
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1c0h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C7 B9 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb9
        __asm _emit 0x23
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
