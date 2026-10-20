// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879ED90 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_5879ed90_5879ED90() {
    __asm {
        sub esp, 0dch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0d8h], eax
        mov eax, dword ptr [esp + 0e4h]
        push esi
        mov esi, dword ptr [esp + 0e4h]
        push eax
        test esi, esi
        ; Exact mapped bytes 74 24: je 0x5879eddc
        __asm _emit 0x74
        __asm _emit 0x24
        lea eax, [esp + 8]
        push eax
        push esi
        ; Exact mapped bytes E8 ED 00 00 00: call 0x5879eeb0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5879edd7
        __asm _emit 0x74
        __asm _emit 0x0a
        lea ecx, [esp + 4]
        push ecx
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 32: jmp 0x5879ee09
        __asm _emit 0xeb
        __asm _emit 0x32
        lea eax, [esp + 4]
        push eax
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 78 AE 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 BF 27 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 60 AE 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A7 27 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0e4h]
        add esp, 8
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 35 22 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0dch
        ret
    }
}
