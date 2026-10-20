// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787E50 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58787e50_58787E50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ah]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 10: jne 0x58787e73
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 6bh]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 04: jne 0x58787e73
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58787e75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
