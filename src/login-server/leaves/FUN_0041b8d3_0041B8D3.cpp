// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B8D3 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_0041b8d3_0041B8D3() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        push edi
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [ecx + 10h], eax
        mov eax, dword ptr [ebx + 10h]
        sub eax, 0
        ; Exact mapped bytes 74 18: je 0x41b904
        __asm _emit 0x74
        __asm _emit 0x18
        dec eax
        ; Exact mapped bytes 74 05: je 0x41b8f4
        __asm _emit 0x74
        __asm _emit 0x05
        dec eax
        ; Exact mapped bytes 74 1A: je 0x41b90c
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 42: jmp 0x41b936
        __asm _emit 0xeb
        __asm _emit 0x42
        mov esi, ebx
        mov edi, ecx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [ecx + 14h], eax
        ; Exact mapped bytes EB 32: jmp 0x41b936
        __asm _emit 0xeb
        __asm _emit 0x32
        mov esi, ebx
        mov edi, ecx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        push dword ptr [ebx + 14h]
        ; Exact mapped bytes E8 D1 40 00 00: call 0x41f9e5
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        lea eax, [eax + eax + 2]
        push eax
        ; Exact mapped bytes FF 15 14 C6 43 00: call dword ptr [0x43c614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        test eax, eax
        mov dword ptr [ecx + 14h], eax
        ; Exact mapped bytes 74 0E: je 0x41b939
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [ebx + 14h]
        push eax
        ; Exact mapped bytes E8 A2 5E 00 00: call 0x4217d6
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push 1
        pop eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
