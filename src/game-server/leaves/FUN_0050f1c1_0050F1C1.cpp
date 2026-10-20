// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F1C1 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_0050f1c1_0050F1C1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d09ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 24h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7D 14: jge 0x50f1f9
        __asm _emit 0x7d
        __asm _emit 0x14
        push 257h
        push 5c68bch
        ; Exact mapped bytes E8 0C 58 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f1f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50f1df
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 7A: je 0x50f281
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 51 1D 02 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 6D: jle 0x50f281
        __asm _emit 0x7e
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5c6b34h
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D5 1C 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 2ch]
        push ecx
        push 0f114h
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 34 CA 00 00: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f114h
        push 30h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 50 1D 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 21 E6 FF FF: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 4A E4 FD FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F EF FF FF: call 0x50e1bf
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 CD E5 FD FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 2A: jmp 0x50f2ab
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 21: je 0x50f2ab
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x50f2ab
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0c5h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
