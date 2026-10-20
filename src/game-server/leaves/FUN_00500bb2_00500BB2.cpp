// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500BB2 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00500bb2_00500BB2() {
    __asm {
        push ebp
        mov ebp, esp
        push 5c6e74h
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 5c6e70h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 5c6e6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 3F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 24 41 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 39 3F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 16 41 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2B 3F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2b
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
