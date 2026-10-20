// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C8A0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_5876c8a0_5876C8A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        movzx eax, word ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5876c8ba
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x5876c8dd
        __asm _emit 0xeb
        __asm _emit 0x23
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 1
        ; Exact mapped bytes 75 1A: jne 0x5876c8dd
        __asm _emit 0x75
        __asm _emit 0x1a
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 5f09h]
        and edx, ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 16 5F 00 00: mov word ptr [eax + 0x5f16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
