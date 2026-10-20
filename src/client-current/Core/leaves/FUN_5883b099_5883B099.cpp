// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B099 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5883b099_5883B099() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 1
        mov edx, ecx
        ; Exact mapped bytes 75 13: jne 0x5883b0b7
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [edx + 14h], 10h
        ; Exact mapped bytes 72 02: jb 0x5883b0ac
        __asm _emit 0x72
        __asm _emit 0x02
        mov edx, dword ptr [edx]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ebp + 10h]
        mov byte ptr [edx + eax], cl
        ; Exact mapped bytes EB 1E: jmp 0x5883b0d5
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [edx + 14h], 10h
        ; Exact mapped bytes 72 02: jb 0x5883b0bf
        __asm _emit 0x72
        __asm _emit 0x02
        mov edx, dword ptr [edx]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 45 10: movsx eax, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x10
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 3E 1D 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
