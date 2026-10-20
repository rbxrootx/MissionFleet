// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D256 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_0051d256_0051D256() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 EE 0E 01 00: call 0x52e15b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x51d358
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 68h]
        and eax, 0f000h
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x51d356
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 90h], 0e81bh
        ; Exact mapped bytes 72 0F: jb 0x51d2a9
        __asm _emit 0x72
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 90h], 0e81eh
        ; Exact mapped bytes 76 20: jbe 0x51d2c9
        __asm _emit 0x76
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 14: je 0x51d2c9
        __asm _emit 0x74
        __asm _emit 0x14
        push 177h
        push 5cb704h
        ; Exact mapped bytes E8 3C 77 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d2c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BC: jne 0x51d28b
        __asm _emit 0x75
        __asm _emit 0xbc
        mov edx, dword ptr [ebp - 20h]
        add edx, 94h
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 74 24: je 0x51d326
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 07 FD 00 00: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 56 FE FF: call 0x5029ed
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 85 2D 01 00: call 0x5300c5
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 6ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 74: jmp 0x51d3cc
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 06: jl 0x51d379
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 2F: jge 0x51d3a8
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 94h
        ; Exact mapped bytes E8 20 8B 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 98 FC 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4F EE 01 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 A7 2E 01 00: call 0x530273
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
