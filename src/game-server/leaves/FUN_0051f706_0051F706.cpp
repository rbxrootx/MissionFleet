// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F706 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0051f706_0051F706() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x51f728
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 AE 2E 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 40: jge 0x51f778
        __asm _emit 0x7d
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 15 00 00: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 585e50h
        ; Exact mapped bytes E8 D6 B9 FD FF: call 0x4fb125
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x51f776
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x51f776
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A7: jmp 0x51f71f
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
