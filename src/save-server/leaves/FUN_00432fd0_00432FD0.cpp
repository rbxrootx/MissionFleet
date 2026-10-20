// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432FD0 .. +0x1C3 bytes.
extern "C" __declspec(naked) void FUN_00432fd0_00432FD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bac8h
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
        sub esp, 10h
        push ebx
        push esi
        mov ebx, dword ptr [ebp + 8]
        mov esi, ecx
        push edi
        mov edi, ebx
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 8]
        mov dword ptr [ebp - 10h], esp
        lea ecx, [eax + 2]
        cmp ecx, edx
        ; Exact mapped bytes 73 33: jae 0x433038
        __asm _emit 0x73
        __asm _emit 0x33
        ; Exact mapped bytes 66 C7 01 00 00: mov word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        sub eax, ebx
        sar eax, 1
        ; Exact mapped bytes 74 10: je 0x433023
        __asm _emit 0x74
        __asm _emit 0x10
        add eax, eax
        lea ecx, [ebx + 2]
        push eax
        push ebx
        push ecx
        ; Exact mapped bytes E8 40 2C 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        mov eax, dword ptr [esi + 4]
        add eax, 2
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x43317e
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        mov dword ptr [ebp - 18h], 1
        sub eax, edi
        lea ecx, [ebp - 18h]
        sar eax, 1
        cmp eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 72 03: jb 0x433053
        __asm _emit 0x72
        __asm _emit 0x03
        lea ecx, [ebp - 14h]
        mov ecx, dword ptr [ecx]
        lea eax, [eax + ecx + 1]
        test eax, eax
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 74 61: je 0x4330c1
        __asm _emit 0x74
        __asm _emit 0x61
        lea edi, [eax + eax]
        cmp edi, 80h
        ; Exact mapped bytes 76 0E: jbe 0x433079
        __asm _emit 0x76
        __asm _emit 0x0e
        push edi
        ; Exact mapped bytes E8 EF 93 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 4F: jmp 0x4330c8
        __asm _emit 0xeb
        __asm _emit 0x4f
        lea edx, [edi - 1]
        push 685094h
        shr edx, 3
        lea ebx, [edx*4 + 685054h]
        ; Exact mapped bytes E8 70 F5 FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebx]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4330a6
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        mov dword ptr [ebx], ecx
        ; Exact mapped bytes EB 09: jmp 0x4330af
        __asm _emit 0xeb
        __asm _emit 0x09
        push edi
        ; Exact mapped bytes E8 D4 18 00 00: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes C7 05 94 50 68 00 00 00 00 00: mov dword ptr [0x685094], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4330c8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov dl, byte ptr [ebp + 0fh]
        mov eax, dword ptr [esi]
        mov byte ptr [ebp + 0bh], dl
        mov edx, dword ptr [ebp - 14h]
        lea ecx, [ebp + 0bh]
        mov dword ptr [ebp - 4], 1
        push ecx
        push edx
        push ebx
        push eax
        ; Exact mapped bytes E8 0A 29 00 00: call 0x4359f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 1ch], eax
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4330f7
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov dl, byte ptr [ebp + 0fh]
        mov ecx, dword ptr [esi + 4]
        mov byte ptr [ebp + 0fh], dl
        lea edx, [ebp + 0fh]
        add eax, 2
        push 0
        push edx
        push eax
        push ecx
        push ebx
        ; Exact mapped bytes E8 8F 29 00 00: call 0x435aa0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 14h
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 66 C7 03 00 00: mov word ptr [ebx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 46: je 0x43316a
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [esi + 8]
        sub eax, edi
        sar eax, 1
        shl eax, 1
        cmp eax, 80h
        ; Exact mapped bytes 76 0B: jbe 0x43313f
        __asm _emit 0x76
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes E8 6F 93 09 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 2B: jmp 0x43316a
        __asm _emit 0xeb
        __asm _emit 0x2b
        dec eax
        push 685094h
        shr eax, 3
        lea ebx, [eax*4 + 685054h]
        ; Exact mapped bytes E8 AC F4 FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebx]
        mov dword ptr [edi], eax
        mov dword ptr [ebx], edi
        ; Exact mapped bytes C7 05 94 50 68 00 00 00 00 00: mov dword ptr [0x685094], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov edi, dword ptr [ebp - 1ch]
        mov dword ptr [esi], eax
        lea edx, [eax + ecx*2]
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
