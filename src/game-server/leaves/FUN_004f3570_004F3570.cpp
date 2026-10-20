// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F3570 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_004f3570_004F3570() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x4f3622
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 14: je 0x4f35a5
        __asm _emit 0x74
        __asm _emit 0x14
        push 4edh
        push 5c5574h
        ; Exact mapped bytes E8 60 14 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f35a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f3588
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 8B EE 04 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 50h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 11: jne 0x4f35d7
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 87 80 00 00: call 0x4fb659
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x4f35e2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B 87 04 00: call 0x53bd2a
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 DF FE FF FF: call 0x4f34d1
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 11: je 0x4f360c
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes EB 14: jmp 0x4f3620
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 5c581ch
        ; Exact mapped bytes E8 F8 C5 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 2A: jmp 0x4f364c
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE 91 04 00: call 0x53c7e1
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 10: je 0x4f364c
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 24 00 00: call 0x4f5b32
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4f364c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x4f3654
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E E2 FF FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
