// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502EB0 .. +0x1DE bytes.
extern "C" __declspec(naked) void FUN_58502eb0_58502EB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880183h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 13ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], 0
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 29 EE FF FF: call 0x58501d20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 13ch]
        push eax
        push 0f003fh
        push 0
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 2F 2E FC FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], eax
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 44: je 0x58502f70
        __asm _emit 0x74
        __asm _emit 0x44
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 ED FF FF: call 0x58501cc0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 130h]
        or edx, 1
        mov dword ptr [ebp - 130h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 27 F0 FF FF: call 0x58501f80
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 C8 6D FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x58503075
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes A0 AB 37 8A 58: mov al, byte ptr [0x588a37ab]
        __asm _emit 0xa0
        __asm _emit 0xab
        __asm _emit 0x37
        __asm _emit 0x8a
        __asm _emit 0x58
        mov byte ptr [ebp - 114h], al
        push 103h
        push 0
        lea ecx, [ebp - 113h]
        push ecx
        ; Exact mapped bytes E8 78 9E 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 138h], 104h
        push 0
        push 0
        push 0
        push 0
        lea edx, [ebp - 138h]
        push edx
        lea eax, [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 15 2C 40 89 58: call dword ptr [0x5889402c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x58503029
        __asm _emit 0x75
        __asm _emit 0x56
        lea eax, [ebp - 114h]
        push eax
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 EB 6A FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 12ch]
        push ecx
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 15 0A 00 00: call 0x58503a10
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 26 6D FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 138h], 104h
        mov edx, dword ptr [ebp - 134h]
        add edx, 1
        mov dword ptr [ebp - 134h], edx
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x58502fa5
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 13ch]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B EC FF FF: call 0x58501cc0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 130h]
        or edx, 1
        mov dword ptr [ebp - 130h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 1D EF FF FF: call 0x58501f80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 BE 6C FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 C6 DF 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xdf
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
