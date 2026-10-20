// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863E60 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_58863e60() {
    __asm {
        sub esp, 104h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 100h], eax
        ; Exact mapped bytes 66 83 49 24 02: or word ptr [ecx + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x02
        mov eax, dword ptr [esp + 108h]
        mov byte ptr [esp], 0
        cmp eax, 6
        ; Exact mapped bytes 0F 87 D7 00 00 00: ja 0x58863f64
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 AC 3F 86 58: jmp dword ptr [eax*4 + 0x58863fac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x3f
        __asm _emit 0x86
        __asm _emit 0x58
        push 5899ab90h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 8]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 0
        lea ecx, [esp + 8]
        push ecx
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x58863f87
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899abb4h
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x58863f69
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899abd8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 8]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 0
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x58863f87
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899ec70h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 8]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 0
        lea ecx, [esp + 8]
        push ecx
        ; Exact mapped bytes EB 74: jmp 0x58863f87
        __asm _emit 0xeb
        __asm _emit 0x74
        push 58993a78h
        ; Exact mapped bytes EB 4F: jmp 0x58863f69
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 58994d94h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 8]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 0
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes EB 48: jmp 0x58863f87
        __asm _emit 0xeb
        __asm _emit 0x48
        push 58993a48h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 8]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 0
        lea ecx, [esp + 8]
        push ecx
        ; Exact mapped bytes EB 23: jmp 0x58863f87
        __asm _emit 0xeb
        __asm _emit 0x23
        push 5899ab90h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push 0
        lea eax, [esp + 8]
        push eax
        push 28h
        ; Exact mapped bytes E8 62 7B F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 0D F0 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 100h]
        xor ecx, esp
        ; Exact mapped bytes E8 37 8C 11 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 104h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
