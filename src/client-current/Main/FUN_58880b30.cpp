// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 349 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880B30 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_58880b30_segment_00() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push ebx
        mov ebx, ecx
        mov dword ptr [esp + 4], ebx
        mov ecx, 5899aae4h
        add eax, 444h
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [ecx]
        ; Exact mapped bytes 75 1A: jne 0x58880b66
        __asm _emit 0x75
        __asm _emit 0x1a
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x58880b62
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax + 1]
        cmp dl, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 0E: jne 0x58880b66
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        add ecx, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x58880b46
        __asm _emit 0x75
        __asm _emit 0xe4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58880b6b
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        test eax, eax
        ; Exact mapped bytes 0F 85 13 01 00 00: jne 0x58880c86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 6ch], 4
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x58880c86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ebx + 0a4h]
        cmp edi, dword ptr [ebx + 0a8h]
        ; Exact mapped bytes 76 05: jbe 0x58880b91
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 E1 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        push ebp
        push esi
        mov esi, dword ptr [ebx + 98h]
        lea ebp, [edi + 22h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 0a8h]
        mov edi, dword ptr [esp + 10h]
        cmp dword ptr [edi + 0a4h], ebx
        ; Exact mapped bytes 76 05: jbe 0x58880bb7
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 BB C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [edi + 98h]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58880bc5
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x58880bca
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 A8 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        lea edi, [ebp - 22h]
        cmp edi, ebx
        ; Exact mapped bytes 74 65: je 0x58880c36
        __asm _emit 0x74
        __asm _emit 0x65
        test esi, esi
        ; Exact mapped bytes 75 37: jne 0x58880c0c
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 98 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58880be6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 8C C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 E0: mov ax, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 3B 41 02: cmp ax, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x02
        ; Exact mapped bytes 74 38: je 0x58880c2c
        __asm _emit 0x74
        __asm _emit 0x38
        test esi, esi
        ; Exact mapped bytes 75 18: jne 0x58880c10
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 75 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 17: ja 0x58880c1b
        __asm _emit 0x77
        __asm _emit 0x17
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x58880c14
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 0A: jmp 0x58880c16
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB CC: jmp 0x58880bdc
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB EB: jmp 0x58880bff
        __asm _emit 0xeb
        __asm _emit 0xeb
        xor eax, eax
        cmp ebp, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 05: jae 0x58880c20
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 52 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        add ebp, 22h
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x58880ba0
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899f8f4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [edi + 1c8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 8A 10 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        push 5899f8d4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 1d0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 74 10 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 37 9C FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        mov eax, 1
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
