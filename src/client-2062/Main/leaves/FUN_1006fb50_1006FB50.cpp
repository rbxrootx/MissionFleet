// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006FB50 .. +0x278 bytes.
extern "C" __declspec(naked) void FUN_1006fb50_1006FB50() {
    __asm {
        push -1
        push 1016f66bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 0ch], ebp
        mov eax, dword ptr [esi + 215fch]
        test eax, eax
        ; Exact mapped bytes 0F 8E 33 02 00 00: jle 0x1006fdb7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 18h], ebx
        mov eax, dword ptr [esi + 21704h]
        add eax, ebx
        mov ecx, dword ptr [eax + 98h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x1006fd98
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 104cch]
        mov ecx, dword ptr [eax + 8ch]
        cmp edx, ecx
        ; Exact mapped bytes 7F 0E: jg 0x1006fbc0
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 94h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D8 01 00 00: je 0x1006fd98
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 90h]
        cmp edx, ecx
        ; Exact mapped bytes 7C 08: jl 0x1006fbd2
        __asm _emit 0x7c
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 85 C6 01 00 00: jne 0x1006fd98
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 21708h]
        mov edx, dword ptr [ecx + ebp*4]
        lea ecx, [ecx + ebp*4]
        test edx, edx
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x1006fd44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0a0h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [esi + 21704h]
        add eax, ebx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 48 01 00 00: jne 0x1006fd49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 0cch]
        mov eax, dword ptr [edi]
        add edi, 4
        test eax, eax
        ; Exact mapped bytes 0F 86 35 01 00 00: jbe 0x1006fd49
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        mov ebp, edi
        add edi, 8ch
        mov ebx, edi
        push 66f4h
        add edi, 0ach
        ; Exact mapped bytes E8 6E CB 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes 74 22: je 0x1006fc65
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebx + 44h]
        push 40h
        shr edx, 1
        and edx, 1fh
        push esi
        push esi
        push esi
        lea ecx, [edx + edx*4]
        push esi
        push esi
        push esi
        lea edx, [edi + ecx*2]
        mov ecx, eax
        push edx
        push edi
        push ebx
        ; Exact mapped bytes E8 6D C7 F9 FF: call 0x1000c3d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        push ebp
        mov ecx, esi
        mov dword ptr [esp + 30h], 0ffffffffh
        ; Exact mapped bytes E8 BB CF F9 FF: call 0x1000cc30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xcf
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 FF C4 FB FF: call 0x1002c180
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e74h]
        mov ecx, dword ptr [eax + 64h]
        mov dl, byte ptr [eax + 2]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr [ebx + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        push 0
        mov ecx, dword ptr [ecx*4 + 101ace60h]
        and dl, 1fh
        push 0
        push edx
        push eax
        ; Exact mapped bytes E8 33 C0 FB FF: call 0x1002bce0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        xor edx, edx
        mov cl, byte ptr [eax + 330h]
        mov al, byte ptr [esi + 330h]
        cmp cl, al
        mov eax, dword ptr [ebp + 4]
        mov ecx, dword ptr [ebp]
        push eax
        sete dl
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes E8 F4 EF 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        push -1
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 CA E1 07 00: call 0x100edeb0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 13 E0 07 00: call 0x100edd00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        mov ecx, esi
        push ebp
        ; Exact mapped bytes E8 97 EA 07 00: call 0x100ee790
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1034h]
        push ebp
        ; Exact mapped bytes E8 3B 77 02 00: call 0x10097440
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 44h]
        shr eax, 1
        and eax, 1fh
        lea edx, [eax + eax*4]
        xor eax, eax
        mov al, byte ptr [ebx + 0a4h]
        lea edx, [edi + edx*2]
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, dword ptr [esp + 10h]
        dec eax
        lea edi, [edx + ecx*4]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 85 E2 FE FF FF: jne 0x1006fc18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 20h]
        ; Exact mapped bytes EB 05: jmp 0x1006fd49
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 7E 03: jle 0x1006fd49
        __asm _emit 0x7e
        __asm _emit 0x03
        dec edx
        mov dword ptr [ecx], edx
        mov eax, dword ptr [esi + 21704h]
        mov edx, dword ptr [ebx + eax + 98h]
        lea eax, [ebx + eax + 98h]
        dec edx
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esi + 21704h]
        lea eax, [ebx + ecx]
        mov ecx, dword ptr [ebx + ecx + 98h]
        test ecx, ecx
        ; Exact mapped bytes 75 24: jne 0x1006fd98
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [eax + 0cch]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x1006fd98
        __asm _emit 0x74
        __asm _emit 0x1a
        push eax
        ; Exact mapped bytes E8 00 CA 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 21704h]
        add esp, 4
        mov dword ptr [ebx + edx + 0cch], 0
        mov eax, dword ptr [esi + 215fch]
        inc ebp
        add ebx, 0d4h
        cmp ebp, eax
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 0F 8C D7 FD FF FF: jl 0x1006fb8c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        mov ecx, dword ptr [esp + 1ch]
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        ret
    }
}
