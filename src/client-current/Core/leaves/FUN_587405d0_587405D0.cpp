// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587405D0 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_587405d0_587405D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC F6 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf6
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x587406e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
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
        ; Exact mapped bytes E8 99 F6 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 43 D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x43
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x587406e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 5E 96 58 00: cmp dword ptr [0x58965e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 50: jne 0x58740664
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 2]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0c8h
        ; Exact mapped bytes 74 14: je 0x5874063b
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 8], 1c4h
        ; Exact mapped bytes 74 0B: je 0x5874063b
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 1ebh
        ; Exact mapped bytes 74 02: je 0x5874063b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1F: jmp 0x5874065a
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 B0 6B D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 4ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 87 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x87
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x587406ea
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x587406ea
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 2]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1bch
        ; Exact mapped bytes 7F 2F: jg 0x587406a6
        __asm _emit 0x7f
        __asm _emit 0x2f
        cmp dword ptr [ebp - 4], 1bch
        ; Exact mapped bytes 74 49: je 0x587406c9
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 0c8h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 97h
        ; Exact mapped bytes 77 50: ja 0x587406e5
        __asm _emit 0x77
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 587406f8h]
        ; Exact mapped bytes FF 24 85 F0 06 74 58: jmp dword ptr [eax*4 + 0x587406f0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1bdh
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 69h
        ; Exact mapped bytes 77 2D: ja 0x587406e5
        __asm _emit 0x77
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 58740798h]
        ; Exact mapped bytes FF 24 85 90 07 74 58: jmp dword ptr [eax*4 + 0x58740790]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 6B D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 4ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8F 86 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x587406ea
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
