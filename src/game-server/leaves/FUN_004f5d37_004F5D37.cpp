// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5D37 .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_004f5d37_004F5D37() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 111h
        ; Exact mapped bytes 77 2E: ja 0x4f5d80
        __asm _emit 0x77
        __asm _emit 0x2e
        cmp dword ptr [ebp - 2ch], 111h
        ; Exact mapped bytes 74 6C: je 0x4f5dc7
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, 2bh
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 23h
        ; Exact mapped bytes 0F 87 EC 00 00 00: ja 0x4f5e5a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        xor edx, edx
        mov dl, byte ptr [eax + 4f5f0bh]
        ; Exact mapped bytes FF 24 95 FF 5E 4F 00: jmp dword ptr [edx*4 + 0x4f5eff]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0x5e
        __asm _emit 0x4f
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 114h
        ; Exact mapped bytes 0F 82 CD 00 00 00: jb 0x4f5e5a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 115h
        ; Exact mapped bytes 76 0E: jbe 0x4f5da4
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [ebp - 2ch], 210h
        ; Exact mapped bytes 74 05: je 0x4f5da4
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x4f5e5a
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0bc00h
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2C DE FF FF: call 0x4f3bee
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x4f5ef6
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        mov dword ptr [ebp - 4], edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        or eax, 0bd110000h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 27 25 00 00: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4f5e15
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x4f5e0b
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], 1
        mov eax, 1
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x4f5ef6
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x4f5ef4
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        or edx, 0bc4e0000h
        push edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CA 24 00 00: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x4f5ef6
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 132h
        ; Exact mapped bytes 0F 82 8D 00 00 00: jb 0x4f5ef4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 138h
        ; Exact mapped bytes 0F 87 80 00 00 00: ja 0x4f5ef4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 132h
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 73 14: jae 0x4f5ea0
        __asm _emit 0x73
        __asm _emit 0x14
        push 0af0h
        push 5c5574h
        ; Exact mapped bytes E8 65 EB 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f5ea0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f5e86
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 76 14: jbe 0x4f5ec0
        __asm _emit 0x76
        __asm _emit 0x14
        push 0af1h
        push 5c5574h
        ; Exact mapped bytes E8 45 EB 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f5ec0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f5ea6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        push 0
        push 0bc19h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 11 DD FF FF: call 0x4f3bee
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 07: jne 0x4f5eef
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 02: jmp 0x4f5ef6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
