// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6940 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_587a6940_587A6940() {
    __asm {
        sub esp, 2f8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 2f4h], eax
        push ebx
        mov ebx, dword ptr [esp + 300h]
        test ebx, ebx
        ; Exact mapped bytes 74 4E: je 0x587a69ae
        __asm _emit 0x74
        __asm _emit 0x4e
        push esi
        push edi
        push 2f4h
        mov ecx, 0bdh
        lea edi, [esp + 10h]
        mov esi, ebx
        push 0
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push ebx
        ; Exact mapped bytes E8 94 64 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ach]
        add esp, 0ch
        pop edi
        pop esi
        push ebx
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x587a6999
        __asm _emit 0x74
        __asm _emit 0x0c
        lea ecx, [esp + 8]
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        ; Exact mapped bytes EB 08: jmp 0x587a69a1
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 62 2C 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        lea eax, [esp + 4]
        push eax
        ; Exact mapped bytes E8 A5 88 FF FF: call 0x5879f250
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esp + 2f8h]
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 93 A6 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 2f8h
        ret
    }
}
