// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F518 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_0042f518_0042F518() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        push 435e85h
        mov ecx, 44f614h
        ; Exact mapped bytes E8 1C 79 00 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 0ch]
        mov esi, eax
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x42f57f
        __asm _emit 0x74
        __asm _emit 0x47
        cmp edi, 135h
        ; Exact mapped bytes 74 20: je 0x42f560
        __asm _emit 0x74
        __asm _emit 0x20
        cmp edi, 136h
        ; Exact mapped bytes 74 18: je 0x42f560
        __asm _emit 0x74
        __asm _emit 0x18
        cmp edi, 138h
        ; Exact mapped bytes 74 10: je 0x42f560
        __asm _emit 0x74
        __asm _emit 0x10
        cmp edi, 137h
        ; Exact mapped bytes 74 08: je 0x42f560
        __asm _emit 0x74
        __asm _emit 0x08
        cmp edi, 134h
        ; Exact mapped bytes 75 1F: jne 0x42f57f
        __asm _emit 0x75
        __asm _emit 0x1f
        push dword ptr [esi + 8]
        push eax
        lea eax, [edi - 132h]
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 E5 19 00 00: call 0x430f5b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42f57f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes EB 0F: jmp 0x42f58e
        __asm _emit 0xeb
        __asm _emit 0x0f
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B FE FF FF: call 0x42f3b9
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
