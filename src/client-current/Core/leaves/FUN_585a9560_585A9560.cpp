// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A9560 .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_585a9560_585A9560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 6C B4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb4
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
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 4F B4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb4
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
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 36 B4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb4
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
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 15 B4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 03 B4 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb4
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 88 5C 03 00 00: movzx cx, byte ptr [eax + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        test edx, edx
        ; Exact mapped bytes 7F 0A: jg 0x585a95fb
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x585a96d0
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2D DB F2 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 30 F5 FF: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 C2 EE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x585a96cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DB 64 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x585a96cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C0 64 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 9D F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9d
        __asm _emit 0xf1
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
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1ch], ecx
        movzx edx, word ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 87 89 1A 00: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x89
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x585a96cb
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 77 64 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F8 8A 1A 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8a
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x585a96cb
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes E8 3F DB F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 271ch
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A9 F6 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xf2
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x585a96d0
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
