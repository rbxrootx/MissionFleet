// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487C5C .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00487c5c_00487C5C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 FB 89 0B 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 14h], cl
        cmp dword ptr [ebp + 0ch], 600h
        ; Exact mapped bytes 76 11: jbe 0x487c8e
        __asm _emit 0x76
        __asm _emit 0x11
        push 27h
        push 6813e0h
        ; Exact mapped bytes E8 B7 10 0A 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x487c8e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x487c74
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x487ca4
        __asm _emit 0x75
        __asm _emit 0x0a
        push -3
        ; Exact mapped bytes E8 2F 34 FE FF: call 0x46b0d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
