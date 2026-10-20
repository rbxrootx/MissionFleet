// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58613F40 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58613f40_58613F40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 30: jne 0x58613f7d
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 75 0B: jne 0x58613f66
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D 07 00 00: call 0x586146b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x58613f7d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 75 09: jne 0x58613f7d
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 8C F3 FF: call 0x5854cc70
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
