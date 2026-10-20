// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3632 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_004d3632_004D3632() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d3655
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a06h
        push 671a64h
        ; Exact mapped bytes E8 F0 56 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3655
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d363b
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4d3675
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a07h
        push 671a64h
        ; Exact mapped bytes E8 D0 56 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3675
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d365b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d36a2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a09h
        push 671a64h
        ; Exact mapped bytes E8 A3 56 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d36a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d3688
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x4d36bb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 05: jne 0x4d36bb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x4d3790
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 04 EB 05 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F7 EC 05 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 30 EC 05 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 9C BE 68 00: call dword ptr [0x68be9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2B EC 05 00: call 0x53231c
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 9C BE 68 00: call dword ptr [0x68be9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA EC 05 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A0 BE 68 00: call dword ptr [0x68bea0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4d3715
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 7B: jmp 0x4d3790
        __asm _emit 0xeb
        __asm _emit 0x7b
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 41: je 0x4d375c
        __asm _emit 0x74
        __asm _emit 0x41
        push 14h
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 0ch]
        sub edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 A4 BE 68 00: call dword ptr [0x68bea4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 34: jmp 0x4d3790
        __asm _emit 0xeb
        __asm _emit 0x34
        push 14h
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 0ch]
        sub ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
