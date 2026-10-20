// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FFC0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5878ffc0_5878FFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 42 59 CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x59
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 05: jne 0x5878ffe8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x58790097
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6F 2E 00 00: call 0x58792e70
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x5879000f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58790097
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 A9 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [eax + 9]
        mov byte ptr [ebp - 14h], cl
        cmp byte ptr [ebp - 14h], 2
        ; Exact mapped bytes 74 02: je 0x58790025
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4B: jmp 0x58790070
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 31 07 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 A9 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 34h]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA A9 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 8]
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 8
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 80017105h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 C9 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 27: jmp 0x58790097
        __asm _emit 0xeb
        __asm _emit 0x27
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E6 06 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 8
        lea ecx, [ebp + 0ch]
        push ecx
        push 0
        push 0
        push 80015105h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA C8 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
