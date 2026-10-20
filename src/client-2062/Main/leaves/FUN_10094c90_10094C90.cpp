// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10094C90 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_10094c90_10094C90() {
    __asm {
        push -1
        push 10170aabh
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
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0b0h
        ; Exact mapped bytes E8 E9 7A 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 78h], ebx
        ; Exact mapped bytes 74 1F: je 0x10094ce7
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        mov ecx, dword ptr [esi + 9ch]
        push edx
        push ecx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 CD 01 F8 FF: call 0x10014eb0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10094ce9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 80h]
        lea eax, [esp + 11h]
        push edx
        push eax
        mov dword ptr [esp + 80h], 0ffffffffh
        mov byte ptr [esp + 18h], bl
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 10h]
        ; Exact mapped bytes 66 89 5C 24 2A: mov word ptr [esp + 0x2a], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2a
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 30h], bl
        mov dword ptr [esp + 48h], ebx
        mov dword ptr [esp + 50h], ebx
        mov dword ptr [esp + 54h], ebx
        mov dword ptr [esp + 5ch], ebx
        ; Exact mapped bytes 66 89 5C 24 58: mov word ptr [esp + 0x58], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 09 F8 FF: call 0x10015710
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 67 24 FF 7F: and word ptr [edi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 75 0E: jne 0x10094d50
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [esi + 6ch], edi
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 0ech], edi
        ; Exact mapped bytes EB 0F: jmp 0x10094d5f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [esi + 70h]
        mov dword ptr [edx + 54h], edi
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [edi + 50h], eax
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes 66 FF 86 DE 00 00 00: inc word ptr [esi + 0xde]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 62 03 00 00: call 0x100950d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 70h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 70h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
