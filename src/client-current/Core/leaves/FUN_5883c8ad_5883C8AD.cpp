// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C8AD .. +0x1E8 bytes.
extern "C" __declspec(naked) void FUN_5883c8ad_5883C8AD() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 101ch
        ; Exact mapped bytes E8 36 52 FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1010h], esi
        ; Exact mapped bytes E8 C1 01 00 00: call 0x5883ca95
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov dword ptr [ebp - 1014h], ebx
        cmp dword ptr [ebx + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883c8e9
        __asm _emit 0x74
        __asm _emit 0x07
        push ebx
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 0F 84 85 01 00 00: je 0x5883ca76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        ; Exact mapped bytes 66 39 06: cmp word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 79 01 00 00: jne 0x5883ca76
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 2]
        imul ecx, eax, 3
        push edi
        push 0
        pop edx
        lea eax, [ecx + 65h]
        ; Exact mapped bytes 66 31 46 04: xor word ptr [esi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x46
        __asm _emit 0x04
        lea eax, [ecx + 1]
        movzx edi, byte ptr [esi + 4]
        imul ecx, eax, 3
        shl edi, 8
        lea eax, [ecx + 65h]
        ; Exact mapped bytes 66 31 46 06: xor word ptr [esi + 6], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x46
        __asm _emit 0x06
        inc ecx
        movzx eax, byte ptr [esi + 6]
        or edi, eax
        ; Exact mapped bytes 76 15: jbe 0x5883c941
        __asm _emit 0x76
        __asm _emit 0x15
        imul ecx, ecx, 3
        lea eax, [ecx + 65h]
        ; Exact mapped bytes 66 33 44 56 08: xor ax, word ptr [esi + edx*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x44
        __asm _emit 0x56
        __asm _emit 0x08
        inc ecx
        ; Exact mapped bytes 66 89 04 56: mov word ptr [esi + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x56
        inc edx
        cmp edx, edi
        ; Exact mapped bytes 7C EB: jl 0x5883c92c
        __asm _emit 0x7c
        __asm _emit 0xeb
        xor eax, eax
        ; Exact mapped bytes 66 89 04 7E: mov word ptr [esi + edi*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x7e
        xor edi, edi
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, eax
        xor eax, eax
        inc eax
        mov ecx, eax
        cmp dword ptr [ecx*4 + 58968e20h], edx
        ; Exact mapped bytes 74 08: je 0x5883c967
        __asm _emit 0x74
        __asm _emit 0x08
        inc ecx
        cmp ecx, 14h
        ; Exact mapped bytes 7C F1: jl 0x5883c956
        __asm _emit 0x7c
        __asm _emit 0xf1
        ; Exact mapped bytes EB 06: jmp 0x5883c96d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x5883c989
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes A1 18 8E 96 58: mov eax, dword ptr [0x58968e18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 13h
        ; Exact mapped bytes 73 0F: jae 0x5883c986
        __asm _emit 0x73
        __asm _emit 0x0f
        inc eax
        ; Exact mapped bytes A3 18 8E 96 58: mov dword ptr [0x58968e18], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, eax
        mov dword ptr [eax*4 + 58968e20h], edx
        xor eax, eax
        inc eax
        mov edi, dword ptr [edi*4 + 58968dc8h]
        test edi, edi
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x5883ca75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, esi
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5883ca75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 06: cmp word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x5883ca75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 07: cmp word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x07
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x5883ca75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 800h
        push edi
        lea eax, [ebp - 1004h]
        push eax
        ; Exact mapped bytes FF 15 10 44 89 58: call dword ptr [0x58894410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 1004h]
        push eax
        ; Exact mapped bytes FF 15 14 44 89 58: call dword ptr [0x58894414]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1008h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x5883ca75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        and dword ptr [ebp - 100ch], 0
        inc eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        lea eax, [ebp - 1004h]
        movzx ecx, al
        imul eax, ecx, 3
        ; Exact mapped bytes 66 89 4F 02: mov word ptr [edi + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x02
        push 4
        pop edx
        lea ecx, [eax + 65h]
        inc eax
        mov dword ptr [ebp - 1018h], ecx
        imul ecx, eax, 3
        lea eax, [ecx + 65h]
        inc ecx
        cmp dword ptr [ebp - 1008h], 0
        mov dword ptr [ebp - 101ch], eax
        ; Exact mapped bytes 7E 31: jle 0x5883ca51
        __asm _emit 0x7e
        __asm _emit 0x31
        mov ebx, dword ptr [ebp - 100ch]
        mov esi, dword ptr [ebp - 1008h]
        imul ecx, ecx, 3
        lea eax, [ecx + 65h]
        ; Exact mapped bytes 66 33 84 5D FC EF FF FF: xor ax, word ptr [ebp + ebx*2 - 0x1004]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 04 57: mov word ptr [edi + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x57
        inc edx
        inc ecx
        inc ebx
        cmp ebx, esi
        ; Exact mapped bytes 7C E7: jl 0x5883ca2c
        __asm _emit 0x7c
        __asm _emit 0xe7
        mov esi, dword ptr [ebp - 1010h]
        mov ebx, dword ptr [ebp - 1014h]
        xor eax, eax
        lea ecx, [edx - 4]
        ; Exact mapped bytes 66 89 04 57: mov word ptr [edi + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x57
        mov eax, ecx
        sar eax, 8
        xor eax, dword ptr [ebp - 1018h]
        ; Exact mapped bytes 66 89 47 04: mov word ptr [edi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 101ch]
        xor eax, ecx
        ; Exact mapped bytes 66 89 47 06: mov word ptr [edi + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x06
        pop edi
        cmp dword ptr [ebx + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883ca83
        __asm _emit 0x74
        __asm _emit 0x07
        push ebx
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 BF 45 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
