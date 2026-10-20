// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E8B9 .. +0x16B bytes.
extern "C" __declspec(naked) void FUN_0050e8b9_0050E8B9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 F8 FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -10h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 20000h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50e8fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 134h
        push 5c68bch
        ; Exact mapped bytes E8 0B 61 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e8fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x50e8d1
        __asm _emit 0x75
        __asm _emit 0xd1
        push 0
        push 0
        push 87h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50e92e
        __asm _emit 0x75
        __asm _emit 0x14
        push 135h
        push 5c68bch
        ; Exact mapped bytes E8 D7 60 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e92e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x50e900
        __asm _emit 0x75
        __asm _emit 0xcc
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 09: je 0x50e945
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0ffffffffh
        mov dword ptr [ebp - 4], 0
        push 0
        push 0
        push 87h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x50e9db
        __asm _emit 0x74
        __asm _emit 0x75
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 43: je 0x50e9b1
        __asm _emit 0x74
        __asm _emit 0x43
        push 0
        push 0
        push 0f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x50e9af
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 74 14: je 0x50e9a1
        __asm _emit 0x74
        __asm _emit 0x14
        push 145h
        push 5c68bch
        ; Exact mapped bytes E8 64 60 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e9a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x50e985
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1F: jmp 0x50e9d0
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp eax, dword ptr [edx]
        sete cl
        push ecx
        push 0f1h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 12: jmp 0x50e9ed
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5c6a24h
        push 5c6a54h
        ; Exact mapped bytes E8 2B 12 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x50ea1b
        __asm _emit 0x74
        __asm _emit 0x19
        push -10h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 20000h
        test eax, eax
        ; Exact mapped bytes 0F 84 31 FF FF FF: je 0x50e94c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
