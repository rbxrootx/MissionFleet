// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF587 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004cf587_004CF587() {
    __asm {
        push ebp
        mov ebp, esp
        push 5c4f38h
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 83 1F 06 00: call 0x53151a
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f28h
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 3F 1F 06 00: call 0x5314e4
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f1ch
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 F3 1E 06 00: call 0x5314a6
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f14h
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 B5 1E 06 00: call 0x531476
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 29 57 06 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 83 57 06 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 30 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 75 57 06 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 22 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 67 57 06 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 14 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
