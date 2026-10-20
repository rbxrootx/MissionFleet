// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573080 .. +0x1A8 bytes.
extern "C" __declspec(naked) void FUN_00573080_00573080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5730a3
        __asm _emit 0x75
        __asm _emit 0x11
        push 1fh
        push 5cbcc4h
        ; Exact mapped bytes E8 62 19 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5730a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x57308c
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 11: jne 0x5730c2
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 5cbcc4h
        ; Exact mapped bytes E8 43 19 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5730c2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x5730a9
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        cmp eax, 0ch
        ; Exact mapped bytes 74 0D: je 0x5730ef
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 2
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0eh
        ; Exact mapped bytes 0F 87 08 01 00 00: ja 0x573216
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 8D 28 32 57 00: jmp dword ptr [ecx*4 + 0x573228]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x32
        __asm _emit 0x57
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        mov byte ptr [edx + 8], cl
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x57321f
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4A 08: mov word ptr [edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x57321f
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x57321f
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x57321f
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 4]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x57321f
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [edx + 4]
        mov dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x57321f
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x57321f
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 08 00 00: call 0x573a0b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes EB 6D: jmp 0x57321f
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 60: jmp 0x57321f
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        neg ecx
        sbb ecx, ecx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 4A 08: mov word ptr [edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes EB 4E: jmp 0x57321f
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 80 24 5E 00: call dword ptr [0x5e2480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5731ec
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 31: jmp 0x57321f
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 12: je 0x573214
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 09: jmp 0x57321f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
