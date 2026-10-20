// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F060 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_5867f060_5867F060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2d8h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 65: je 0x5867f0e0
        __asm _emit 0x74
        __asm _emit 0x65
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 05 00 00: call 0x5867f5b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 6D E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2F 6D E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 19 6D E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 03 6D E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6d
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 63: jmp 0x5867f143
        __asm _emit 0xeb
        __asm _emit 0x63
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 04 00 00: call 0x5867f5b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E0 6C E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CA 6C E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B4 6C E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9E 6C E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
