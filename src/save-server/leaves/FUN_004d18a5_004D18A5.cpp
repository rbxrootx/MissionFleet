// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D18A5 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_004d18a5_004D18A5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c41bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E8 A5 01 06 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 58fh
        push 671a64h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 7F 89 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 14: jne 0x4d1901
        __asm _emit 0x75
        __asm _emit 0x14
        push 590h
        push 671a64h
        ; Exact mapped bytes E8 44 74 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1901
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4d18e1
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0A FF 05 00: call 0x531819
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d193c
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 F8 00 00 00: call dword ptr [edx + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EF 9C 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        push 1
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 87 A8 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DA 11 00 00: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 9C 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        push 1
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C A8 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 DC BE 68 00: call dword ptr [0x68bedc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 10: je 0x4d19a6
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 0
        push 1fh
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        push 671d8ch
        ; Exact mapped bytes E8 53 EC FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 E0 BE 68 00: call dword ptr [0x68bee0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4d19f6
        __asm _emit 0x75
        __asm _emit 0x0e
        push -1
        push 0
        push 0f107h
        ; Exact mapped bytes E8 33 51 02 00: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2E FE 05 00: call 0x531833
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
