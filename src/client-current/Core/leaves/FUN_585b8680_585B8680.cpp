// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8680 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_585b8680_585B8680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 38: je 0x585b86c7
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 8C 1C 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x585b86c5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 70 EF FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0xef
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 38 FA FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9C E7 FF FF: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6A: jmp 0x585b8731
        __asm _emit 0xeb
        __asm _emit 0x6a
        movzx edx, word ptr [ebp + 0ch]
        cmp edx, 1
        ; Exact mapped bytes 75 1B: jne 0x585b86eb
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 1B EB F1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xeb
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 06 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 46: jmp 0x585b8731
        __asm _emit 0xeb
        __asm _emit 0x46
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x585b870f
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 F7 EA F1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xea
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 06 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x585b8731
        __asm _emit 0xeb
        __asm _emit 0x22
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 3
        ; Exact mapped bytes 75 19: jne 0x585b8731
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes E8 D3 EA F1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 23h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 06 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
