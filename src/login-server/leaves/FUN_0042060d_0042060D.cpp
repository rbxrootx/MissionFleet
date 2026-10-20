// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042060D .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0042060d_0042060D() {
    __asm {
        push edi
        push 40h
        pop ecx
        xor eax, eax
        mov edi, 4512c0h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        xor eax, eax
        mov edi, 4511a0h
        ; Exact mapped bytes A3 9C 11 45 00: mov dword ptr [0x45119c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 AC 11 45 00: mov dword ptr [0x4511ac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 C4 13 45 00: mov dword ptr [0x4513c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        pop edi
        ret
    }
}
