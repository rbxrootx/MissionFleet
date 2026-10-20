// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE960 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_004fe960_004FE960() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d6f9h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 638254h
        mov dword ptr [ebp - 4], 0
        push 0b4h
        push 6756ach
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 BC B8 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8B 0C 00 00: call 0x4ff637
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 74 0F: je 0x4fe9c4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 FC 45 01 00: call 0x512fc0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0F: je 0x4fe9f8
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D 1C 00 00: call 0x500660
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4fe9ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 32: je 0x4fea3a
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 14: jne 0x4fea25
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c4h
        push 6756ach
        ; Exact mapped bytes E8 20 A3 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fea25
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fea08
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        ; Exact mapped bytes E8 E9 88 F6 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E8 36 17 04 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 1A: jne 0x4fea6a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 108h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], 0ffffffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E6 1B FD FF: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
