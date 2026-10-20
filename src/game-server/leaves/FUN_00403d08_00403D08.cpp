// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403D08 .. +0x1FC bytes.
extern "C" __declspec(naked) void FUN_00403d08_00403D08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 FC FF FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 8D C0 01 00 00: jge 0x403ef2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 02 00 00: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 84 AF 01 00 00: je 0x403ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 02 00 00: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 507h
        ; Exact mapped bytes 0F 84 9C 01 00 00: je 0x403ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 02 00 00: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 503h
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x403ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 02 00 00: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 508h
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x403ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 02 00 00: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 508h
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x403ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 02 00 00: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 501h
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x403e33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 502h
        ; Exact mapped bytes 74 05: je 0x403db5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x403ee7
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 02 00 00: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 76 5E: jbe 0x403e1f
        __asm _emit 0x76
        __asm _emit 0x5e
        mov esi, esp
        push 5a037ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 40cach]
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0ca8h]
        imul ecx, ecx, 0ab4h
        lea edi, [edx + ecx + 4]
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 0ca9h]
        imul eax, eax, 112h
        add edi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 01 00 00: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        shl eax, 4
        lea ecx, [edi + eax + 12h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 C1 49 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 41 7C 08 00: call 0x48ba6f
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x403ee7
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0d70h]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 3C 01 00 00: call 0x403f80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x403ee7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes E8 54 CE 00 00: call 0x410cae
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        cmp dword ptr [edx + 40ce0h], 0
        ; Exact mapped bytes 74 7E: je 0x403ee7
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0d98h], 0
        ; Exact mapped bytes 74 63: je 0x403ed8
        __asm _emit 0x74
        __asm _emit 0x63
        mov esi, esp
        push 5a0384h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0d78h]
        add edx, 80h
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 44 49 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 46bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 01 00 00: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5E FA FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 77 6C 08 00: call 0x48ab38
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ecx + 40cb8h]
        ; Exact mapped bytes E8 41 46 03 00: call 0x438517
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x403ee7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 88 7B 08 00: call 0x48ba6f
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 85 B6 03 00: call 0x43f577
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 E2 48 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
