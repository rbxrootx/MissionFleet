// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005033C3 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_005033c3_005033C3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7A CA FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5033f4
        __asm _emit 0x75
        __asm _emit 0x14
        push 3aeh
        push 5c6db0h
        ; Exact mapped bytes E8 11 16 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5033f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5033cf
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1F 4D 03 00: call 0x538125
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 14 4C 03 00: call 0x538031
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 BF D5 FA FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 B2 D5 FA FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 94 D5 FA FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 87 D5 FA FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
