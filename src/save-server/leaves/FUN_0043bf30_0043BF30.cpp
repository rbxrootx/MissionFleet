// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043BF30 .. +0x24D bytes.
extern "C" __declspec(naked) void FUN_0043bf30_0043BF30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bd49h
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
        sub esp, 94h
        mov dword ptr [ebp - 90h], ecx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 76 0D: jbe 0x43bf7e
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 25 9E FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 0B: jae 0x43bfa8
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 10h]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 09: jmp 0x43bfb1
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 8ch], edx
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 88h], edx
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 4], 0
        mov dl, byte ptr [ebp - 2ch]
        mov byte ptr [ebp - 28h], dl
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 80h], ecx
        mov dl, byte ptr [ebp - 38h]
        mov byte ptr [ebp - 34h], dl
        mov eax, dword ptr [ebp - 84h]
        sub eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, 0fffffffeh
        add edx, 1
        cmp dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes 77 79: ja 0x43c0d2
        __asm _emit 0x77
        __asm _emit 0x79
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 76 73: jbe 0x43c0d2
        __asm _emit 0x76
        __asm _emit 0x73
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 3D: je 0x43c0a2
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp - 3ch], 80h
        ; Exact mapped bytes 76 14: jbe 0x43c082
        __asm _emit 0x76
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 BA 55 FC FF: call 0x401631
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 12: jmp 0x43c094
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 35 7F FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0a0h], edx
        ; Exact mapped bytes EB 0A: jmp 0x43c0ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 0D: jmp 0x43c0df
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 24 9F FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 70h], edx
        mov al, byte ptr [ebp - 48h]
        mov byte ptr [ebp - 40h], al
        mov cl, byte ptr [ebp - 4ch]
        mov byte ptr [ebp - 44h], cl
        mov dl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 50h], dl
        mov al, byte ptr [ebp - 60h]
        mov byte ptr [ebp - 58h], al
        mov cl, byte ptr [ebp - 64h]
        mov byte ptr [ebp - 5ch], cl
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 33 D4 00 00: call 0x449550
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 02 AA 00 00: call 0x446b30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        ; Exact mapped bytes E8 1D D4 00 00: call 0x449560
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
