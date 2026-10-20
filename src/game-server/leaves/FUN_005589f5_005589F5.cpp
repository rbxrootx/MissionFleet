// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005589F5 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_005589f5_005589F5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 135h
        push 5cfe58h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 4C 27 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x27
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x558a31
        __asm _emit 0x75
        __asm _emit 0x14
        push 136h
        push 5cfe58h
        ; Exact mapped bytes E8 D4 BF FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558a31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x558a14
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F2 A4 FF FF: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes E8 4F 5F FF FF: call 0x54e9a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 7D 07: jge 0x558a67
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x558b4c
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 20h
        push eax
        push 0
        push 58e540h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes FF 15 B4 29 5E 00: call dword ptr [0x5e29b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x558b13
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x558aec
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x558ad3
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x558b0b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x558af2
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes EB 23: jmp 0x558b36
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 10 AA FF FF: call 0x553546
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        push 15ah
        push 5cfe58h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 17 26 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
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
