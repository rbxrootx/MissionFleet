// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58624A40 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58624a40_58624A40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 FC CB EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 86 A1 00 00 00: jbe 0x58624b09
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 04 96 58: mov ecx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor ecx, 55555555h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3e8h
        ; Exact mapped bytes 7D 1B: jge 0x58624a9b
        __asm _emit 0x7d
        __asm _emit 0x1b
        ; Exact mapped bytes E8 6B 27 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x27
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 42 EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x42
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6E: jmp 0x58624b09
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 AA CB EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 92 CB EA FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C A6 F5 FF: call 0x5857f130
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x58624afd
        __asm _emit 0x75
        __asm _emit 0x25
        push 588ae908h
        ; Exact mapped bytes E8 0E D5 EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 B8 0B 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 F8 B9 EA FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
