// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C8E0 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_5884c8e0() {
    __asm {
        sub esp, 38h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 34h], eax
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 6ch]
        mov eax, dword ptr [eax + 80h]
        push esi
        ; Exact mapped bytes 8B 35 A8 C1 98 58: mov esi, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, 4
        ; Exact mapped bytes 0F 8C 2B 01 00 00: jl 0x5884ca38
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 6ch]
        mov eax, dword ptr [ecx + 80h]
        push eax
        push 58a0b450h
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x5884c942
        __asm _emit 0x75
        __asm _emit 0x1c
        push eax
        push eax
        push eax
        push 1cah
        ; Exact mapped bytes E8 BD F1 F1 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf1
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 83 F1 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 6ch]
        ; Exact mapped bytes E8 FE 2F F1 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 70h]
        mov eax, dword ptr [edx + 80h]
        push ebp
        push edi
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ebp, eax
        add ebp, 31h
        push ebp
        ; Exact mapped bytes E8 D3 4B 12 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4b
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        push 30h
        lea eax, [esp + 1ch]
        push 0
        push eax
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes E8 D9 02 13 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x00
        push ebp
        push 0
        push edi
        ; Exact mapped bytes E8 D0 02 13 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 98 C1 98 58: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 1ch
        push 58a0b450h
        lea ecx, [esp + 18h]
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 74h]
        push edx
        ; Exact mapped bytes E8 F4 AF 0B 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xaf
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 74h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebx + 6ch]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        lea edx, [esp + 30h]
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, 0ch
        lea esi, [esp + 14h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebx + 70h]
        mov esi, dword ptr [eax + 80h]
        push esi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        push esi
        mov esi, dword ptr [esp + 18h]
        lea ecx, [esi + 30h]
        push ecx
        ; Exact mapped bytes E8 69 03 13 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 0ch
        push ebp
        push esi
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 C7 CD F6 FF: call 0x587b97c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xcd
        __asm _emit 0xf6
        __asm _emit 0xff
        pop edi
        pop ebp
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x5884ca1e
        __asm _emit 0x75
        __asm _emit 0x1f
        push 6464ffh
        push 5899c598h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 32 08 04 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 8]
        mov ecx, ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 34h]
        xor ecx, esp
        ; Exact mapped bytes E8 A6 01 13 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 38h
        ret
        push 0
        push 0
        push 0
        push 1a4h
        ; Exact mapped bytes E8 A8 F0 F1 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 82 F1 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x82
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 3ch]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 7E 01 13 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 38h
        ret
    }
}
