// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445DE0 .. +0x25D bytes.
extern "C" __declspec(naked) void FUN_00445de0_00445DE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bfc5h
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
        sub esp, 98h
        mov dword ptr [ebp - 98h], ecx
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 98h]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 4], 0
        mov dl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], dl
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 90h], ecx
        mov dl, byte ptr [ebp - 2ch]
        mov byte ptr [ebp - 28h], dl
        mov eax, dword ptr [ebp - 94h]
        sub eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        mov edx, 0fffffffeh
        add edx, 1
        cmp dword ptr [ebp - 40h], edx
        ; Exact mapped bytes 0F 87 E1 00 00 00: ja 0x445f6a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 86 D7 00 00 00: jbe 0x445f6a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x445f2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 80h
        ; Exact mapped bytes 76 14: jbe 0x445eba
        __asm _emit 0x76
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 B1 65 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 63: jmp 0x445f1d
        __asm _emit 0xeb
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 685054h]
        mov dword ptr [ebp - 38h], edx
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 DB E3 FE FF: call 0x4342b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0C: je 0x445ef3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 0F: jmp 0x445f02
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 84 EA FE FF: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 AC E4 FE FF: call 0x4343c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 0a4h], edx
        ; Exact mapped bytes EB 0A: jmp 0x445f35
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 0D: jmp 0x445f77
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 8C 00 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 80h], edx
        mov al, byte ptr [ebp - 4ch]
        mov byte ptr [ebp - 44h], al
        mov cl, byte ptr [ebp - 50h]
        mov byte ptr [ebp - 48h], cl
        mov dl, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 54h], dl
        mov al, byte ptr [ebp - 64h]
        mov byte ptr [ebp - 5ch], al
        mov cl, byte ptr [ebp - 68h]
        mov byte ptr [ebp - 60h], cl
        mov dl, byte ptr [ebp - 70h]
        mov byte ptr [ebp - 6ch], dl
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 84h]
        sub edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes EB 09: jmp 0x445fe4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 74h]
        sub eax, 1
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 7E 1E: jle 0x446008
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ebp - 78h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 1
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 7ch]
        add edx, 1
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes EB D3: jmp 0x445fdb
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
