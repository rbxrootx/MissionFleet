// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E33B .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_5886e33b_5886E33B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 48h
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 CC 43 89 58: call dword ptr [0x588943cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 7D EA 00: cmp word ptr [ebp - 0x16], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5886e3e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ebp - 14h]
        test edi, edi
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5886e3e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        push ebx
        push esi
        lea ebx, [edi + 4]
        mov esi, 2000h
        add ebx, eax
        cmp eax, esi
        cmovl esi, eax
        push esi
        ; Exact mapped bytes E8 5A B3 00 00: call 0x588796d7
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 35 B0 9B 96 58: cmp esi, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        pop ecx
        ; Exact mapped bytes 0F 4F 35 B0 9B 96 58: cmovg esi, dword ptr [0x58969bb0]
        __asm _emit 0x0f
        __asm _emit 0x4f
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], esi
        xor esi, esi
        mov eax, dword ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x5886e3e6
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp dword ptr [ebx], -1
        ; Exact mapped bytes 74 42: je 0x5886e3de
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebx], -2
        ; Exact mapped bytes 74 3D: je 0x5886e3de
        __asm _emit 0x74
        __asm _emit 0x3d
        mov cl, byte ptr [esi + edi + 4]
        test cl, 1
        ; Exact mapped bytes 74 34: je 0x5886e3de
        __asm _emit 0x74
        __asm _emit 0x34
        test cl, 8
        ; Exact mapped bytes 75 0C: jne 0x5886e3bb
        __asm _emit 0x75
        __asm _emit 0x0c
        push dword ptr [ebx]
        ; Exact mapped bytes FF 15 20 43 89 58: call dword ptr [0x58894320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5886e3db
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, esi
        mov ecx, esi
        and eax, 3fh
        sar ecx, 6
        imul edx, eax, 38h
        mov eax, dword ptr [ebx]
        add edx, dword ptr [ecx*4 + 589699b0h]
        mov dword ptr [edx + 18h], eax
        mov al, byte ptr [esi + edi + 4]
        mov byte ptr [edx + 28h], al
        mov eax, dword ptr [ebp - 4]
        inc esi
        add ebx, 4
        cmp esi, eax
        ; Exact mapped bytes 75 B1: jne 0x5886e397
        __asm _emit 0x75
        __asm _emit 0xb1
        pop esi
        pop ebx
        pop edi
        leave
        ret
    }
}
