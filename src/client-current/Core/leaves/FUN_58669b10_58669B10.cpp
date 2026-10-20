// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58669B10 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_58669b10_58669B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 80h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 50 E5 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe5
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58669b42
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 3F DF E1 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xdf
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 80h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 E6 E1 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe6
        __asm _emit 0xe1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6E DE E1 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xde
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x58669b9f
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CF DE E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xde
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 25: jne 0x58669b9d
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        add ecx, 80h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 16 04 E5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x58669b9f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x58669b33
        __asm _emit 0xeb
        __asm _emit 0x94
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
