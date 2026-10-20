// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851EBD0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_5851ebd0_5851EBD0() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        push -1
        push 588815adh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        sub esp, 30h
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
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebx + 18h]
        push ecx
        movzx edx, byte ptr [ebp - 11h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4D A4 F8 FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebx + 10h]
        push eax
        lea ecx, [ebx + 8]
        push ecx
        ; Exact mapped bytes E8 D9 82 F6 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebx + 8]
        push edx
        ; Exact mapped bytes E8 6D 86 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebx + 10h]
        push eax
        ; Exact mapped bytes E8 56 86 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 20h], edx
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 8B 00 00 00: call 0x5851ed00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x5851ec8a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E9 93 FA FF: call 0x584c8070
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 49: jmp 0x5851ecd3
        __asm _emit 0xeb
        __asm _emit 0x49
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 1D 86 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], edx
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 06 86 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0E 01 00 00: call 0x5851ede0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
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
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
