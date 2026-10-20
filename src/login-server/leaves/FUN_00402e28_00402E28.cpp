// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402E28 .. +0x2CA bytes.
extern "C" __declspec(naked) void FUN_00402e28_00402E28() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        mov dword ptr [ebp - 10ch], ecx
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 180h], 0ffffffffh
        lea ecx, [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10ch]
        add edx, 180h
        push edx
        push 4
        push 1
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 8E EA 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 448618h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 4D EA 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 31 EA 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, 64h
        ; Exact mapped bytes 0F 84 1D 02 00 00: je 0x4030ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 180h], -1
        ; Exact mapped bytes 0F 8E 0A 02 00 00: jle 0x4030ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 FA E9 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 180h], 0
        ; Exact mapped bytes 74 07: je 0x402f08
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x4030ec
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 178h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 17ch], 0ffffffffh
        lea edx, [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10ch]
        add eax, 178h
        push eax
        push 4
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 AE E9 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe9
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
        add ecx, 17ch
        push ecx
        push 4
        push 2
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 81 E9 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 44864ch
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
        ; Exact mapped bytes E8 40 E9 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe9
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
        ; Exact mapped bytes E8 24 E9 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x4030ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 178h], -1
        ; Exact mapped bytes 0F 8E FD 00 00 00: jle 0x4030ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 17ch], -1
        ; Exact mapped bytes 0F 8E EA 00 00 00: jle 0x4030ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 DA E8 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [edx + 178h]
        cmp ecx, dword ptr [eax + 17ch]
        ; Exact mapped bytes 0F 8E BA 00 00 00: jle 0x4030ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 20h]
        push edx
        push 44868ch
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 10h
        push -3
        lea ecx, [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 88 E8 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 66 E8 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 17ch]
        add eax, 1
        push eax
        push 4486c4h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 10h
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 2B E8 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 09 E8 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4030ec
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
