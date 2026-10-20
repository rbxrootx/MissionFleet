// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BD7B0 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_586bd7b0_586BD7B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        ; Exact mapped bytes E8 E9 7F DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E CB 00 00 00: jle 0x586bd89a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 3A 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x586bd88a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 27 12 E4 FF: call 0x584fea20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 3A 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 7E 00 00: call 0x586c5620
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [eax + 84h], edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 52 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        ; Exact mapped bytes E8 6E 7F DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7f
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x586bd87a
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 52 15 00 00: call 0x586beda0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd861
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 7D 0B: jge 0x586bd87a
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 5C 00 00: call 0x586c34e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x586bd858
        __asm _emit 0xeb
        __asm _emit 0xde
        push 1133h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 B0 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd898
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 B0 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd8a8
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 B0 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
