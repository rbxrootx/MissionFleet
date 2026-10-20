// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7520 .. +0x3C4 bytes.
extern "C" __declspec(naked) void FUN_585e7520_585E7520() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fbch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E9 D4 F9 FF: call 0x58584a30
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20fbch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 87 82 03 00 00: ja 0x585e78e0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 E4 78 5E 58: jmp dword ptr [eax*4 + 0x585e78e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x78
        __asm _emit 0x5e
        __asm _emit 0x58
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 20f40h], 258h
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 20f40h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 4], 5
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 20f40h], 12ch
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 4], 14h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 82 F4 0B 01 00: movss dword ptr [edx + 0x10bf4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 F0 02 00 00: jmp 0x585e78e0
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 20f40h], 258h
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 20f40h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx + 4], 1eh
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 20f40h], 12ch
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 20f40h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 4], 32h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 81 F4 0B 01 00: movss dword ptr [ecx + 0x10bf4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 68 02 00 00: jmp 0x585e78e0
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 20f40h], 2d0h
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 4], 3ch
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 20f40h], 168h
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 20f40h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx + 4], 64h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 80 F4 0B 01 00: movss dword ptr [eax + 0x10bf4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 E0 01 00 00: jmp 0x585e78e0
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 20f40h], 348h
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 20f40h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 4], 6eh
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 20f40h], 1a4h
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 4], 0a0h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 82 F4 0B 01 00: movss dword ptr [edx + 0x10bf4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x585e78e0
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 20f40h], 3c0h
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 20f40h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx + 4], 0b4h
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 20f40h], 1e0h
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 20f40h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 4], 0dch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 81 F4 0B 01 00: movss dword ptr [ecx + 0x10bf4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x585e78e0
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 20f40h], 438h
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 4], 0f0h
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 20f40h], 21ch
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 20f40h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx + 4], 12ch
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 80 F4 0B 01 00: movss dword ptr [eax + 0x10bf4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x585e78e0
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 20f40h], 4b0h
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 20f40h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 4], 190h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 81 F4 0B 01 00: movss dword ptr [ecx + 0x10bf4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
