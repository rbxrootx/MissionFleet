// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415B91 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_00415b91_00415B91() {
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
        ; Exact mapped bytes E8 06 F9 FF FF: call 0x4154ab
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x415c67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 C1 F0 FF FF: call 0x414c7e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 10h]
        mov edi, eax
        mov eax, dword ptr [esi]
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x415c55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        pop ecx
        sub eax, ecx
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x415c95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x415c6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 5F: je 0x415c40
        __asm _emit 0x74
        __asm _emit 0x5f
        sub eax, 4
        ; Exact mapped bytes 74 16: je 0x415bfc
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, ecx
        ; Exact mapped bytes 75 6B: jne 0x415c55
        __asm _emit 0x75
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [ebp + 8]
        shl edx, 4
        mov eax, dword ptr [eax + 3ch]
        mov dword ptr [eax + edx - 8], ecx
        ; Exact mapped bytes EB 6B: jmp 0x415c67
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 18h]
        mov ebx, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x415c0c
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 04: je 0x415c10
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, ebx
        ; Exact mapped bytes 75 57: jne 0x415c67
        __asm _emit 0x75
        __asm _emit 0x57
        cmp dword ptr [esi + 14h], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 15: je 0x415c2e
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 05 F1 FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx], 7ee4h
        or dword ptr [edi], 0ffffffffh
        ; Exact mapped bytes EB 39: jmp 0x415c67
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 02 F1 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi], 4
        ; Exact mapped bytes EB 27: jmp 0x415c67
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp dword ptr [ebx], 7ee4h
        ; Exact mapped bytes 74 0D: je 0x415c55
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 E5 F0 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 5
        push 4
        push 4
        push edi
        push ebx
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 81 F8 FF FF: call 0x4154e8
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf8
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
        cmp dword ptr [eax], 7ee4h
        ; Exact mapped bytes 74 EE: je 0x415c67
        __asm _emit 0x74
        __asm _emit 0xee
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 6B F0 FF FF: call 0x414cf1
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 A7 F0 FF FF: call 0x414d3a
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D2: jmp 0x415c67
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [edi], -1
        ; Exact mapped bytes 75 CD: jne 0x415c67
        __asm _emit 0x75
        __asm _emit 0xcd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        dec eax
        push eax
        ; Exact mapped bytes E8 81 F0 FF FF: call 0x414d28
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 7ee4h
        ; Exact mapped bytes EB B5: jmp 0x415c67
        __asm _emit 0xeb
        __asm _emit 0xb5
    }
}
