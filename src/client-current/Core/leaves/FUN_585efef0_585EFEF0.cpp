// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EFEF0 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_585efef0_585EFEF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        movzx eax, word ptr [ebp + 8]
        cmp dword ptr [eax*4 + 58948c60h], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x585f001f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        movzx eax, word ptr [edx + 2]
        test eax, eax
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x585f001f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, word ptr [ecx + 204h]
        cmp edx, 8
        ; Exact mapped bytes 74 13: je 0x585eff4e
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 204h]
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x585f001f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 14h]
        push edx
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 7A 97 F4 FF: call 0x585396e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        movzx edx, word ptr [ebp - 0ah]
        cmp edx, 1eh
        ; Exact mapped bytes 0F 8F A9 00 00 00: jg 0x585f001f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x585f001f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 0eh]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x585f001f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588adca4h
        ; Exact mapped bytes E8 58 20 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 03 0F 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        push 588adcc4h
        ; Exact mapped bytes E8 34 20 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        push 0ffh
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 03 0F 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        push 588adcf8h
        ; Exact mapped bytes E8 10 20 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 03 0F 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        push 588add2ch
        ; Exact mapped bytes E8 EC 1F F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 03 0F 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 27 10 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
