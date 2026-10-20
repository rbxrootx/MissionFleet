// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869E00 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_58869e00() {
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
        mov eax, dword ptr [esp + 108h]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov byte ptr [esp + 8], bl
        cmp eax, 5
        ; Exact mapped bytes 0F 87 A0 00 00 00: ja 0x58869ece
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 2C 9F 86 58: jmp dword ptr [eax*4 + 0x58869f2c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x9f
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
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push ebx
        push ebx
        lea ecx, [esp + 10h]
        push ecx
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x58869eef
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899abb4h
        ; Exact mapped bytes EB 71: jmp 0x58869ed3
        __asm _emit 0xeb
        __asm _emit 0x71
        push 5899ecf0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push ebx
        push ebx
        lea edx, [esp + 10h]
        push edx
        ; Exact mapped bytes EB 6A: jmp 0x58869eef
        __asm _emit 0xeb
        __asm _emit 0x6a
        push 58993a78h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push ebx
        push ebx
        lea ecx, [esp + 10h]
        push ecx
        ; Exact mapped bytes EB 47: jmp 0x58869eef
        __asm _emit 0xeb
        __asm _emit 0x47
        push ebx
        push ebx
        push ebx
        push 19fh
        ; Exact mapped bytes EB 3F: jmp 0x58869ef1
        __asm _emit 0xeb
        __asm _emit 0x3f
        push ebx
        push ebx
        push ebx
        push 19ch
        ; Exact mapped bytes E8 31 1C F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A AE EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0xff
        inc dword ptr [esi + 2cch]
        ; Exact mapped bytes EB 45: jmp 0x58869f13
        __asm _emit 0xeb
        __asm _emit 0x45
        push 5899ab90h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea edx, [esp + 10h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        push ebx
        push ebx
        lea eax, [esp + 10h]
        push eax
        push 28h
        ; Exact mapped bytes E8 FA 1B F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 AE EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        mov eax, 2
        mov dword ptr [esi + 2d0h], ebx
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 108h]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B7 2C 11 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x2c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 104h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
