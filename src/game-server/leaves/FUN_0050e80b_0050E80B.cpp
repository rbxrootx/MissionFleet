// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E80B .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_0050e80b_0050E80B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 F8 FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 44: je 0x50e86d
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0f0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7C 08: jl 0x50e851
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 2
        ; Exact mapped bytes 7E 14: jle 0x50e865
        __asm _emit 0x7e
        __asm _emit 0x14
        push 121h
        push 5c68bch
        ; Exact mapped bytes E8 A0 61 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e865
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x50e841
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 43: jmp 0x50e8b0
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7C 08: jl 0x50e87d
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 2
        ; Exact mapped bytes 7E 1C: jle 0x50e899
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        push 5c69ech
        ; Exact mapped bytes E8 88 13 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        push 0f1h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
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
