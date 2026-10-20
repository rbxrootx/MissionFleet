// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A818E .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_004a818e_004A818E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 54h], ecx
        push 3ch
        push 5d089ch
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 B6 2F 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 38: je 0x4a81f9
        __asm _emit 0x74
        __asm _emit 0x38
        push 41h
        push 5d089ch
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 8F 2F 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        push 58aaa8h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B2 2E 05 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4a81f3
        __asm _emit 0x75
        __asm _emit 0x11
        push 42h
        push 5d089ch
        ; Exact mapped bytes E8 12 C8 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a81f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4a81d1
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 15: je 0x4a8214
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 02 81 0C 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4a8214
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 07: jmp 0x4a821b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 1
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 10 4E 09 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        push 4ch
        push 5d089ch
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 24 2F 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        push 3fffffffh
        push 3fffffffh
        push 0
        push 0
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 0D DB 08 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 F7 DA 08 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xda
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 4ch]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        push 1
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 3E D2 04 00: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 104h
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 3fffffffh
        sub edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, 3fffffffh
        sub ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        push 0e900h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 09 66 04 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x4a8367
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 104h
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 104h]
        sub edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 10h]
        sub eax, edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 108h]
        sub edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 0ch]
        sub eax, edx
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ecx + 10ch]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 40h]
        sub edx, dword ptr [ecx + 110h]
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 CF D9 08 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd9
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 114h
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E0 DD 08 00: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0x08
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 0
        ; Exact mapped bytes E8 59 D3 04 00: call 0x4f5702
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 38 A6 05 00: call 0x5029ed
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 AC A5 05 00: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        push 0
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 D9 D0 04 00: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
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
