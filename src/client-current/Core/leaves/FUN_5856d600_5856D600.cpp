// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856D600 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_5856d600_5856D600() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f11ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CB 91 F1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x91
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a97e8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [edx + 5ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 53: jne 0x5856d6d3
        __asm _emit 0x75
        __asm _emit 0x53
        push 20h
        ; Exact mapped bytes E8 7D 39 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x39
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x5856d6b7
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DD 73 F1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6E 03 00 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856d6be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 58h], edx
        ; Exact mapped bytes EB 09: jmp 0x5856d6dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC 00 00 00: call 0x5856d7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
