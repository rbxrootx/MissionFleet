// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585505E0 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_585505e0_585505E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x58550692
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 78 7A F3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855061a
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 67 74 F3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 61 7B F3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7b
        __asm _emit 0xf3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 98 73 F3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 53: je 0x58550692
        __asm _emit 0x74
        __asm _emit 0x53
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F9 73 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 3F: jne 0x5855068d
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 63 F3 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x63
        __asm _emit 0xf3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 57 F3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 EE F4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xee
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 26 99 F6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58550692
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x5855060b
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
