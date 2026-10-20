// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860AA40 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_5860aa40_5860AA40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 FC 6B EC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5860aa72
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5860ab02
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 D3 6B EC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        push 589604e0h
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x5860aaad
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes E8 5E C7 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push 0
        push 1c9h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 E2 EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x5860ab02
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 98 6B EC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7D 20: jge 0x5860aae4
        __asm _emit 0x7d
        __asm _emit 0x20
        ; Exact mapped bytes E8 27 C7 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 0
        push 0
        push 1c7h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8F E2 EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1E: jmp 0x5860ab02
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 61 6B EC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 21 F7 FF: call 0x5857ccf0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 F3 59 EC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
