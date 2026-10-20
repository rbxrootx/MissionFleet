// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431397 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_00431397_00431397() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        push edi
        push 1
        xor edi, edi
        test byte ptr [esp + 28h], 4
        pop ebx
        mov esi, ecx
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 10: je 0x4313c4
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 39 CE FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 10000000h
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 74 04: je 0x4313c8
        __asm _emit 0x74
        __asm _emit 0x04
        mov dword ptr [esp + 10h], edi
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        or dword ptr [esi + 24h], 18h
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 ED 0B 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 00 C4 43 00: mov ebx, dword ptr [0x43c400]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebp, eax
        add ebp, 30h
        cmp dword ptr [esp + 18h], edi
        ; Exact mapped bytes 74 76: je 0x431465
        __asm _emit 0x74
        __asm _emit 0x76
        push edi
        push edi
        push edi
        push edi
        push ebp
        ; Exact mapped bytes FF 15 C0 C4 43 00: call dword ptr [0x43c4c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 67: jne 0x431465
        __asm _emit 0x75
        __asm _emit 0x67
        cmp dword ptr [esp + 10h], edi
        ; Exact mapped bytes 74 12: je 0x431416
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 1A CF FF FF: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [esp + 10h], edi
        test byte ptr [esp + 24h], 1
        ; Exact mapped bytes 75 1F: jne 0x43143c
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 74 19: je 0x43143c
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [esp + 14h], edi
        ; Exact mapped bytes 75 13: jne 0x43143c
        __asm _emit 0x75
        __asm _emit 0x13
        push dword ptr [esi + 1ch]
        push edi
        push 121h
        push dword ptr [esp + 28h]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test byte ptr [esp + 24h], 2
        ; Exact mapped bytes 75 1C: jne 0x43145f
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 14h]
        inc dword ptr [esp + 14h]
        push eax
        push edi
        push 36ah
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 8A: jne 0x4313e9
        __asm _emit 0x75
        __asm _emit 0x8a
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes EB 84: jmp 0x4313e9
        __asm _emit 0xeb
        __asm _emit 0x84
        ; Exact mapped bytes E8 61 0B 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x4314da
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [esp + 10h], edi
        ; Exact mapped bytes 74 23: je 0x43149e
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 4]
        cmp eax, 118h
        ; Exact mapped bytes 74 07: je 0x43148c
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 104h
        ; Exact mapped bytes 75 12: jne 0x43149e
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 92 CE FF FF: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [esp + 10h], edi
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 70: call dword ptr [eax + 0x70]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x70
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x4314e5
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes E8 1D 0B 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push ebp
        mov ecx, eax
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4314c6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [esp + 18h], 1
        mov dword ptr [esp + 14h], edi
        push edi
        push edi
        push edi
        push edi
        push ebp
        ; Exact mapped bytes FF 15 C0 C4 43 00: call dword ptr [0x43c4c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 90: jne 0x431465
        __asm _emit 0x75
        __asm _emit 0x90
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x4313e9
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes E8 54 7C 00 00: call 0x439134
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x4314ec
        __asm _emit 0xeb
        __asm _emit 0x07
        and dword ptr [esi + 24h], 0ffffffe7h
        mov eax, dword ptr [esi + 2ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
