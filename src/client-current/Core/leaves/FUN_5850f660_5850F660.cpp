// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850F660 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_5850f660_5850F660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 EE FF FF: call 0x5850e4d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        imul eax, dword ptr [edx + 8], 16h
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 E7 24 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 E7 24 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 D9 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D F4 FF FF: call 0x5850eb20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 72 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 13: jne 0x5850f6e7
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A ED FF FF: call 0x5850e440
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 D8 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 72 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD D8 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 22: jne 0x5850f729
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 F3 FF FF: call 0x5850ea90
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 28 F4 FF FF: call 0x5850eb50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
