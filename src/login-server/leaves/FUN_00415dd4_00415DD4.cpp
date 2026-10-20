// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415DD4 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_00415dd4_00415DD4() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp + 8]
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C3 F6 FF FF: call 0x4154ab
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x415ea6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 7E EE FF FF: call 0x414c7e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 10h]
        push 2
        mov edi, eax
        mov eax, dword ptr [esi]
        pop ecx
        sub eax, ecx
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x415e94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x415ed1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x415ead
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 5D: je 0x415e82
        __asm _emit 0x74
        __asm _emit 0x5d
        sub eax, 4
        ; Exact mapped bytes 74 17: je 0x415e41
        __asm _emit 0x74
        __asm _emit 0x17
        sub eax, 3
        ; Exact mapped bytes 75 65: jne 0x415e94
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [ebp + 8]
        shl edx, 4
        mov eax, dword ptr [eax + 3ch]
        mov dword ptr [eax + edx - 8], ecx
        ; Exact mapped bytes EB 65: jmp 0x415ea6
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [esi + 18h]
        mov ebx, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x415e51
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 04: je 0x415e55
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, ebx
        ; Exact mapped bytes 75 51: jne 0x415ea6
        __asm _emit 0x75
        __asm _emit 0x51
        cmp dword ptr [esi + 14h], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 12: je 0x415e70
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 C0 EE FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        or byte ptr [ebx], 0ffh
        or dword ptr [edi], 0ffffffffh
        ; Exact mapped bytes EB 36: jmp 0x415ea6
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 C0 EE FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi], 1
        ; Exact mapped bytes EB 24: jmp 0x415ea6
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp byte ptr [ebx], 0ffh
        ; Exact mapped bytes 74 0D: je 0x415e94
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 A6 EE FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 3
        push 1
        push -6
        push edi
        push ebx
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 42 F6 FF FF: call 0x4154e8
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        cmp byte ptr [eax], 0ffh
        ; Exact mapped bytes 74 F1: je 0x415ea6
        __asm _emit 0x74
        __asm _emit 0xf1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 2F EE FF FF: call 0x414cf1
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 6B EE FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D5: jmp 0x415ea6
        __asm _emit 0xeb
        __asm _emit 0xd5
        cmp dword ptr [edi], -1
        ; Exact mapped bytes 75 D0: jne 0x415ea6
        __asm _emit 0x75
        __asm _emit 0xd0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 45 EE FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        or byte ptr [eax], 0ffh
        ; Exact mapped bytes EB BB: jmp 0x415ea6
        __asm _emit 0xeb
        __asm _emit 0xbb
    }
}
