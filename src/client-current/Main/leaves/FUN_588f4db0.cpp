// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4DB0 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_588f4db0() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        sub esp, 8
        push ebp
        mov ebp, dword ptr [eax + 0ch]
        push esi
        mov esi, ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x588f4ee9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebp
        ; Exact mapped bytes E8 09 19 FE FF: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x588f4edc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BD 64 01 00 00 06: cmp word ptr [ebp + 0x164], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x588f4edc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 3f8h], ebp
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x588f4edc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 184h]
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x588f4edc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push eax
        lea ebx, [esi + 4]
        push ecx
        push edx
        push ebp
        ; Exact mapped bytes E8 B4 7A E7 FF: call 0x5876c8d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        cmp eax, -1
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x588f4edc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 5B 7E 08 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E8 66 7E 08 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 11ah]
        push eax
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esi + 184h]
        push eax
        xor ecx, 0aah
        push ecx
        ; Exact mapped bytes E8 27 71 E7 FF: call 0x5876bf80
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x71
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [ebp + 350h]
        mov ecx, dword ptr [esi + 3fch]
        mov dword ptr [esi + 14ch], edx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 10490h]
        add edi, dword ptr [eax + 10488h]
        mov eax, dword ptr [esi + 418h]
        add esp, 0ch
        push eax
        push ebx
        ; Exact mapped bytes E8 DF 17 FE FF: call 0x588d6670
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        movzx edx, word ptr [esi + 11ch]
        push eax
        mov eax, dword ptr [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 14ch]
        push 0
        push 320h
        push edx
        mov edx, dword ptr [esi + 148h]
        push -1
        push 2
        push eax
        mov eax, dword ptr [esi + 3fch]
        push 0
        push 0ch
        push ecx
        mov ecx, dword ptr [ebx + 4]
        push edx
        mov edx, dword ptr [ebx]
        push ebp
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push edi
        ; Exact mapped bytes E8 84 AE EF FF: call 0x587efd60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0xff
        mov ebp, dword ptr [ebp + 78h]
        test ebp, ebp
        ; Exact mapped bytes 0F 85 E9 FE FF FF: jne 0x588f4dd0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 8
        ret
    }
}
