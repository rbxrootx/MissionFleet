// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403756 .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_00403756_00403756() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
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
        ; Exact mapped bytes E8 51 E1 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe1
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
        ; Exact mapped bytes E8 24 E1 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe1
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
        push 448930h
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
        ; Exact mapped bytes E8 E3 E0 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe0
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
        ; Exact mapped bytes E8 C7 E0 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 2E 02 00 00: je 0x403a65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 180h], -1
        ; Exact mapped bytes 0F 8E 1B 02 00 00: jle 0x403a65
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 190h], -1
        ; Exact mapped bytes 0F 8E 08 02 00 00: jle 0x403a65
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 7D E0 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe0
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
        ; Exact mapped bytes E8 56 E0 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 448970h
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
        ; Exact mapped bytes E8 15 E0 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe0
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
        ; Exact mapped bytes E8 F9 DF 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x4039a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 18ch], -1
        ; Exact mapped bytes 0F 8E 8E 00 00 00: jle 0x4039a6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 C2 DF 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 14h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 190h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 18ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 4489a4h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 20h
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 69 DF 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 4B DF 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x403a53
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x4039bb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 13: jmp 0x4039ce
        __asm _emit 0xeb
        __asm _emit 0x13
        push 4489e4h
        ; Exact mapped bytes E8 DB 08 00 00: call 0x4042a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 7]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 6]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5]
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 4489f8h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 24h
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 BF DE 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 9D DE 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 26: jmp 0x403a79
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 87 DE 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 75 DE 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
