// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438A90 .. +0x272 bytes.
extern "C" __declspec(naked) void FUN_00438a90_00438A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        mov dword ptr [ebp - 90h], ecx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x438ac2
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 E1 D2 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 0B: jae 0x438aec
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 8]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 09: jmp 0x438af5
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [ecx]
        mov ecx, 0fffffffeh
        sub ecx, eax
        cmp edx, ecx
        ; Exact mapped bytes 72 0D: jb 0x438b3d
        __asm _emit 0x72
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 C6 D4 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 80h], edx
        mov al, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], al
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 78h], edx
        mov al, byte ptr [ebp - 34h]
        mov byte ptr [ebp - 30h], al
        mov ecx, dword ptr [ebp - 7ch]
        sub ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 84h]
        sub edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8C B6 00 00 00: jl 0x438c77
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 12: jmp 0x438be7
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 74 0C: je 0x438bfb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 38h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB DA: jmp 0x438bd5
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 80h]
        add ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        cmp edx, dword ptr [ebp - 84h]
        ; Exact mapped bytes 74 66: je 0x438c75
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 84h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 0B: jne 0x438c35
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 98h], edx
        ; Exact mapped bytes EB 1D: jmp 0x438c52
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 17 D0 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 84h]
        sub eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 7F: jmp 0x438cf6
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 2ch], edx
        mov al, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 50h], al
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes EB 12: jmp 0x438cb2
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 58h]
        add edx, 1
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 60h]
        add eax, 1
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 58h]
        cmp ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 74 0C: je 0x438cc6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ebp - 58h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB DA: jmp 0x438ca0
        __asm _emit 0xeb
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 70h], eax
        mov cl, byte ptr [ebp - 6ch]
        mov byte ptr [ebp - 68h], cl
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 DA F5 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 90h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
