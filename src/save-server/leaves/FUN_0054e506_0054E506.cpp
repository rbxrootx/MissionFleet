// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E506 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_0054e506_0054E506() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 54h], 0
        push 0a6h
        push 67bee8h
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes E8 1F BD F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 68h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54e55e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a7h
        push 67bee8h
        ; Exact mapped bytes E8 E7 A7 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e55e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54e541
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x54e587
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x54e67e
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 BA 3F F5 FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        ; Exact mapped bytes E8 F7 6E FD FF: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 A0 3F F5 FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 6E FD FF: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 89 3F F5 FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 C6 6E FD FF: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 14: je 0x54e5ec
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b2h
        push 67bee8h
        ; Exact mapped bytes E8 59 A7 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e5ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54e5d2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 12h], 0
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 6A: je 0x54e679
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 09: jne 0x54e624
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 35: jmp 0x54e659
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 5E 79 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x79
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], esp
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 7A A7 F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa7
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 104h
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 12h
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        lea esp, [ebp - 7ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
