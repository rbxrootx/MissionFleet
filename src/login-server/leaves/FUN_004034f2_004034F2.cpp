// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004034F2 .. +0x264 bytes.
extern "C" __declspec(naked) void FUN_004034f2_004034F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        mov dword ptr [ebp - 10ch], ecx
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 180h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 190h], 0ffffffffh
        lea edx, [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10ch]
        add eax, 180h
        push eax
        push 4
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 B5 E3 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        lea eax, [ebp - 4]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 190h
        push ecx
        push 4
        push 2
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 88 E3 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 44887ch
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea ecx, [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 47 E3 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 2B E3 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x40374e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 180h], -1
        ; Exact mapped bytes 0F 8E 68 01 00 00: jle 0x40374e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 190h], -1
        ; Exact mapped bytes 0F 8E 55 01 00 00: jle 0x40374e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 E1 E2 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [edx + 18ch], 0ffffffffh
        lea eax, [ebp - 4]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        add ecx, 18ch
        push ecx
        push 4
        push 1
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 BA E2 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 4488bch
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea ecx, [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 79 E2 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 5D E2 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x40374e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 18ch], -1
        ; Exact mapped bytes 0F 8E 9A 00 00 00: jle 0x40374e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 26 E2 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 7E 79: jle 0x40374e
        __asm _emit 0x7e
        __asm _emit 0x79
        push 0
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 18ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 4488f0h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 20h
        push -3
        lea ecx, [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 C3 E1 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 A5 E1 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x403750
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
