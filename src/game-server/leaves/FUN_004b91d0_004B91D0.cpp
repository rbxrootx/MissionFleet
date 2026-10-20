// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B91D0 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_004b91d0_004B91D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes 83 3D 68 02 5E 00 00: cmp dword ptr [0x5e0268], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4b91e4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 9C 5B FF FF: call 0x4aed80
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        push 104h
        push 5deed8h
        push 0
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 88 ED 5D 00 D8 EE 5D 00: mov dword ptr [0x5ded88], 0x5deed8
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0xd8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 04 5E 00: mov eax, dword ptr [0x5e04a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x4b9217
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 15 88 ED 5D 00: mov edx, dword ptr [0x5ded88]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 08: jmp 0x4b921f
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes A1 A8 04 5E 00: mov eax, dword ptr [0x5e04a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 76 00 00 00: call 0x4b92b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        push 80h
        push 58c93ch
        push 2
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 D8 0F FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0A: jne 0x4b926e
        __asm _emit 0x75
        __asm _emit 0x0a
        push 8
        ; Exact mapped bytes E8 D5 3A FF FF: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 23 00 00 00: call 0x4b92b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        ; Exact mapped bytes A3 6C ED 5D 00: mov dword ptr [0x5ded6c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D 70 ED 5D 00: mov dword ptr [0x5ded70], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
