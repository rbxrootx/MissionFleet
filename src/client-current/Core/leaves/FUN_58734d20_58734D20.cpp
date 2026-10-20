// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734D20 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_58734d20_58734D20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888ea67h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 54h
        mov dword ptr [ebp - 24h], eax
        push 0ach
        ; Exact mapped bytes E8 A9 C2 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xc2
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2F: je 0x58734d9d
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 26h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 30h]
        push edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 6F D9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58734da4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6D BB E2 FF: call 0x58560930
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbb
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
