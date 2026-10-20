// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433375 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_00433375_00433375() {
    __asm {
        mov eax, 43b138h
        ; Exact mapped bytes E8 89 C2 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 14ch
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        lea eax, [ebp - 14h]
        push eax
        mov esi, 104h
        push edi
        push esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 A0 C2 43 00: call dword ptr [0x43c2a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4333b4
        __asm _emit 0x75
        __asm _emit 0x12
        push esi
        push dword ptr [ebp + 0ch]
        push edi
        ; Exact mapped bytes FF 15 28 C2 43 00: call dword ptr [0x43c228]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x433435
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        lea eax, [ebp + 8]
        xor esi, esi
        push eax
        push edi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 7A 00 00 00: call 0x433445
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        lea eax, [ebp - 10h]
        push esi
        push eax
        lea eax, [ebp - 18h]
        push eax
        push esi
        push esi
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 F8 C0 43 00: call dword ptr [0x43c0f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x433427
        __asm _emit 0x74
        __asm _emit 0x42
        test byte ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 07: jne 0x4333f2
        __asm _emit 0x75
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 78 C3 43 00: call dword ptr [0x43c378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test byte ptr [ebp - 10h], 4
        ; Exact mapped bytes 75 2C: jne 0x433424
        __asm _emit 0x75
        __asm _emit 0x2c
        lea eax, [ebp - 158h]
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 F4 C0 43 00: call dword ptr [0x43c0f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 17: je 0x433424
        __asm _emit 0x74
        __asm _emit 0x17
        push eax
        ; Exact mapped bytes FF 15 14 C1 43 00: call dword ptr [0x43c114]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 12ch]
        push eax
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop esi
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 78 A7 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
