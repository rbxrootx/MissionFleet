// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884980F .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_5884980f_5884980F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp + 18h]
        push edi
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes FF 15 20 43 89 58: call dword ptr [0x58894320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 74 0A: je 0x5884984f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1000000h
        ; Exact mapped bytes E9 AB 01 00 00: jmp 0x588499fa
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 38h]
        push eax
        push edi
        ; Exact mapped bytes FF 15 24 43 89 58: call dword ptr [0x58894324]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x58849868
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 200h
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x588499fa
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [ebp - 38h]
        mov edx, ebx
        and edx, 1
        mov eax, ebx
        mov ecx, edx
        mov dword ptr [ebp - 3ch], edx
        or ecx, 2
        and al, 2
        mov eax, ebx
        cmove ecx, edx
        mov edx, ecx
        or edx, 4
        and al, 4
        cmove edx, ecx
        mov ecx, ebx
        mov eax, edx
        or eax, 10h
        and ecx, 10h
        cmove eax, edx
        mov edx, eax
        or edx, 20h
        and bl, 20h
        cmove edx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588498b0
        __asm _emit 0x74
        __asm _emit 0x08
        or edx, 40000000h
        ; Exact mapped bytes EB 06: jmp 0x588498b6
        __asm _emit 0xeb
        __asm _emit 0x06
        or edx, 80000000h
        or edx, 1000000h
        mov ebx, edx
        or ebx, 800000h
        cmp dword ptr [ebp - 3ch], 0
        push 0
        push edi
        cmovne ebx, edx
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], eax
        mov ecx, ebx
        cmp eax, 28h
        ; Exact mapped bytes 0F 86 A2 00 00 00: jbe 0x58849984
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push eax
        push eax
        push eax
        push edi
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea eax, [ebp - 44h]
        push eax
        push 2
        lea eax, [ebp - 40h]
        push eax
        push edi
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 24h
        push edi
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea eax, [ebp - 44h]
        push eax
        push 4
        lea eax, [ebp - 48h]
        push eax
        push edi
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 54adh
        mov ecx, ebx
        ; Exact mapped bytes 66 39 45 C0: cmp word ptr [ebp - 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 75 53: jne 0x58849981
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 48h]
        lea eax, [edx + 34h]
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 76 48: jbe 0x58849981
        __asm _emit 0x76
        __asm _emit 0x48
        push 0
        push 0
        push edx
        push edi
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea eax, [ebp - 44h]
        push eax
        push 4
        lea eax, [ebp - 4ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4ch]
        cmp eax, 5a4dh
        ; Exact mapped bytes 74 17: je 0x58849979
        __asm _emit 0x74
        __asm _emit 0x17
        cmp eax, 454eh
        ; Exact mapped bytes 74 10: je 0x58849979
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, 454ch
        ; Exact mapped bytes 74 09: je 0x58849979
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, ebx
        cmp eax, 4550h
        ; Exact mapped bytes 75 08: jne 0x58849981
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, ebx
        or ecx, 400000h
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 50h]
        pop ebx
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x5884998e
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x58849997
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], eax
        test esi, esi
        ; Exact mapped bytes 74 35: je 0x588499d0
        __asm _emit 0x74
        __asm _emit 0x35
        push dword ptr [ebp - 28h]
        push dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 08 12 00 00: call 0x5884abae
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 20h]
        mov dword ptr [esi], eax
        push dword ptr [ebp - 24h]
        mov dword ptr [esi + 4], edx
        ; Exact mapped bytes E8 F8 11 00 00: call 0x5884abae
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 30h]
        mov dword ptr [esi + 8], eax
        push dword ptr [ebp - 34h]
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes E8 E7 11 00 00: call 0x5884abae
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], edx
        mov esi, dword ptr [ebp - 58h]
        test esi, esi
        ; Exact mapped bytes 74 21: je 0x588499f8
        __asm _emit 0x74
        __asm _emit 0x21
        lea eax, [ebp - 3ch]
        push eax
        lea eax, [ebp - 40h]
        push eax
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 1C 43 89 58: call dword ptr [0x5889431c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        movzx ecx, word ptr [ebp - 40h]
        movzx eax, word ptr [ebp - 3ch]
        shl ecx, 10h
        or ecx, eax
        mov dword ptr [esi], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 4A 76 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
