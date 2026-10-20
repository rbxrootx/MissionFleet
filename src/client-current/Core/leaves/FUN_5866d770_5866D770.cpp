// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866D770 .. +0x21F bytes.
extern "C" __declspec(naked) void FUN_5866d770_5866D770() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888968dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D7 71 14 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 588afd6ch
        mov ecx, 44ch
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 4A 6C: mov word ptr [edx + 0x6c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x6c
        mov eax, 47eh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 41 6E: mov word ptr [ecx + 0x6e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x6e
        mov edx, 474h
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 50 70: mov word ptr [eax + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x70
        push 54h
        ; Exact mapped bytes E8 10 38 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 40: je 0x5866d844
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 51 6C: mov dx, word ptr [ecx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        push 206h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 73 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x73
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        movzx eax, word ptr [ebp - 0eh]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E1 4A E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5866d84b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 7ch], ecx
        push 54h
        ; Exact mapped bytes E8 9F 37 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x37
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 2C: je 0x5866d8a1
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BF 42 6C: movsx eax, word ptr [edx + 0x6c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x6c
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10h
        push edx
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 84 4A E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866d8a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 80h], eax
        push 0fch
        ; Exact mapped bytes E8 3C 37 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x37
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x5866d90d
        __asm _emit 0x74
        __asm _emit 0x35
        push 22h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 71 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x71
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6eh
        push edx
        push 5
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 68 D0 14 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5866d914
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 40h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 44h], eax
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 73 7C 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 6eh]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 2A 85 E1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 5ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
