// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F410 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_5851f410_5851F410() {
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
        ; Exact mapped bytes E8 E7 0F 31 00: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 10 73 94 58: mov eax, dword ptr [0x58947310]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, 5894730ch
        ; Exact mapped bytes E8 C8 5F FE FF: call 0x58505420
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 9C FE FF: call 0x58509130
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 7D: jne 0x5851f4ed
        __asm _emit 0x75
        __asm _emit 0x7d
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 08: je 0x5851f47e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 6F: jmp 0x5851f4ed
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 B5 0C 00 00: call 0x58520140
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 75 08: jne 0x5851f49b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 38 A9 FE FF: call 0x58509dd0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 52: jmp 0x5851f4ed
        __asm _emit 0xeb
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B3 50 FE FF: call 0x58504560
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 2E 11 31 00: call 0x588305e8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x11
        __asm _emit 0x31
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
        ; Exact mapped bytes A3 10 73 94 58: mov dword ptr [0x58947310], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 20 C8 FE FF: call 0x5850bd00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B4 7B FE FF: call 0x585070a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 7C 0F 31 00: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0x31
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
