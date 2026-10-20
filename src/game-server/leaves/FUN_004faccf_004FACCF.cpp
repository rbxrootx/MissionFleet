// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FACCF .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_004faccf_004FACCF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4face5
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x4fada0
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x4fad29
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 0F BE 55 14: movsx edx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x14
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 DD 22 F9 FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x4fad1e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 29 FF FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x4fada0
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB BC: jmp 0x4face5
        __asm _emit 0xeb
        __asm _emit 0xbc
        ; Exact mapped bytes 0F BE 55 14: movsx edx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x14
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A9 22 F9 FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0F: jne 0x4fad52
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 09: jmp 0x4fad5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 11: jge 0x4fad78
        __asm _emit 0x7d
        __asm _emit 0x11
        push 60h
        push 5c6da4h
        ; Exact mapped bytes E8 8D 9C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fad78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4fad61
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 34 FF FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 88 E2 FA FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
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
