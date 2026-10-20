// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487B70 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_58487b70_58487B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 0ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 04 00 00: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58487ba0
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E1 FE FF FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 0ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 05 00 00: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 12 FE FF FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 22: je 0x58487be7
        __asm _emit 0x74
        __asm _emit 0x22
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 73 FE FF FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 1C 00 00 00: call 0x58487bf0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x58487be5
        __asm _emit 0x75
        __asm _emit 0x0c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5F FE FF FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 04: jmp 0x58487be9
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB AA: jmp 0x58487b91
        __asm _emit 0xeb
        __asm _emit 0xaa
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
