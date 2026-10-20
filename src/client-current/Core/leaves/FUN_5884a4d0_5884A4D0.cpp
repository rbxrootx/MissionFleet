// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884A4D0 .. +0x19D bytes.
extern "C" __declspec(naked) void FUN_5884a4d0_5884A4D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi + 1af2ch]
        mov byte ptr [esi + eax + 1f2ch], bl
        xor eax, eax
        inc dword ptr [esi + 1af2ch]
        test edi, edi
        ; Exact mapped bytes 75 0A: jne 0x5884a502
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 FF 44 9E 14: inc word ptr [esi + ebx*4 + 0x14]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x9e
        __asm _emit 0x14
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x5884a5a6
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec edi
        mov ecx, 7efah
        ; Exact mapped bytes 66 3B F9: cmp di, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 73 30: jae 0x5884a53d
        __asm _emit 0x73
        __asm _emit 0x30
        mov ecx, 0ffh
        ; Exact mapped bytes 66 3B D9: cmp bx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 77 26: ja 0x5884a53d
        __asm _emit 0x77
        __asm _emit 0x26
        cmp edi, 100h
        ; Exact mapped bytes 7D 09: jge 0x5884a528
        __asm _emit 0x7d
        __asm _emit 0x09
        mov cl, byte ptr [esi + edi + 1c3dh]
        ; Exact mapped bytes EB 0E: jmp 0x5884a536
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, edi
        sar eax, 7
        mov cl, byte ptr [eax + esi + 1d3dh]
        xor eax, eax
        cmp cl, 1eh
        ; Exact mapped bytes 73 02: jae 0x5884a53d
        __asm _emit 0x73
        __asm _emit 0x02
        mov al, 1
        push 588c245ch
        push eax
        push esi
        ; Exact mapped bytes E8 47 F0 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [esi + ebx + 1b3dh]
        add esp, 0ch
        ; Exact mapped bytes 66 FF 84 86 18 04 00 00: inc word ptr [esi + eax*4 + 0x418]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 100h
        ; Exact mapped bytes 7D 09: jge 0x5884a56d
        __asm _emit 0x7d
        __asm _emit 0x09
        mov al, byte ptr [esi + edi + 1c3dh]
        ; Exact mapped bytes EB 0C: jmp 0x5884a579
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, edi
        sar eax, 7
        mov al, byte ptr [eax + esi + 1d3dh]
        movzx eax, al
        ; Exact mapped bytes 66 FF 84 86 08 09 00 00: inc word ptr [esi + eax*4 + 0x908]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1af30h]
        ; Exact mapped bytes 66 89 BC 46 2C 9F 00 00: mov word ptr [esi + eax*2 + 0x9f2c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0x2c
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 1af39h]
        inc dword ptr [esi + 1af30h]
        or byte ptr [esi + 1af38h], al
        xor eax, eax
        shl byte ptr [esi + 1af39h], 1
        test byte ptr [esi + 1af2ch], 7
        ; Exact mapped bytes 75 24: jne 0x5884a5d9
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1af34h]
        mov al, byte ptr [esi + 1af38h]
        mov byte ptr [esi + ecx + 19f2ch], al
        inc dword ptr [esi + 1af34h]
        xor eax, eax
        ; Exact mapped bytes 66 C7 86 38 AF 01 00 00 01: mov word ptr [esi + 0x1af38], 0x100
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        cmp dword ptr [esi + 4], 2
        ; Exact mapped bytes 7E 6E: jle 0x5884a64d
        __asm _emit 0x7e
        __asm _emit 0x6e
        mov edi, dword ptr [esi + 1af2ch]
        test edi, 0fffh
        ; Exact mapped bytes 75 60: jne 0x5884a64d
        __asm _emit 0x75
        __asm _emit 0x60
        mov ebx, dword ptr [esi + 6af84h]
        mov edx, edi
        shl edx, 3
        sub ebx, dword ptr [esi + 6af74h]
        mov dword ptr [ebp + 10h], ebx
        lea ebx, [esi + 908h]
        mov esi, 588c1e88h
        mov ecx, dword ptr [esi]
        add esi, 4
        movzx eax, word ptr [ebx]
        add ecx, 5
        imul ecx, eax
        lea ebx, [ebx + 4]
        add edx, ecx
        cmp esi, 588c1f00h
        ; Exact mapped bytes 7C E5: jl 0x5884a60c
        __asm _emit 0x7c
        __asm _emit 0xe5
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 10h]
        shr edi, 1
        cmp dword ptr [esi + 1af30h], edi
        ; Exact mapped bytes 73 14: jae 0x5884a64b
        __asm _emit 0x73
        __asm _emit 0x14
        shr edx, 2
        and ebx, 0fffffffeh
        and edx, 3ffffffeh
        xor eax, eax
        cmp edx, ebx
        ; Exact mapped bytes 72 1E: jb 0x5884a667
        __asm _emit 0x72
        __asm _emit 0x1e
        ; Exact mapped bytes EB 02: jmp 0x5884a64d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp dword ptr [esi + 1af2ch], 7fffh
        ; Exact mapped bytes 74 0C: je 0x5884a665
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [esi + 1af30h], 8000h
        ; Exact mapped bytes 75 03: jne 0x5884a668
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        inc eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
