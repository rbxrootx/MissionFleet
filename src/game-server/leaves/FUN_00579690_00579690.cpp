// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579690 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_00579690_00579690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 A5 BD FC FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 1
        ; Exact mapped bytes E8 32 E6 FC FF: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 34h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 4F: je 0x57970a
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0ah
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 1A 39 F1 FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x39
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 11: jne 0x5796e3
        __asm _emit 0x75
        __asm _emit 0x11
        push 26h
        push 5d2f18h
        ; Exact mapped bytes E8 22 B3 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5796e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x5796cc
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx], 0
        ; Exact mapped bytes E8 19 BE FB FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 D4 28 5E 00: call dword ptr [0x5e28d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A7: jmp 0x5796b1
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx + 34h], 0
        push 1
        ; Exact mapped bytes E8 F4 E6 FC FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E8 E3 BD FB FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x579739
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 0A: je 0x579739
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 51 58: call dword ptr [ecx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 B8 FC FF: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0cch], 0
        ; Exact mapped bytes 74 2B: je 0x579778
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x579778
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        ; Exact mapped bytes E8 C6 BC FC FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 40: jne 0x5797c6
        __asm _emit 0x75
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 17: je 0x5797a6
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        push ecx
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 17: je 0x5797c6
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
