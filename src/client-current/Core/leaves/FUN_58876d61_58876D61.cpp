// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58876D61 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_58876d61_58876D61() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [ebx + 0b4h], edi
        ; Exact mapped bytes 75 07: jne 0x58876d7d
        __asm _emit 0x75
        __asm _emit 0x07
        mov esi, 588c4e78h
        ; Exact mapped bytes EB 46: jmp 0x58876dc3
        __asm _emit 0xeb
        __asm _emit 0x46
        push 164h
        push 1
        ; Exact mapped bytes E8 87 84 FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x58876da7
        __asm _emit 0x74
        __asm _emit 0x16
        push ebx
        push esi
        ; Exact mapped bytes E8 69 FC FF FF: call 0x58876a01
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 14: jne 0x58876db2
        __asm _emit 0x75
        __asm _emit 0x14
        push esi
        ; Exact mapped bytes E8 D9 FE FF FF: call 0x58876c7d
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, esi
        push edi
        ; Exact mapped bytes E8 63 5E FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 24: jmp 0x58876dd6
        __asm _emit 0xeb
        __asm _emit 0x24
        push edi
        mov dword ptr [esi + 0b0h], 1
        ; Exact mapped bytes E8 4E 5E FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push dword ptr [ebx + 9ch]
        ; Exact mapped bytes E8 AE F3 FF FF: call 0x5887617c
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 9ch], esi
        xor eax, eax
        pop ecx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
