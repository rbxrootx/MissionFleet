// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AF0B0 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_584af0b0_584AF0B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 0B 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x584af1b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
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
        ; Exact mapped bytes E8 B9 0B 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 59 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x584af1b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
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
        cmp edx, 6
        ; Exact mapped bytes 74 13: je 0x584af111
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
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
        cmp edx, 7
        ; Exact mapped bytes 75 55: jne 0x584af166
        __asm _emit 0x75
        __asm _emit 0x55
        mov eax, 1
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + ecx + 198h]
        mov ecx, 1
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + edx + 198h]
        add eax, edx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [ebp + 10h]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 72 1C: jb 0x584af164
        __asm _emit 0x72
        __asm _emit 0x1c
        ; Exact mapped bytes E8 A3 80 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 3dh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 9C 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x584af1bc
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes EB 51: jmp 0x584af1b7
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 75 3E: jne 0x584af1b7
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, 1
        shl ecx, 3
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + ecx + 198h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 72 1C: jb 0x584af1b7
        __asm _emit 0x72
        __asm _emit 0x1c
        ; Exact mapped bytes E8 50 80 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 3eh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BD 9B 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x584af1bc
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
