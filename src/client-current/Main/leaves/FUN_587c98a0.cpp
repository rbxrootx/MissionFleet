// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C98A0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_587c98a0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub eax, 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 74 62: je 0x587c990e
        __asm _emit 0x74
        __asm _emit 0x62
        sub eax, 0ee46h
        ; Exact mapped bytes 74 42: je 0x587c98f5
        __asm _emit 0x74
        __asm _emit 0x42
        sub eax, 3edh
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x587c9947
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 87 EF FF FF: call 0x587c8850
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [esi + 64h]
        push eax
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 6F: jne 0x587c9947
        __asm _emit 0x75
        __asm _emit 0x6f
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 20h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 10h]
        push 0
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 B1 FD FF FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 8]
        cmp edx, dword ptr [esi + 0ech]
        ; Exact mapped bytes 75 46: jne 0x587c9947
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esp + 0ch]
        cmp edi, dword ptr [esi + 0f4h]
        ; Exact mapped bytes 75 10: jne 0x587c992b
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        push 1
        add eax, 3e8h
        push eax
        ; Exact mapped bytes E8 75 FD FF FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, dword ptr [esi + 0f8h]
        pop edi
        ; Exact mapped bytes 75 13: jne 0x587c9947
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 60h]
        sub ecx, 3e8h
        push 1
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 59 FD FF FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
