// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004030F2 .. +0x400 bytes.
extern "C" __declspec(naked) void FUN_004030f2_004030F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
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
        ; Exact mapped bytes E8 C4 E7 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        push 4486fch
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
        ; Exact mapped bytes E8 83 E7 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe7
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
        ; Exact mapped bytes E8 67 E7 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, 64h
        ; Exact mapped bytes 0F 84 41 03 00 00: je 0x4034d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 180h], -1
        ; Exact mapped bytes 0F 8E 2E 03 00 00: jle 0x4034d8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 30 E7 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 10ch]
        cmp dword ptr [ecx + 180h], eax
        ; Exact mapped bytes 0F 85 37 02 00 00: jne 0x40340d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        push 0
        push 448730h
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
        ; Exact mapped bytes E8 E9 E6 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe6
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
        ; Exact mapped bytes E8 C7 E6 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ecx + 17ch], 0ffffffffh
        lea edx, [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10ch]
        add eax, 17ch
        push eax
        push 4
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 A1 E6 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 448768h
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 60 E6 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 44 E6 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        cmp edx, 64h
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x403408
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 17ch], -1
        ; Exact mapped bytes 0F 8E 3B 01 00 00: jle 0x403408
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 0D E6 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 17ch], 0
        ; Exact mapped bytes 7E 67: jle 0x403355
        __asm _emit 0x7e
        __asm _emit 0x67
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 17ch]
        sub ecx, 1
        push ecx
        push 44879ch
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 10h
        push -3
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 C3 E5 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 A1 E5 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 97 01 00 00: jmp 0x4034ec
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x40336a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 13: jmp 0x40337d
        __asm _emit 0xeb
        __asm _emit 0x13
        push 4487d4h
        ; Exact mapped bytes E8 2C 0F 00 00: call 0x4042a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 3]
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 2]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 17ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push 4487e4h
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 24h
        push -3
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 0D E5 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 EB E4 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x4034ec
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x4034c6
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x403422
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 13: jmp 0x403435
        __asm _emit 0xeb
        __asm _emit 0x13
        push 448828h
        ; Exact mapped bytes E8 74 0E 00 00: call 0x4042a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 3]
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 2]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 180h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        push 448838h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 28h
        push -3
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 4C E4 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe4
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
        ; Exact mapped bytes E8 2A E4 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 26: jmp 0x4034ec
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 14 E4 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 02 E4 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe4
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
