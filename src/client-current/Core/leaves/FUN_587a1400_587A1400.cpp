// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A1400 .. +0x254 bytes.
extern "C" __declspec(naked) void FUN_587a1400_587A1400() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 45 02 00 00: je 0x587a1652
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 37 02 00 00: je 0x587a1651
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 2B 02 00 00: je 0x587a1651
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 28h], 0
        ; Exact mapped bytes 0F 84 20 02 00 00: je 0x587a1651
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        test edx, edx
        ; Exact mapped bytes 7E 0B: jle 0x587a1444
        __asm _emit 0x7e
        __asm _emit 0x0b
        cmp dword ptr [esp + 2ch], 0
        ; Exact mapped bytes 0F 84 0D 02 00 00: je 0x587a1651
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        push esi
        lea esi, [ecx + 1]
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a1450
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, esi
        cmp dword ptr [esp + 24h], 3
        push edi
        lea edi, [ecx + 1]
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 87 D3 01 00 00: ja 0x587a163f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 0ffh
        ; Exact mapped bytes 0F 87 B2 01 00 00: ja 0x587a162a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        test edx, edx
        ; Exact mapped bytes 7E 38: jle 0x587a14b6
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edi, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [eax + esi*4]
        test edx, edx
        ; Exact mapped bytes 74 52: je 0x587a14df
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, edx
        lea ebp, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a1492
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, ebp
        push ecx
        push edx
        ; Exact mapped bytes E8 0E E5 FF FF: call 0x5879f9b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x587a14df
        __asm _emit 0x74
        __asm _emit 0x36
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 7C D4: jl 0x587a1482
        __asm _emit 0x7c
        __asm _emit 0xd4
        mov ebp, dword ptr [esp + 18h]
        mov edi, dword ptr [esp + 14h]
        push edi
        push ebx
        ; Exact mapped bytes E8 13 56 00 00: call 0x587a6ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp + 0b0h], eax
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x587a14f4
        __asm _emit 0x75
        __asm _emit 0x2a
        push 1
        push 588b8750h
        push ebx
        ; Exact mapped bytes E8 19 D8 FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push 1
        push 588b872ch
        push ebx
        ; Exact mapped bytes E8 04 D8 FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push edi
        push dword ptr [esp + 20h]
        push eax
        ; Exact mapped bytes E8 91 B3 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        add esp, 0ch
        mov edi, dword ptr [esp + 30h]
        mov ecx, edi
        or dword ptr [ebp + 0c8h], 80h
        mov dword ptr [ebp + 0b4h], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [ebp + 0b8h], eax
        lea edx, [ecx + 1]
        mov eax, dword ptr [esp + 28h]
        mov byte ptr [ebp + 0c4h], al
        mov eax, dword ptr [esp + 2ch]
        mov byte ptr [ebp + 0c5h], al
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a1540
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edx
        lea esi, [ecx + 1]
        push esi
        push ebx
        ; Exact mapped bytes E8 7D 55 00 00: call 0x587a6ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp + 0bch], eax
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x587a1573
        __asm _emit 0x75
        __asm _emit 0x13
        push 588b8778h
        push ebx
        ; Exact mapped bytes E8 C5 DE FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 15 B3 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        lea esi, [eax*4 + 4]
        push esi
        push ebx
        ; Exact mapped bytes E8 43 55 00 00: call 0x587a6ad0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp + 0c0h], eax
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x587a15ad
        __asm _emit 0x75
        __asm _emit 0x13
        push 588b879ch
        push ebx
        ; Exact mapped bytes E8 8B DE FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push esi
        push 0
        push eax
        ; Exact mapped bytes E8 5A B8 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        xor esi, esi
        add esp, 0ch
        cmp dword ptr [esp + 2ch], esi
        ; Exact mapped bytes 7E 4A: jle 0x587a160b
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [eax + esi*4]
        lea edx, [ecx + 1]
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a15d0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edx
        lea edi, [ecx + 1]
        push edi
        push ebx
        ; Exact mapped bytes E8 ED 54 00 00: call 0x587a6ad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0c0h]
        add esp, 8
        mov dword ptr [ecx + esi*4], eax
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587a1617
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 34h]
        push edi
        push dword ptr [ecx + esi*4]
        push eax
        ; Exact mapped bytes E8 8F B2 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb2
        __asm _emit 0x0a
        __asm _emit 0x00
        inc esi
        add esp, 0ch
        cmp esi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 7C B6: jl 0x587a15c1
        __asm _emit 0x7c
        __asm _emit 0xb6
        or dword ptr [ebp + 8], 400h
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push 588b87c0h
        push ebx
        ; Exact mapped bytes E8 0E DE FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push 1
        push 588b870ch
        push ebx
        ; Exact mapped bytes E8 B9 D6 FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push 1
        push 588b86f0h
        push ebx
        ; Exact mapped bytes E8 A4 D6 FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
