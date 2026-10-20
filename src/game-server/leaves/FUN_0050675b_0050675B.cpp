// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050675B .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_0050675b_0050675B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x506781
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dbh
        push 5c79a0h
        ; Exact mapped bytes E8 84 E2 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506781
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x506767
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 87 B1 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5067a7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dch
        push 5c79a0h
        ; Exact mapped bytes E8 5E E2 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5067a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x506787
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0ffffh
        ; Exact mapped bytes 75 18: jne 0x5067d1
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        push 5c79ach
        ; Exact mapped bytes E8 4C 94 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 F8 95 FC FF: call 0x4cfdc9
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE FD FF FF: call 0x506589
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 15 4E FE FF: call 0x4eb5ff
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x50682f
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [ebp - 4], 7fffh
        ; Exact mapped bytes 73 11: jae 0x50680f
        __asm _emit 0x73
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        or dh, 80h
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 B2 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x50682d
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 7fffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EA B2 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        or eax, 80000000h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 B3 02 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x506876
        __asm _emit 0xeb
        __asm _emit 0x47
        push 0ffffh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA B2 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 E2 FF FF: call 0x504a9f
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 FA FF FF: call 0x506270
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 A0 4D FE FF: call 0x4eb5ff
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 30h], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
