// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFA40 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_587afa40() {
    __asm {
        push -1
        push 58980d6eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1c8h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 1c4h], eax
        push ebx
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 1d4h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, byte ptr [esp + 1e8h]
        movzx ecx, byte ptr [esp + 1e4h]
        movzx eax, bl
        push eax
        push ecx
        lea edx, [esp + 158h]
        push 58999dfch
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        lea eax, [esp + 10h]
        push eax
        lea ecx, [esp + 154h]
        push ecx
        ; Exact mapped bytes FF 15 18 C1 98 58: call dword ptr [0x5898c118]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 04: jne 0x587afabf
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x587afb17
        __asm _emit 0xeb
        __asm _emit 0x58
        push 8
        ; Exact mapped bytes E8 88 D1 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd1
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dl, byte ptr [esp + 1e8h]
        mov esi, eax
        xor eax, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        push 198h
        mov byte ptr [esi + 4], dl
        mov byte ptr [esi + 5], bl
        ; Exact mapped bytes E8 68 D1 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd1
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [esp + 1dch], 0
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x587afb11
        __asm _emit 0x74
        __asm _emit 0x15
        push 1
        push 0
        lea ecx, [esp + 158h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 61 42 14 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587afb13
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi], eax
        mov eax, esi
        mov ecx, dword ptr [esp + 1d4h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 1c4h]
        xor ecx, esp
        ; Exact mapped bytes E8 A4 D0 1C 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 1d4h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
