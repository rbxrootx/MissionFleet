// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780BA0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_58780ba0_58780BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 18ch], ecx
        mov eax, dword ptr [ebp - 18ch]
        add eax, 34h
        mov dword ptr [ebp - 198h], eax
        lea ecx, [ebp - 188h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 64 21 D8 FF: call 0x58502d40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x58780bf4
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea edx, [ebp - 1a0h]
        push edx
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 FD F2 E3 FF: call 0x585bfef0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf2
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 18ch]
        add eax, 34h
        mov dword ptr [ebp - 19ch], eax
        lea ecx, [ebp - 1a4h]
        push ecx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 5B 22 D8 FF: call 0x58502e70
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x22
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 FF 19 D2 FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x19
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58780cb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 F9 13 D8 FF: call 0x58502030
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 60h
        mov esi, eax
        lea edi, [ebp - 184h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea eax, [ebp - 184h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 28 06 00 00: call 0x58781280
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 190h], eax
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 4B: je 0x58780cb2
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        ; Exact mapped bytes E8 0D 05 0D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 7E 2D: jle 0x58780cb2
        __asm _emit 0x7e
        __asm _emit 0x2d
        push 0
        mov edx, dword ptr [ebp - 194h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 190h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        push 8001c10bh
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF BC 0A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x58780bdf
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8D 03 0B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
