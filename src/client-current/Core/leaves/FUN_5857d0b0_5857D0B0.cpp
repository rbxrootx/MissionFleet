// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D0B0 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_5857d0b0_5857D0B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 9
        push ecx
        ; Exact mapped bytes E8 70 3F 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3f
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        push 8
        push 58960530h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A2 F7 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf7
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 78 70 23 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 6C 40 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x40
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        add eax, 9
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 80010f0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4D F8 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x5857d163
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 F2 3E 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3e
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
