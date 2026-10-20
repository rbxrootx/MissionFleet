// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6497 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_004b6497_004B6497() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b64c8
        __asm _emit 0x75
        __asm _emit 0x14
        push 95h
        push 677e8ch
        ; Exact mapped bytes E8 7D 28 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b64c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b64a3
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4b64e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 96h
        push 677e8ch
        ; Exact mapped bytes E8 5D 28 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b64e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4b64ce
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4b6508
        __asm _emit 0x75
        __asm _emit 0x14
        push 97h
        push 677e8ch
        ; Exact mapped bytes E8 3D 28 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b6508
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4b64ee
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x4b651a
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 20: jne 0x4b653a
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 06: jne 0x4b6526
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x4b653a
        __asm _emit 0x74
        __asm _emit 0x14
        push 9ah
        push 677e8ch
        ; Exact mapped bytes E8 0B 28 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b653a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4b650e
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1E 05 00 00: call 0x4b6a72
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 12: je 0x4b656c
        __asm _emit 0x74
        __asm _emit 0x12
        push 10h
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 97 ED FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 41 B5 07 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb5
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4b658e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a2h
        push 677e8ch
        ; Exact mapped bytes E8 B7 27 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b658e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4b6574
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 2ch]
        push ecx
        push 0
        push 404h
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
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
