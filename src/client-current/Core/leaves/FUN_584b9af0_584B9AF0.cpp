// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9AF0 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_584b9af0_584B9AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 41 F4 FF FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x584b9b6b
        __asm _emit 0x74
        __asm _emit 0x58
        push 589604e0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BF 70 39 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x70
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x584b9b6b
        __asm _emit 0x74
        __asm _emit 0x43
        push 18h
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 DB 32 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x32
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        push 58895900h
        mov ecx, 18h
        imul edx, ecx, 0
        lea eax, [ebp + edx - 1ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push -1
        push 1
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 39 0C 00: call 0x5857d4d0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DB 74 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x74
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
