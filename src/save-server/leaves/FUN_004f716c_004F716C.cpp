// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F716C .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_004f716c_004F716C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 81h
        push 6725c8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D5 30 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x4f71ab
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 6725c8h
        ; Exact mapped bytes E8 9A 1B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f71ab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4f718b
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0e110h
        ; Exact mapped bytes 73 14: jae 0x4f71ce
        __asm _emit 0x73
        __asm _emit 0x14
        push 84h
        push 6725c8h
        ; Exact mapped bytes E8 77 1B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f71ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f71b1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 1E 2C F5 FF: call 0x449e00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        add eax, 0e110h
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 72 14: jb 0x4f7200
        __asm _emit 0x72
        __asm _emit 0x14
        push 85h
        push 6725c8h
        ; Exact mapped bytes E8 45 1B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7200
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4f71d4
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e110h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 FD 2B F5 FF: call 0x449e20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 DB 02 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7242
        __asm _emit 0x75
        __asm _emit 0x14
        push 87h
        push 6725c8h
        ; Exact mapped bytes E8 03 1B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7242
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x4f7211
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 C6 2B F5 FF: call 0x449e20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 DB 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        push 6725d4h
        ; Exact mapped bytes E8 A2 93 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 98 2B F5 FF: call 0x449e20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B DB 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x4f72bc
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ach]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, 1
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
