// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FC190 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_004fc190_004FC190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        push 0
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 3ch
        push 0
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 BF D1 FA FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        push 48h
        push 5ah
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 E4 1F 5E 00: call dword ptr [0x5e1fe4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        push edx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 3ch], 190h
        mov byte ptr [ebp - 35h], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        ; Exact mapped bytes FF 15 94 21 5E 00: call dword ptr [0x5e2194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 74: je 0x4fc278
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        lea edx, [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 88 1F 5E 00: call dword ptr [0x5e1f88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 54h]
        push edx
        push 34h
        push 5c94e4h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 7C 1F 5E 00: call dword ptr [0x5e1f7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        add eax, 1ah
        cdq
        mov ecx, 34h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 E4 20 5E 00: call dword ptr [0x5e20e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x4fc29c
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes FF 15 40 25 5E 00: call dword ptr [0x5e2540]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes FF 15 40 25 5E 00: call dword ptr [0x5e2540]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push 4
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], eax
        push 8
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx + 4], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
