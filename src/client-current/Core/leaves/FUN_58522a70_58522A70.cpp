// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522A70 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58522a70_58522A70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4B: je 0x58522ad3
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 69 00 00 00: call 0x58522b00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 96 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 00 00 00: call 0x58522b20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 12: jne 0x58522ac6
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 0A: jne 0x58522ac6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 95 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x58522ad5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 4F F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB AF: jmp 0x58522a82
        __asm _emit 0xeb
        __asm _emit 0xaf
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
