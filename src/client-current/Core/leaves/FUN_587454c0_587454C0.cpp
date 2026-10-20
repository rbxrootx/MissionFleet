// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587454C0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_587454c0_587454C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 50h]
        movzx edx, word ptr [ecx + 84h]
        cmp edx, 0bh
        ; Exact mapped bytes 75 18: jne 0x587454fa
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 50h]
        movzx edx, word ptr [ecx + 38h]
        cmp edx, 2
        ; Exact mapped bytes 75 09: jne 0x587454fa
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x58745501
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 20h
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58745513
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 7C: jge 0x58745597
        __asm _emit 0x7d
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A A7 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DB A5 D6 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 54: je 0x58745592
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A A7 D6 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 50h]
        movzx edx, byte ptr [eax + 46h]
        cmp ecx, edx
        ; Exact mapped bytes 7C 12: jl 0x58745573
        __asm _emit 0x7c
        __asm _emit 0x12
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 50h]
        movzx ecx, byte ptr [edx + 47h]
        cmp eax, ecx
        ; Exact mapped bytes 7E 1F: jle 0x58745592
        __asm _emit 0x7e
        __asm _emit 0x1f
        ; Exact mapped bytes E8 78 1C D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 3b8h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E2 37 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x37
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x5874559c
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x5874550a
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
