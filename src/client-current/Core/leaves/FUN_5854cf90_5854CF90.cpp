// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854CF90 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5854cf90_5854CF90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5854cfab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 14: jge 0x5854cfc5
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x5854cfc3
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 04: jmp 0x5854cfc7
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB DD: jmp 0x5854cfa2
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
