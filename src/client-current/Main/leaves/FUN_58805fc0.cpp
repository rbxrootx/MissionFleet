// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58805FC0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_58805fc0() {
    __asm {
        sub esp, 234h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 230h], eax
        mov eax, ecx
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes 66 83 49 24 02: or word ptr [ecx + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x02
        mov ecx, dword ptr [eax + 174h]
        push 1
        ; Exact mapped bytes E8 82 0F 0A 00: call 0x588a6f70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [esp + 30h]
        push 5899d418h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 30h
        lea ecx, [esp + 0ch]
        push 0
        push ecx
        ; Exact mapped bytes E8 3C 6C 17 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 B4 A0 58: mov eax, dword ptr [0x58a0b454]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 50 B4 A0 58: mov edx, dword ptr [0x58a0b450]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 58 B4 A0 58: mov ecx, dword ptr [0x58a0b458]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes A1 60 B4 A0 58: mov eax, dword ptr [0x58a0b460]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 8B 15 5C B4 A0 58: mov edx, dword ptr [0x58a0b45c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 8B 0D 64 B4 A0 58: mov ecx, dword ptr [0x58a0b464]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dword ptr [esp + 24h], eax
        lea eax, [esp + 44h]
        mov dword ptr [esp + 20h], edx
        add esp, 14h
        mov dword ptr [esp + 14h], ecx
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58806050
        __asm _emit 0x75
        __asm _emit 0xf9
        push ebx
        push esi
        push edi
        sub eax, edx
        push 100h
        lea edx, [esp + 140h]
        push 0
        push edx
        mov ebx, eax
        ; Exact mapped bytes E8 D6 6B 17 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, 0ch
        lea esi, [esp + 18h]
        lea edi, [esp + 148h]
        lea eax, [esp + 48h]
        add esp, 0ch
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edx, [eax + 1]
        mov edi, edi
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58806090
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        push eax
        lea eax, [esp + 40h]
        push eax
        lea ecx, [esp + 174h]
        push ecx
        ; Exact mapped bytes E8 A0 6C 17 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 0ch
        push 0
        add ebx, 31h
        push ebx
        lea edx, [esp + 144h]
        push edx
        push 800h
        push 2
        ; Exact mapped bytes E8 41 20 FB FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 23ch]
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 FA 6A 17 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 234h
        ret
    }
}
