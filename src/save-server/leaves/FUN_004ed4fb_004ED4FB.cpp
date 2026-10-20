// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED4FB .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_004ed4fb_004ED4FB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7F 01 04 00: call 0x52d69a
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 74 06: je 0x4ed52a
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 75 08: jne 0x4ed532
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x4ed5e0
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 38 55 FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x4ed5dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 24: je 0x4ed573
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA F4 03 00: call 0x52ca45
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ed573
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fch
        push 677b4ch
        ; Exact mapped bytes E8 D2 B7 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed573
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4ed547
        __asm _emit 0x75
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 65 02 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 3A: jne 0x4ed5cf
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 2F: je 0x4ed5cf
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D4 BE 68 00: call dword ptr [0x68bed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x4ed5cf
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x4ed5dd
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 65 02 00: call 0x513b09
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
