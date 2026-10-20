// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004600EA .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004600ea_004600EA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 6B 05 0E 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0bh
        ; Exact mapped bytes E8 78 2C 0E 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 20 01 00 00: call 0x460230
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3E: je 0x460157
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 E5 00 00 00: call 0x460210
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 11: je 0x46014e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x460155
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB AB: jmp 0x460102
        __asm _emit 0xeb
        __asm _emit 0xab
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 6B 00 00 00: call 0x4601d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x46017d
        __asm _emit 0x75
        __asm _emit 0x14
        push 93h
        push 67ae70h
        ; Exact mapped bytes E8 C8 8B 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x46017d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x460157
        __asm _emit 0x75
        __asm _emit 0xd4
        push 0bh
        ; Exact mapped bytes E8 22 2D 0E 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2d
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
