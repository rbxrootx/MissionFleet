// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A781 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_0052a781_0052A781() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x52a7aa
        __asm _emit 0x75
        __asm _emit 0x14
        push 156h
        push 5c8fcch
        ; Exact mapped bytes E8 5B A2 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a7aa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52a78d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52a7d5
        __asm _emit 0x75
        __asm _emit 0x14
        push 157h
        push 5c8fcch
        ; Exact mapped bytes E8 30 A2 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a7d5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x52a7b0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0a0h]
        add eax, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0a0h], eax
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0a0h], 1
        ; Exact mapped bytes 76 05: jbe 0x52a801
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x52a9c4
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 05 A4 FC FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 0
        push 5
        ; Exact mapped bytes FF 15 10 27 5E 00: call dword ptr [0x5e2710]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 60: je 0x52a88b
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x52a87a
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C2 71 FC FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x52a87a
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 AB FE FF FF: call 0x52a701
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x52a87a
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        push 0
        push 36ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x52a87a
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 9A: jmp 0x52a825
        __asm _emit 0xeb
        __asm _emit 0x9a
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x52a896
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x52a9c4
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 172h
        push 5c8fcch
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx*4 + 4]
        push eax
        ; Exact mapped bytes E8 83 27 FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0a4h], edx
        mov dword ptr [ebp - 10h], 0
        push 5
        ; Exact mapped bytes FF 15 10 27 5E 00: call dword ptr [0x5e2710]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x52a98c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x52a978
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 04 71 FC FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x52a978
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 ED FD FF FF: call 0x52a701
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x52a978
        __asm _emit 0x74
        __asm _emit 0x60
        push 0
        push 0
        push 36ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x52a978
        __asm _emit 0x75
        __asm _emit 0x49
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 72 14: jb 0x52a957
        __asm _emit 0x72
        __asm _emit 0x14
        push 17fh
        push 5c8fcch
        ; Exact mapped bytes E8 AE A0 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a957
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x52a93b
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0a4h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x52a8db
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 72 14: jb 0x52a9ab
        __asm _emit 0x72
        __asm _emit 0x14
        push 187h
        push 5c8fcch
        ; Exact mapped bytes E8 5A A0 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a9ab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x52a98c
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0a4h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx*4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
