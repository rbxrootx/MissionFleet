// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878DDA0 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_5878dda0_5878DDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 74 05: je 0x5878ddc5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x5878dea7
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 81 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x81
        __asm _emit 0xcf
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 17 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0xd1
        __asm _emit 0xff
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 7F CF FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1F 69 F9 FF: call 0x58724720
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 93 F9 FF: call 0x587271a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 56 58 00 00: call 0x58793680
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 4B 2D 00 00: call 0x58790b80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 40 2D 00 00: call 0x58790b80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 1
        ; Exact mapped bytes 75 19: jne 0x5878de66
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 25 E2 FF: call 0x585b03d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7B 6F F8 FF: call 0x58714de0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes E8 CC 3D 00 00: call 0x58791c40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 6B CF FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 8B 15 00 06 96 58: mov edx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
