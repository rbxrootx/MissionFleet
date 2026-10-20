// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A1C0 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_5879a1c0_5879A1C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891a50h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        cmp esi, 7ffffffah
        ; Exact mapped bytes 77 47: ja 0x5879a246
        __asm _emit 0x77
        __asm _emit 0x47
        lea ebx, [esi + 5]
        push ebx
        ; Exact mapped bytes E8 08 F4 0B 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        test edi, edi
        ; Exact mapped bytes 74 76: je 0x5879a287
        __asm _emit 0x74
        __asm _emit 0x76
        push esi
        push dword ptr [ebp - 2ch]
        lea eax, [edi + 4]
        mov dword ptr [edi], esi
        push eax
        ; Exact mapped bytes E8 70 26 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [edi + ebx - 1], 0
        mov eax, edi
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
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 0E 6E 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        push 1
        lea ecx, [ebp - 0c4h]
        ; Exact mapped bytes E8 AD 31 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x31
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c4h]
        mov dword ptr [ebp - 4], 0
        push 588b6d08h
        push eax
        ; Exact mapped bytes E8 85 A3 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c4h]
        push eax
        ; Exact mapped bytes E8 83 3F D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3f
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 A9 0A 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6d58h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3C F8 D0 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 4], 2
        push eax
        ; Exact mapped bytes E8 BC 0A 00 00: call 0x5879ad60
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
