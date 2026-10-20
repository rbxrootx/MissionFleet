// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050EA24 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_0050ea24_0050EA24() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 F6 FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 6A: je 0x50eaab
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        push 0
        push 188h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 3A: je 0x50ea97
        __asm _emit 0x74
        __asm _emit 0x3a
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        push 18ah
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 26 F7 FD FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 189h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x50ea9f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 13 EC FD FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 8A F6 FD FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 31: jmp 0x50eadc
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 F7 24 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push -1
        push 18ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x50eadc
        __asm _emit 0x75
        __asm _emit 0x12
        push 5c6a58h
        push 5c6a7ch
        ; Exact mapped bytes E8 3C 11 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
