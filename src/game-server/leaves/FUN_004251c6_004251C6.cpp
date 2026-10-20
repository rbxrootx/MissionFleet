// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004251C6 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_004251c6_004251C6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], 53h
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 90 E5 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x4252ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0c4h
        mov ecx, dword ptr [edx + eax + 5a1540h]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x42526f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 78: jae 0x4252ef
        __asm _emit 0x73
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0c4h
        lea eax, [ecx + edx + 5a14d8h]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 54 48 6C: mov dx, word ptr [eax + ecx*2 + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 66 8B 45 EC: mov ax, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 66 25 3F 00: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x3f
        __asm _emit 0x00
        and eax, 0ffffh
        imul eax, eax, 3f8ch
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 E1 FF 03: and cx, 0x3ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        and ecx, 0ffffh
        imul ecx, ecx, 0c4h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 10h]
        shr edx, 4
        and edx, 0ffh
        cmp dword ptr [eax + ecx + 5a1524h], edx
        ; Exact mapped bytes 77 04: ja 0x4252ea
        __asm _emit 0x77
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 07: jmp 0x4252f1
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x425266
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, al
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 E5 34 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
