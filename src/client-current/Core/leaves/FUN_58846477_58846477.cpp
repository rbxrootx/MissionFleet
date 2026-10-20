// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846477 .. +0x1DE bytes.
extern "C" __declspec(naked) void FUN_58846477_58846477() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        and dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 83 3D EC 93 96 58 00: cmp dword ptr [0x589693ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x58846495
        __asm _emit 0x75
        __asm _emit 0x08
        push 0
        ; Exact mapped bytes E8 D7 07 00 00: call 0x58846c6b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 44 01 20: movsx eax, byte ptr [ecx + eax + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x588464c0
        __asm _emit 0x75
        __asm _emit 0x19
        push 589693f0h
        push 80h
        mov eax, dword ptr [ebp + 8]
        add eax, 20h
        push eax
        ; Exact mapped bytes E8 D3 12 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 A0 00 00 00: movsx eax, byte ptr [ecx + eax + 0xa0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x588464f0
        __asm _emit 0x75
        __asm _emit 0x1b
        push 58969470h
        push 80h
        mov eax, dword ptr [ebp + 8]
        add eax, 0a0h
        push eax
        ; Exact mapped bytes E8 A3 12 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 20 01 00 00: movsx eax, byte ptr [ecx + eax + 0x120]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x5884651d
        __asm _emit 0x75
        __asm _emit 0x18
        push 589694f0h
        push 40h
        mov eax, dword ptr [ebp + 8]
        add eax, 120h
        push eax
        ; Exact mapped bytes E8 76 12 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 60 01 00 00: movsx eax, byte ptr [ecx + eax + 0x160]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x5884654a
        __asm _emit 0x75
        __asm _emit 0x18
        push 58969524h
        push 20h
        mov eax, dword ptr [ebp + 8]
        add eax, 160h
        push eax
        ; Exact mapped bytes E8 49 12 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 80 01 00 00: movsx eax, byte ptr [ecx + eax + 0x180]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58846574
        __asm _emit 0x74
        __asm _emit 0x15
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 A0 01 00 00: movsx eax, byte ptr [ecx + eax + 0x1a0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x588465ac
        __asm _emit 0x75
        __asm _emit 0x38
        and dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8], 20h
        lea eax, [ebp - 8]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 180h
        push eax
        ; Exact mapped bytes FF 15 08 44 89 58: call dword ptr [0x58894408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 20h
        lea eax, [ebp - 8]
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1a0h
        push eax
        ; Exact mapped bytes FF 15 04 40 89 58: call dword ptr [0x58894004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 04 01: movsx eax, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        test eax, eax
        ; Exact mapped bytes 75 73: jne 0x58846630
        __asm _emit 0x75
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 4]
        add eax, 8ch
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 9ah]
        push eax
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 98h]
        push eax
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 96h]
        push eax
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 94h]
        push eax
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 92h]
        push eax
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 8eh]
        push eax
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 8ch]
        push eax
        push 588f3024h
        ; Exact mapped bytes E8 30 5D FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 65 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x65
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 24h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 1c0h
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1e0h
        push eax
        ; Exact mapped bytes E8 59 9E FF FF: call 0x588404a2
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
