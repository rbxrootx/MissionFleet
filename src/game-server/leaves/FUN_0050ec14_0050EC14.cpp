// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050EC14 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_0050ec14_0050EC14() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 F4 FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 13: je 0x50ec44
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 22 FF FF FF: call 0x50eb64
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x50ec90
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 5E 23 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push -1
        push 158h
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
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 14: jge 0x50ec7b
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 3B 23 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 0A 82 FF FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x50ec90
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 14eh
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
