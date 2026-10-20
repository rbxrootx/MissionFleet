// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A5830 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_584a5830_584A5830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 1ch], 5f5e100h
        mov dword ptr [ebp - 18h], 5f5e100h
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 66 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a5871
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 68 FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x584a594e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD BD 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x584a5949
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 18 77 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 77 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x584a5949
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 6B FE FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 7C 02: jl 0x584a58bc
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB AA: jmp 0x584a5866
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 10 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 F0 10 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 28h], esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 67 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C7 67 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 24h], esi
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ebp - 24h]
        add ecx, edx
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 35 6B FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E 9F FF FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, dword ptr [ebp - 24h]
        add edx, eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        imul eax, ecx, 3
        cmp edx, eax
        ; Exact mapped bytes 7D 14: jge 0x584a5949
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 0C: jle 0x584a5949
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x584a5866
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 05: je 0x584a5959
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 02: jmp 0x584a595b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
