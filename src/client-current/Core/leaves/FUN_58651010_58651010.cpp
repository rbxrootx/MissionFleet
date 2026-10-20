// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58651010 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_58651010_58651010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 21ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 50 70 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x70
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58651042
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 3F 6A E3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6a
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 21ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 71 E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x71
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6E 69 E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x69
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 45: je 0x586510ae
        __asm _emit 0x74
        __asm _emit 0x45
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CF 69 E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x69
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
        ; Exact mapped bytes 75 2A: jne 0x586510ac
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        add edx, 21ch
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C 8F E6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x586510b0
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 85: jmp 0x58651033
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
