// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B439 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_0056b439_0056B439() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D7 65 FA FF: call 0x511a27
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x56b45e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x56b4f3
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 100h
        ; Exact mapped bytes 0F 82 83 00 00 00: jb 0x56b4f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 108h
        ; Exact mapped bytes 77 77: ja 0x56b4f1
        __asm _emit 0x77
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2A: je 0x56b4bb
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 34 BC 68 00: call dword ptr [0x68bc34]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 9C C2 68 00: call dword ptr [0x68c29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x56b4bb
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 38: jmp 0x56b4f3
        __asm _emit 0xeb
        __asm _emit 0x38
        mov esi, dword ptr [ebp - 1ch]
        add esi, 0c0h
        mov ecx, 5
        lea edi, [ebp - 18h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0d4h]
        push eax
        ; Exact mapped bytes FF 15 98 C2 68 00: call dword ptr [0x68c298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x56b4f1
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x56b4f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
