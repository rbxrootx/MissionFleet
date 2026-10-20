// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005E200 .. +0x216 bytes.
extern "C" __declspec(naked) void FUN_1005e200_1005E200() {
    __asm {
        sub esp, 1ch
        mov eax, dword ptr [ecx + 0d0ch]
        push ebx
        push ebp
        push esi
        mov edx, dword ptr [eax + 0b4ch]
        xor ebp, ebp
        push edi
        mov edi, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 64h]
        mov edx, 0c6h
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 10h], ebp
        lea eax, [eax + eax*4]
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 14h], 9cch
        mov dword ptr [esp + 28h], edx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        ; Exact mapped bytes 66 81 64 24 1C F0 FF: and word ptr [esp + 0x1c], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes EB 04: jmp 0x1005e256
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [ecx + 0d0ch]
        mov ecx, dword ptr [esp + 14h]
        mov ecx, dword ptr [ecx + eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x1005e3e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 0b4ch]
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 1C 16: mov bx, word ptr [esi + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x16
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        mov ecx, dword ptr [esp + 14h]
        sub ebx, edx
        xor esi, esi
        mov ecx, dword ptr [ecx + eax]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1005e293
        __asm _emit 0x74
        __asm _emit 0x07
        mov cl, byte ptr [ecx]
        and ecx, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1005e295
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        and ecx, 0ffffh
        sub ecx, 5
        ; Exact mapped bytes 74 75: je 0x1005e315
        __asm _emit 0x74
        __asm _emit 0x75
        dec ecx
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x1005e3e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + ebp*8 + 0a4ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x1005e3e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 24h]
        mov esi, dword ptr [esp + 10h]
        imul edx, edi
        add esi, edx
        xor edx, edx
        mov dword ptr [esp + 10h], esi
        mov esi, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 8B 54 06 80: mov dx, word ptr [esi + eax - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x80
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 1E: mov ax, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1e
        xor edx, 0aah
        add edx, edi
        imul edx, eax
        cmp ebx, edx
        ; Exact mapped bytes 0F 8C FB 00 00 00: jl 0x1005e3e5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 24h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8C EB 00 00 00: jl 0x1005e3e5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        push 1
        push edi
        push 0
        push ebp
        push edx
        push 0ch
        ; Exact mapped bytes E8 40 EE FF FF: call 0x1005d150
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x1005e3e5
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + ebp*8 + 0a4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 52: je 0x1005e372
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ecx + 24h]
        mov esi, dword ptr [esp + 10h]
        imul edx, edi
        add esi, edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 10h], esi
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 02 80: mov si, word ptr [edx + eax - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x80
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 1E: mov ax, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1e
        xor esi, 0aah
        add esi, edi
        imul esi, eax
        cmp ebx, esi
        ; Exact mapped bytes 7C 22: jl 0x1005e372
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 24h]
        cmp eax, ecx
        ; Exact mapped bytes 7C 16: jl 0x1005e372
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        push 1
        push edi
        push 0
        push ebp
        push edx
        push 0bh
        ; Exact mapped bytes E8 DE ED FF FF: call 0x1005d150
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [eax + 0d0ch]
        mov eax, dword ptr [ecx + ebp*8 + 0a50h]
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x1005e3e5
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [eax + 24h]
        mov ebp, dword ptr [esp + 10h]
        imul edx, edi
        add ebp, edx
        xor edx, edx
        mov dword ptr [esp + 10h], ebp
        mov ebp, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 8B 54 29 82: mov dx, word ptr [ecx + ebp - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x82
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        xor edx, 0aah
        add edx, edi
        imul edx, ecx
        add edx, esi
        cmp ebx, edx
        ; Exact mapped bytes 7C 28: jl 0x1005e3e1
        __asm _emit 0x7c
        __asm _emit 0x28
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 24h]
        cmp eax, edx
        ; Exact mapped bytes 7C 1C: jl 0x1005e3e1
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov ebp, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        push 1
        push edi
        push 1
        push ebp
        push eax
        push 0bh
        ; Exact mapped bytes E8 71 ED FF FF: call 0x1005d150
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x1005e3e5
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 14h]
        add edx, 2
        inc ebp
        add ecx, 4
        cmp edx, 106h
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 8C 46 FE FF FF: jl 0x1005e252
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
