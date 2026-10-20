// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883BFA8 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_5883bfa8_5883BFA8() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 8]
        mov esi, ecx
        ; Exact mapped bytes E8 21 F1 FF FF: call 0x5883b0d9
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebp + 0ch]
        mov ecx, ebx
        push edi
        ; Exact mapped bytes E8 13 F1 FF FF: call 0x5883b0d9
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 10h]
        mov ecx, dword ptr [esi + 10h]
        sub eax, edi
        mov edi, dword ptr [ebp + 14h]
        cmp edi, eax
        cmova edi, eax
        mov eax, ecx
        not eax
        cmp eax, edi
        ; Exact mapped bytes 0F 86 E0 00 00 00: jbe 0x5883c0c2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + edi]
        mov dword ptr [ebp + 0ch], eax
        test edi, edi
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x5883c0b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6E F2 FF FF: call 0x5883b268
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x5883c0b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c00c
        __asm _emit 0x72
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c00e
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, esi
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c018
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c01a
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, esi
        mov eax, dword ptr [esi + 10h]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 17: je 0x5883c039
        __asm _emit 0x74
        __asm _emit 0x17
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, edx
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, ecx
        add eax, edi
        push eax
        ; Exact mapped bytes E8 5A 08 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, ebx
        ; Exact mapped bytes 75 39: jne 0x5883c076
        __asm _emit 0x75
        __asm _emit 0x39
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c047
        __asm _emit 0x72
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c049
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, esi
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c053
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c055
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, esi
        test edi, edi
        ; Exact mapped bytes 74 4A: je 0x5883c0a3
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ebx, dword ptr [ebp + 10h]
        push edi
        lea eax, [ebx + edi]
        mov edi, dword ptr [ebp + 8]
        cmp edi, ebx
        cmovb ebx, eax
        add ebx, edx
        lea eax, [ecx + edi]
        push ebx
        push eax
        ; Exact mapped bytes E8 1C 08 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x5883c0a0
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebx + 14h], 10h
        ; Exact mapped bytes 72 02: jb 0x5883c07e
        __asm _emit 0x72
        __asm _emit 0x02
        mov ebx, dword ptr [ebx]
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c088
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c08a
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, esi
        test edi, edi
        ; Exact mapped bytes 74 15: je 0x5883c0a3
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 10h]
        add eax, ebx
        push edi
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 F0 07 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [esi + 14h], 10h
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 10h], ecx
        ; Exact mapped bytes 72 04: jb 0x5883c0b3
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c0b5
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov byte ptr [eax + ecx], 0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 588c1cfch
        ; Exact mapped bytes E8 C1 26 FF FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
