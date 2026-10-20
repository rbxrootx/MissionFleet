// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049EFE2 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_0049efe2_0049EFE2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 A3 D7 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 D8 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x49f00d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 29 D8 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x49f02b
        __asm _emit 0x75
        __asm _emit 0x1e
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 2B D8 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 D7 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x49f0d0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FE D7 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x49f045
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F1 D7 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x49f060
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 F3 D7 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E D7 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 70: jmp 0x49f0d0
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 09: jae 0x49f08f
        __asm _emit 0x73
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 4]
        xor ecx, dword ptr [eax + 4]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x49f0c1
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        xor eax, dword ptr [ebp - 8]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x49f0c1
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 81 D7 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C D7 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
