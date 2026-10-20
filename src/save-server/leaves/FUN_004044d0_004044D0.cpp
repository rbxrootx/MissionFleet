// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004044D0 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_004044d0_004044D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a8h]
        mov ecx, 2ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C6 08 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 58: je 0x40458b
        __asm _emit 0x74
        __asm _emit 0x58
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A2 08 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0ch]
        push eax
        push 58h
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 83 08 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 68h], eax
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6A 08 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes EB 03: jmp 0x40458e
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 0a8h
        cmp ebp, esp
        ; Exact mapped bytes E8 52 08 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
