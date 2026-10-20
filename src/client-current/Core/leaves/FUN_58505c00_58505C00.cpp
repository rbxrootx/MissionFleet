// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505C00 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_58505c00_58505C00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588803d5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 F7 A7 32 00: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa7
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 E4 72 94 58: mov eax, dword ptr [0x589472e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, 589472e0h
        ; Exact mapped bytes E8 D8 F7 FF FF: call 0x58505420
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 34 00 00: call 0x58509130
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 7D: jne 0x58505cdd
        __asm _emit 0x75
        __asm _emit 0x7d
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 08: je 0x58505c6e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 6F: jmp 0x58505cdd
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 65 32 00 00: call 0x58508ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 75 08: jne 0x58505c8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 48 41 00 00: call 0x58509dd0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 52: jmp 0x58505cdd
        __asm _emit 0xeb
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C3 E8 FF FF: call 0x58504560
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 3E A9 32 00: call 0x588305e8
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa9
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes A3 E4 72 94 58: mov dword ptr [0x589472e4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 30 60 00 00: call 0x5850bd00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C4 13 00 00: call 0x585070a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 8C A7 32 00: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa7
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
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
        ret
    }
}
