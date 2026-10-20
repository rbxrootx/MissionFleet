// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438D10 .. +0x2EB bytes.
extern "C" __declspec(naked) void FUN_00438d10_00438D10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        mov dword ptr [ebp - 9ch], ecx
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 77 10: ja 0x438d45
        __asm _emit 0x77
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 14h], edx
        ; Exact mapped bytes 76 0D: jbe 0x438d52
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 51 D0 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 0B: jae 0x438d7c
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 0ch]
        mov dword ptr [ebp - 0a0h], ecx
        ; Exact mapped bytes EB 09: jmp 0x438d85
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 73 0B: jae 0x438dba
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 10h]
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes EB 09: jmp 0x438dc3
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp + 18h]
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp - 4]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp - 8]
        cmp edx, eax
        ; Exact mapped bytes 72 0D: jb 0x438e01
        __asm _emit 0x72
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 02 D2 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8ch], ecx
        mov dl, byte ptr [ebp - 2ch]
        mov byte ptr [ebp - 28h], dl
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 84h], ecx
        mov dl, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 3ch], dl
        mov eax, dword ptr [ebp - 88h]
        sub eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 90h]
        sub ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 8C C5 00 00 00: jl 0x438f64
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 12: jmp 0x438ece
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 74 0C: je 0x438ee2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 44h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB DA: jmp 0x438ebc
        __asm _emit 0xeb
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8ch]
        add eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        cmp ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes 74 66: je 0x438f5f
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp - 90h]
        add eax, 1
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 75 0B: jne 0x438f1f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0a8h], ecx
        ; Exact mapped bytes EB 1D: jmp 0x438f3c
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 2D CD 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 90h]
        sub edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x438fef
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 38h], ecx
        mov dl, byte ptr [ebp - 60h]
        mov byte ptr [ebp - 5ch], dl
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 12: jmp 0x438fa8
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 64h]
        add ecx, 1
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 6ch]
        add edx, 1
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 64h]
        cmp eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes 74 0C: je 0x438fbc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ebp - 64h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB DA: jmp 0x438f96
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 7ch], edx
        mov al, byte ptr [ebp - 78h]
        mov byte ptr [ebp - 74h], al
        lea ecx, [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 E1 F2 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 9ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
