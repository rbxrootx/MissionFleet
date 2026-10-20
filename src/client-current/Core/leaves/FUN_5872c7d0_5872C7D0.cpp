// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872C7D0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5872c7d0_5872C7D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 98 D5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x98
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8D E9 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0x08
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
