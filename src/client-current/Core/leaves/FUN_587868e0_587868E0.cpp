// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587868E0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_587868e0_587868E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 17: je 0x5878690c
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp - 8], 0ee48h
        ; Exact mapped bytes 74 5C: je 0x5878695a
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [ebp - 8], 0f235h
        ; Exact mapped bytes 74 71: je 0x58786978
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x587869b8
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0f4h]
        ; Exact mapped bytes 75 18: jne 0x58786932
        __asm _emit 0x75
        __asm _emit 0x18
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        add ecx, 3e8h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 02 00 00: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0f8h]
        ; Exact mapped bytes 75 18: jne 0x58786958
        __asm _emit 0x75
        __asm _emit 0x18
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        sub edx, 3e8h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 02 00 00: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5E: jmp 0x587869b8
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0ech]
        ; Exact mapped bytes 75 0E: jne 0x58786976
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 40: jmp 0x587869b8
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        ; Exact mapped bytes E8 EA 2C E0 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2c
        __asm _emit 0xe0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5878699c
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1E: jmp 0x587869ba
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 02 00 00: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
