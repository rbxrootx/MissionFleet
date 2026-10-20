// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500B70 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00500b70_00500B70() {
    __asm {
        push ebp
        mov ebp, esp
        push 5c6e68h
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 5c6e64h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 5c6e60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 3F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 66 41 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7B 3F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 58 41 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6D 3F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
