// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BE9C .. +0x197 bytes.
extern "C" __declspec(naked) void FUN_5887be9c_5887BE9C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        mov ebx, dword ptr [ebp + 8]
        lea ecx, [ebp - 2ch]
        push esi
        push edi
        push dword ptr [ebp + 10h]
        mov edi, dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 5C FF FF FF: call 0x5887be18
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        and eax, dword ptr [ebp - 28h]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x5887c00b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        and eax, dword ptr [ebp - 20h]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x5887c00b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 8C D2 00 00 00: jl 0x5887bfc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 08: jg 0x5887bef8
        __asm _emit 0x7f
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x5887bfb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 1000h
        ; Exact mapped bytes E8 0C 33 FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 0F: jne 0x5887bf1b
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0ch
        pop ebx
        mov byte ptr [edi + 1ch], 1
        mov dword ptr [edi + 18h], ebx
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x5887bfad
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8000h
        push ebx
        ; Exact mapped bytes E8 21 FE FF FF: call 0x5887bd47
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 18h]
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x5887bf44
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 7F 08: jg 0x5887bf3f
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp ecx, 1000h
        ; Exact mapped bytes 72 05: jb 0x5887bf44
        __asm _emit 0x72
        __asm _emit 0x05
        mov ecx, 1000h
        push edi
        push ecx
        push esi
        push ebx
        ; Exact mapped bytes E8 3D 4D FF FF: call 0x58870c8a
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 74 34: je 0x5887bf89
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        cdq
        sub ecx, eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        sbb eax, edx
        mov dword ptr [ebp - 8], eax
        test eax, eax
        ; Exact mapped bytes 7F D5: jg 0x5887bf3f
        __asm _emit 0x7f
        __asm _emit 0xd5
        ; Exact mapped bytes 7C 04: jl 0x5887bf70
        __asm _emit 0x7c
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 C1: jne 0x5887bf31
        __asm _emit 0x75
        __asm _emit 0xc1
        push dword ptr [ebp - 0ch]
        push ebx
        ; Exact mapped bytes E8 CE FD FF FF: call 0x5887bd47
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 91 0C FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        xor ebx, ebx
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5887c019
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi + 24h], 0
        ; Exact mapped bytes 74 11: je 0x5887bfa0
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [edi + 20h], 5
        ; Exact mapped bytes 75 0B: jne 0x5887bfa0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov byte ptr [edi + 1ch], 1
        mov dword ptr [edi + 18h], 0dh
        cmp byte ptr [edi + 1ch], 0
        ; Exact mapped bytes 74 05: je 0x5887bfab
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [edi + 18h]
        ; Exact mapped bytes EB 02: jmp 0x5887bfad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push esi
        ; Exact mapped bytes E8 5D 0C FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 63: jmp 0x5887c019
        __asm _emit 0xeb
        __asm _emit 0x63
        test ecx, ecx
        ; Exact mapped bytes 7F C8: jg 0x5887bf82
        __asm _emit 0x7f
        __asm _emit 0xc8
        ; Exact mapped bytes 7C 04: jl 0x5887bfc0
        __asm _emit 0x7c
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 73 C2: jae 0x5887bf82
        __asm _emit 0x73
        __asm _emit 0xc2
        push 0
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 40 53 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, edx
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 75 08: jne 0x5887bfe0
        __asm _emit 0x75
        __asm _emit 0x08
        cmp byte ptr [edi + 1ch], 0
        ; Exact mapped bytes 74 A4: je 0x5887bf82
        __asm _emit 0x74
        __asm _emit 0xa4
        ; Exact mapped bytes EB 31: jmp 0x5887c011
        __asm _emit 0xeb
        __asm _emit 0x31
        push ebx
        ; Exact mapped bytes E8 0B DA FF FF: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 30 41 89 58: call dword ptr [0x58894130]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 90: jne 0x5887bf82
        __asm _emit 0x75
        __asm _emit 0x90
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push 0dh
        mov byte ptr [edi + 24h], 1
        mov dword ptr [edi + 20h], eax
        pop ebx
        mov byte ptr [edi + 1ch], 1
        mov dword ptr [edi + 18h], ebx
        ; Exact mapped bytes EB 0E: jmp 0x5887c019
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp byte ptr [edi + 1ch], 0
        ; Exact mapped bytes 74 05: je 0x5887c016
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [edi + 18h]
        ; Exact mapped bytes EB 03: jmp 0x5887c019
        __asm _emit 0xeb
        __asm _emit 0x03
        push 16h
        pop ebx
        push 0
        push dword ptr [ebp - 28h]
        push dword ptr [ebp - 2ch]
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 52 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
