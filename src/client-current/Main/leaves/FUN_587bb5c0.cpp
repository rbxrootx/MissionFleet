// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB5C0 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_587bb5c0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 10h]
        push edi
        mov edi, dword ptr [esi + 0ch]
        mov ecx, eax
        sub ecx, edi
        test ecx, 0fffffffeh
        ; Exact mapped bytes 75 04: jne 0x587bb5df
        __asm _emit 0x75
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 24: jmp 0x587bb603
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp edi, eax
        ; Exact mapped bytes 76 05: jbe 0x587bb5e8
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 8A 16 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x587bb5f6
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ecx, eax
        ; Exact mapped bytes 74 05: je 0x587bb5fb
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 77 16 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 24h]
        sub ebx, edi
        sar ebx, 1
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 20h]
        push edx
        push 1
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E5 FD FF FF: call 0x587bb400
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 0ch]
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x587bb628
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 4A 16 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esi, dword ptr [esi]
        mov ebp, esi
        mov dword ptr [esp + 14h], edi
        test esi, esi
        ; Exact mapped bytes 75 17: jne 0x587bb64b
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 39 16 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        xor eax, eax
        lea edi, [edi + ebx*2]
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 13: ja 0x587bb656
        __asm _emit 0x77
        __asm _emit 0x13
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x587bb64f
        __asm _emit 0x74
        __asm _emit 0x08
        mov esi, dword ptr [esi]
        ; Exact mapped bytes EB 06: jmp 0x587bb651
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB EC: jmp 0x587bb63b
        __asm _emit 0xeb
        __asm _emit 0xec
        xor esi, esi
        cmp edi, dword ptr [esi + 0ch]
        ; Exact mapped bytes 73 05: jae 0x587bb65b
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 17 16 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [eax + 4], edi
        pop edi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
