// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050EB64 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0050eb64_0050EB64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 F5 FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 5C: je 0x50ebdd
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 20 26 5E 00: call dword ptr [0x5e2620]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 20: jle 0x50ebb4
        __asm _emit 0x7e
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 00 F6 FD FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 24 26 5E 00: call dword ptr [0x5e2624]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x50ebd1
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 100h
        push 0ffh
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 32 F4 FD FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 24 26 5E 00: call dword ptr [0x5e2624]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 58 F5 FD FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 31: jmp 0x50ec0e
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C5 23 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push -1
        push 14dh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x50ec0e
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 A6 23 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 75 82 FF FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
