// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58648CE0 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_58648ce0_58648CE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 24ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 80 F3 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58648d12
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6F ED E3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 24ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 F4 E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf4
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 9E EC E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 45: je 0x58648d7e
        __asm _emit 0x74
        __asm _emit 0x45
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 FF EC E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x58648d7c
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        add edx, 24ch
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3C 12 E7 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x58648d80
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 85: jmp 0x58648d03
        __asm _emit 0xeb
        __asm _emit 0x85
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
