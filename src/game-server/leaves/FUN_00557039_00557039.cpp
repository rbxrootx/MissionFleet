// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557039 .. +0x1D0 bytes.
extern "C" __declspec(naked) void FUN_00557039_00557039() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 24h], 0
        push 750h
        push 5cfa08h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 EC 40 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x40
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 D5 8D F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x557099
        __asm _emit 0x75
        __asm _emit 0x14
        push 751h
        push 5cfa08h
        ; Exact mapped bytes E8 6C D9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557099
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x557074
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x5570ca
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A4 8D F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5570ca
        __asm _emit 0x75
        __asm _emit 0x14
        push 753h
        push 5cfa08h
        ; Exact mapped bytes E8 3B D9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5570ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x55709f
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x5570f4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 10h]
        push eax
        xor ecx, ecx
        ; Exact mapped bytes E8 FE B2 FC FF: call 0x5223f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x557102
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x557126
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 20h]
        push edx
        xor ecx, ecx
        ; Exact mapped bytes E8 CC B2 FC FF: call 0x5223f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x557134
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 84 0C 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 2ch]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 26 A9 FE FF: call 0x541a7a
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 9E FD FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 09: jne 0x55716d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 36: jmp 0x5571a3
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 34 26 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 20 9E F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 C3 73 FF FF: call 0x54e589
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 05: jne 0x5571e1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 CB 8B F7 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 1
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], 0
        lea esp, [ebp - 40h]
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
