// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F9720 .. +0x2AC bytes.
extern "C" __declspec(naked) void FUN_100f9720_100F9720() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, 2
        push edi
        test byte ptr [esi + 24h], bl
        ; Exact mapped bytes 0F 84 8E 02 00 00: je 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x100f9761
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100f9758
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x100f9761
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes EB EA: jmp 0x100f9742
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        add eax, 0fffffe00h
        cmp eax, 0ah
        ; Exact mapped bytes 0F 87 50 02 00 00: ja 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 100f99e0h]
        ; Exact mapped bytes FF 24 95 CC 99 0F 10: jmp dword ptr [edx*4 + 0x100f99cc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0x99
        __asm _emit 0x0f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 28 02 00 00: jl 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D 1B 02 00 00: jge 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 18h]
        mov ecx, dword ptr [edx + 8]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 08 02 00 00: jl 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 20h]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D FB 01 00 00: jge 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 4], 302h
        ; Exact mapped bytes 0F 8E EE 01 00 00: jle 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b8h]
        cmp dword ptr [eax + 50h], ebx
        ; Exact mapped bytes 0F 85 DF 01 00 00: jne 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 50h], 3
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b8h]
        pop edi
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2b8h]
        cmp dword ptr [ecx + 50h], 3
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x100f9913
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 3e0h]
        sub ebx, 8
        test ebx, ebx
        ; Exact mapped bytes 0F 8E 96 01 00 00: jle 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        lea edx, [eax + 8ch]
        lea edi, [eax + 46h]
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 8]
        cmp eax, edi
        ; Exact mapped bytes 7F 03: jg 0x100f9847
        __asm _emit 0x7f
        __asm _emit 0x03
        push edi
        ; Exact mapped bytes EB 08: jmp 0x100f984f
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp eax, edx
        ; Exact mapped bytes 7C 03: jl 0x100f984e
        __asm _emit 0x7c
        __asm _emit 0x03
        push edx
        ; Exact mapped bytes EB 01: jmp 0x100f984f
        __asm _emit 0xeb
        __asm _emit 0x01
        push eax
        ; Exact mapped bytes E8 6C 55 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2b8h]
        mov eax, 0ea0ea0ebh
        mov ecx, dword ptr [ecx + 8]
        sub ecx, edi
        imul ecx, ebx
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 118h]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov edi, edx
        ; Exact mapped bytes E8 BE A5 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 7E 36: jle 0x100f98bc
        __asm _emit 0x7e
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 118h]
        xor ebx, ebx
        ; Exact mapped bytes E8 AD A5 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 1E: jle 0x100f98bc
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, esi
        ; Exact mapped bytes E8 DB 04 00 00: call 0x100f9d80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        inc ebx
        ; Exact mapped bytes E8 8F A5 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7C E2: jl 0x100f989e
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 79 A5 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 0F 8D F3 00 00 00: jge 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        xor ebx, ebx
        ; Exact mapped bytes E8 64 A5 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 0F 8E D7 00 00 00: jle 0x100f99c2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 AE 06 00 00: call 0x100f9fa0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        inc ebx
        ; Exact mapped bytes E8 42 A5 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp ebx, eax
        ; Exact mapped bytes 7C E2: jl 0x100f98eb
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ebp, dword ptr [ecx + 14h]
        mov edx, dword ptr [edi + 4]
        add ebp, eax
        cmp edx, ebp
        ; Exact mapped bytes 7C 2E: jl 0x100f9956
        __asm _emit 0x7c
        __asm _emit 0x2e
        mov ebp, dword ptr [ecx + 1ch]
        add ebp, eax
        cmp edx, ebp
        ; Exact mapped bytes 7D 25: jge 0x100f9956
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [edi + 8]
        mov eax, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 18h]
        add edi, eax
        cmp edx, edi
        ; Exact mapped bytes 7C 16: jl 0x100f9956
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edi, dword ptr [ecx + 20h]
        add edi, eax
        cmp edx, edi
        ; Exact mapped bytes 7D 0D: jge 0x100f9956
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov dword ptr [ecx + 50h], ebx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], 1
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov ebx, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 7C 46: jl 0x100f99c2
        __asm _emit 0x7c
        __asm _emit 0x46
        mov ebx, dword ptr [esi + 1ch]
        add ebx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 7D 3D: jge 0x100f99c2
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 2E: jl 0x100f99c2
        __asm _emit 0x7c
        __asm _emit 0x2e
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 25: jge 0x100f99c2
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [edi + 8]
        shr eax, 10h
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 11: jle 0x100f99b9
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, esi
        ; Exact mapped bytes E8 D1 03 00 00: call 0x100f9d80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 07: jge 0x100f99c2
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 DE 05 00 00: call 0x100f9fa0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
