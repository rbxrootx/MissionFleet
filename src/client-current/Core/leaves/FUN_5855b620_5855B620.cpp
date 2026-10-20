// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855B620 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5855b620_5855B620() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 04: jne 0x5855b634
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x5855b674
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 78h]
        and edx, 80000000h
        cmp edx, 80000000h
        ; Exact mapped bytes 75 09: jne 0x5855b651
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 25: jmp 0x5855b674
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes EB 21: jmp 0x5855b672
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 78h]
        and ecx, 10000000h
        ; Exact mapped bytes 74 0F: je 0x5855b66e
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 B3 F2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb3
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x5855b674
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 04: jmp 0x5855b672
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x5855b674
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
    }
}
