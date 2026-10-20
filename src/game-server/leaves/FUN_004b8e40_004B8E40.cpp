// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8E40 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_004b8e40_004B8E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        push 2
        ; Exact mapped bytes E8 9C C3 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b8e69
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 40 02 5E 00: cmp ecx, dword ptr [0x5e0240]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D F6 00 00 00: jge 0x4b8f6e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [eax + edx*4], 0
        ; Exact mapped bytes 74 79: je 0x4b8eff
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 83h
        test ecx, ecx
        ; Exact mapped bytes 75 5E: jne 0x4b8efd
        __asm _emit 0x75
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 DC F4 FF FF: call 0x4b8390
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 83h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4b8eed
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1B F5 FF FF: call 0x4b8400
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x4b8e60
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 71: jmp 0x4b8f6e
        __asm _emit 0xeb
        __asm _emit 0x71
        ; Exact mapped bytes EB 6A: jmp 0x4b8f69
        __asm _emit 0xeb
        __asm _emit 0x6a
        push 55h
        push 58c924h
        push 2
        push 38h
        ; Exact mapped bytes E8 21 13 FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx + edx*4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [eax + edx*4], 0
        ; Exact mapped bytes 74 3B: je 0x4b8f67
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        add eax, 20h
        push eax
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        add eax, 20h
        push eax
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 05: jmp 0x4b8f6e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x4b8e60
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3B: je 0x4b8faf
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], 0ffffffffh
        push 2
        ; Exact mapped bytes E8 DA C2 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
