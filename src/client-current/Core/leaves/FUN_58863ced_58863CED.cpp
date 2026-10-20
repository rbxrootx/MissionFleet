// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863CED .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_58863ced_58863CED() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 4]
        push dword ptr [eax]
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        ; Exact mapped bytes E8 44 01 00 00: call 0x58863e4c
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 43: je 0x58863d53
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes E8 8B 4E 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        xor ebx, ebx
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [eax + 48h]
        lea eax, [ebp - 10h]
        push eax
        push ebx
        push edi
        push ebx
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        push ebx
        push eax
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes E8 56 FB 00 00: call 0x58873890
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58863d5a
        __asm _emit 0x74
        __asm _emit 0x19
        cmp eax, 16h
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x58863e41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 22h
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x58863e41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 6A 91 00 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 74 E6: je 0x58863d53
        __asm _emit 0x74
        __asm _emit 0xe6
        lea ecx, [ebp - 10h]
        push ecx
        push -1
        push edi
        push dword ptr [ebp - 4]
        lea eax, [ebx + 4]
        push eax
        push 0
        ; Exact mapped bytes E8 0E FB 00 00: call 0x58873890
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x58863da4
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 16h
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x58863e3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 22h
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58863e3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 6F 8E 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB AF: jmp 0x58863d53
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, dword ptr [esi]
        or ecx, 0ffffffffh
        mov edi, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax]
        add eax, eax
        mov edx, dword ptr [edi + eax*8 + 24h]
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x58863dde
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, ecx
        ; Exact mapped bytes F0 0F C1 02: lock xadd dword ptr [edx], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 75 1E: jne 0x58863dde
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        add eax, eax
        push dword ptr [edi + eax*8 + 24h]
        ; Exact mapped bytes E8 41 8E 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        pop ecx
        mov eax, dword ptr [eax]
        add eax, eax
        and dword ptr [edi + eax*8 + 24h], 0
        or ecx, 0ffffffffh
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes A1 04 78 90 58: mov eax, dword ptr [0x58907804]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        test dword ptr [edx + 350h], eax
        ; Exact mapped bytes 75 30: jne 0x58863e1e
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        add eax, eax
        mov eax, dword ptr [edi + eax*8 + 24h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x58863e1e
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes F0 0F C1 08: lock xadd dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x08
        dec ecx
        ; Exact mapped bytes 75 1B: jne 0x58863e1e
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        add eax, eax
        push dword ptr [edi + eax*8 + 24h]
        ; Exact mapped bytes E8 FE 8D 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        pop ecx
        mov eax, dword ptr [eax]
        add eax, eax
        and dword ptr [edi + eax*8 + 24h], 0
        mov ecx, dword ptr [edi + 0ch]
        lea eax, [ebx + 4]
        mov dword ptr [ebx], ecx
        mov ecx, dword ptr [esi]
        mov ecx, dword ptr [ecx]
        add ecx, ecx
        mov dword ptr [edi + ecx*8 + 24h], ebx
        mov ecx, dword ptr [esi]
        mov ecx, dword ptr [ecx]
        add ecx, ecx
        mov dword ptr [edi + ecx*8 + 1ch], eax
        ; Exact mapped bytes E9 16 FF FF FF: jmp 0x58863d55
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 8E D1 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
