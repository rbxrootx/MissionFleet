// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A96E0 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_585a96e0_585A96E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 EC B2 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 CF B2 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 B6 B2 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 95 B2 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 1c4h
        ; Exact mapped bytes 74 14: je 0x585a9775
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 8], 1ebh
        ; Exact mapped bytes 74 0B: je 0x585a9775
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 20ah
        ; Exact mapped bytes 74 02: je 0x585a9775
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0A: jmp 0x585a977f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x585a9805
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 74 07: je 0x585a978c
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 79: jmp 0x585a9805
        __asm _emit 0xeb
        __asm _emit 0x79
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 42 B2 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb2
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 5
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 5
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 45 63 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x63
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2C: je 0x585a9800
        __asm _emit 0x74
        __asm _emit 0x2c
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 EB FF FF: call 0x585a8320
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x585a9800
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 07 DA F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xda
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 78h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 74 F5 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xf2
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x585a9805
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
