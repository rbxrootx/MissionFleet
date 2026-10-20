// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AEDA0 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_584aeda0_584AEDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 0E 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x584aeebb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 0E 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 5C FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x584aeebb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 170h]
        shr ecx, 4
        and ecx, 1
        ; Exact mapped bytes 75 50: jne 0x584aee3c
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 2]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0c8h
        ; Exact mapped bytes 74 14: je 0x584aee13
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 8], 1c4h
        ; Exact mapped bytes 74 0B: je 0x584aee13
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 1ebh
        ; Exact mapped bytes 74 02: je 0x584aee13
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1F: jmp 0x584aee32
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 D8 83 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 4ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 9F 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x584aeec0
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x584aeec0
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 2]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 1bch
        ; Exact mapped bytes 7F 2E: jg 0x584aee7d
        __asm _emit 0x7f
        __asm _emit 0x2e
        cmp dword ptr [ebp - 4], 1bch
        ; Exact mapped bytes 74 47: je 0x584aee9f
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        sub eax, 0c8h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 97h
        ; Exact mapped bytes 77 4F: ja 0x584aeebb
        __asm _emit 0x77
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 584aeecch]
        ; Exact mapped bytes FF 24 95 C4 EE 4A 58: jmp dword ptr [edx*4 + 0x584aeec4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0x4a
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        sub eax, 1bdh
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 69h
        ; Exact mapped bytes 77 2D: ja 0x584aeebb
        __asm _emit 0x77
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 584aef6ch]
        ; Exact mapped bytes FF 24 95 64 EF 4A 58: jmp dword ptr [edx*4 + 0x584aef64]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xef
        __asm _emit 0x4a
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 83 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 4ch
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B9 9E 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x584aeec0
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
