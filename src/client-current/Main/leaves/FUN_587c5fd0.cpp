// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5FD0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_587c5fd0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 20h]
        push edi
        lea edi, [esi + 40h]
        cmp dword ptr [eax], edi
        ; Exact mapped bytes 75 12: jne 0x587c5ff9
        __asm _emit 0x75
        __asm _emit 0x12
        cmp ebp, 1
        ; Exact mapped bytes 75 0D: jne 0x587c5ff9
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [esi + 3ch], 0
        ; Exact mapped bytes 75 07: jne 0x587c5ff9
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebx, dword ptr [esp + 20h]
        dec ebx
        ; Exact mapped bytes EB 04: jmp 0x587c5ffd
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 20h]
        cmp dword ptr [esi + 4ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x587c6088
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 F8 FF FF: call 0x587c58e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 78: je 0x587c6088
        __asm _emit 0x74
        __asm _emit 0x78
        test ebx, ebx
        ; Exact mapped bytes 75 05: jne 0x587c6019
        __asm _emit 0x75
        __asm _emit 0x05
        cmp ebp, 1
        ; Exact mapped bytes 74 12: je 0x587c602b
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 4ch]
        push ebp
        push ebx
        push ecx
        ; Exact mapped bytes E8 A2 6F 1B 00: call 0x5897cfc6
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 5D: jne 0x587c6088
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, dword ptr [esi + 4ch]
        lea edx, [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 87 6F 1B 00: call 0x5897cfc0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x6f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x587c6088
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 20h]
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 75 19: jne 0x587c6060
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [edx], edi
        mov ecx, dword ptr [esi + 20h]
        lea eax, [esi + 41h]
        mov edx, esi
        sub edx, eax
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esi + 30h]
        add edx, 41h
        mov dword ptr [eax], edx
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        pop edi
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esi + 44h]
        pop esi
        pop ebp
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [eax + 10h], ecx
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 8B 15 28 2F 9A 58: mov edx, dword ptr [0x589a2f28]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x58
        pop edi
        pop esi
        xor ecx, ecx
        pop ebp
        mov dword ptr [eax], edx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
