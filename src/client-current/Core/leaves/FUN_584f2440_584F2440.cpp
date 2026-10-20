// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F2440 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_584f2440_584F2440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 58h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 22 5C F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f2470
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 11 56 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x56
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 58h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0B 5D F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 42 55 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 25: je 0x584f24ba
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A3 55 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 0C 9C F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x584f24b8
        __asm _emit 0x75
        __asm _emit 0x0c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8C 55 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 04: jmp 0x584f24bc
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A7: jmp 0x584f2461
        __asm _emit 0xeb
        __asm _emit 0xa7
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
