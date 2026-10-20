// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007CE20 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_1007ce20_1007CE20() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 74 75: je 0x1007cea0
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 48h]
        shr ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 8D DE 07 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x1007ce65
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 198h]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 EB 4F 07 00: call 0x100f1e40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d40h]
        ; Exact mapped bytes E8 0B 90 07 00: call 0x100f5e70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 28h
        ; Exact mapped bytes 7E 12: jle 0x1007ce85
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1007ce85
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x1007ce87
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 58h], 0
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        ; Exact mapped bytes 66 83 7C 24 0C 00: cmp word ptr [esp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x1007cec2
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 12eh
        ; Exact mapped bytes E8 EE 0B FA FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
