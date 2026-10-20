// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886811B .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_5886811b_5886811B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push edi
        mov edi, 588c4d00h
        lea eax, [ebp - 4]
        push edi
        push 100h
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 18 DE 00 00: call 0x58875f52
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58868146
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 49: jmp 0x5886818f
        __asm _emit 0xeb
        __asm _emit 0x49
        cmp eax, 22h
        ; Exact mapped bytes 74 04: je 0x5886814f
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x5886818f
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        add eax, eax
        push esi
        push eax
        ; Exact mapped bytes E8 75 4D 00 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 0A: jne 0x5886816c
        __asm _emit 0x75
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes E8 A8 4A 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x5886818d
        __asm _emit 0xeb
        __asm _emit 0x21
        push edi
        push dword ptr [ebp - 4]
        lea eax, [ebp - 8]
        push esi
        push eax
        ; Exact mapped bytes E8 D8 DD 00 00: call 0x58875f52
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x58868184
        __asm _emit 0x74
        __asm _emit 0x03
        push esi
        ; Exact mapped bytes EB DF: jmp 0x58868163
        __asm _emit 0xeb
        __asm _emit 0xdf
        push 0
        ; Exact mapped bytes E8 85 4A 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop ecx
        pop esi
        pop edi
        leave
        ret
    }
}
