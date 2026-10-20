// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D32D2 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_004d32d2_004D32D2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d3303
        __asm _emit 0x75
        __asm _emit 0x14
        push 98dh
        push 671a64h
        ; Exact mapped bytes E8 42 5A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3303
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d32de
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3A 8E 05 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4d3321
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 06: jne 0x4d3321
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1F: je 0x4d3340
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B4 BE 68 00: call dword ptr [0x68beb4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 75: jmp 0x4d33b5
        __asm _emit 0xeb
        __asm _emit 0x75
        push 5
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5D: je 0x4d33b5
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 11: jmp 0x4d336b
        __asm _emit 0xeb
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 EB 69 F7 FF: call 0x449d50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x69
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 44: je 0x4d33b5
        __asm _emit 0x74
        __asm _emit 0x44
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4E EE 05 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BA 45 01 00: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        push 15h
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB A5: jmp 0x4d335a
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 06: je 0x4d33c4
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 02: je 0x4d33c6
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 19: jmp 0x4d33df
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
