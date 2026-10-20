// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437F50 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_00437f50_00437F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 76 0D: jbe 0x437f76
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 2D DE FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 08: jae 0x437f97
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x437f9d
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 34h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 74 29: je 0x437ffd
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 1E: je 0x437ffd
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB CF: jmp 0x437fcc
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 61: jne 0x438066
        __asm _emit 0x75
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 4E: je 0x438064
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 08: jne 0x438033
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 17: jmp 0x43804a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 1C DC 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 1A: jmp 0x438080
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov dl, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 24h], dl
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 00 FB 00 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
