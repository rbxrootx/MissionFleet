// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DE460 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_586de460_586DE460() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 18h
        push 0
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18h
        push eax
        ; Exact mapped bytes E8 99 E9 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        push 589604e0h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b8h], 1
        ; Exact mapped bytes 75 31: jne 0x586de4c9
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        ; Exact mapped bytes E8 AA 31 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x31
        __asm _emit 0xdf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x586de4c9
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 154h]
        ; Exact mapped bytes E8 98 31 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x31
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18h
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 30h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B8 E3 16 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe3
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes E8 97 E3 16 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe3
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 14h]
        mov byte ptr [edx - 1], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
