// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587418F0 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_587418f0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        lea ebx, [ecx + 70h]
        push edi
        mov edi, dword ptr [ebx + 0ch]
        cmp edi, dword ptr [ebx + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58741907
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 6B B3 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        mov esi, dword ptr [ebx]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebx + 10h]
        cmp dword ptr [ebx + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x5874191d
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 55 B3 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58741927
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x5874192c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 46 B3 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        cmp edi, ebp
        ; Exact mapped bytes 74 4D: je 0x5874197d
        __asm _emit 0x74
        __asm _emit 0x4d
        test esi, esi
        ; Exact mapped bytes 75 33: jne 0x58741967
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes E8 39 B3 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58741945
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2D B3 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        cmp dword ptr [edi], eax
        ; Exact mapped bytes 74 22: je 0x5874196f
        __asm _emit 0x74
        __asm _emit 0x22
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x5874196b
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 1C B3 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58741962
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 10 B3 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x00
        add edi, 8
        ; Exact mapped bytes EB A9: jmp 0x58741910
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB D0: jmp 0x5874193b
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E9: jmp 0x58741958
        __asm _emit 0xeb
        __asm _emit 0xe9
        push edi
        push esi
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 A3 E4 FF FF: call 0x5873fe20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
