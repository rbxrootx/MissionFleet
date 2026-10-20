// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410E40 .. +0x1C5 bytes.
extern "C" __declspec(naked) void FUN_00410e40_00410E40() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 43a373h
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x410e74
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c8h], edi
        cmp dword ptr [esp + 30h], edi
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x410fec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 9B 44 00: mov ecx, dword ptr [0x449b0c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        push ebx
        mov dword ptr [esp + 34h], ecx
        xor edx, edx
        lea eax, [esp + 10h]
        mov dword ptr [esp + 14h], edx
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 18h], edx
        push eax
        mov dword ptr [esp + 20h], edx
        push ecx
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [esi + 4]
        push edx
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 1ch], 10h
        ; Exact mapped bytes FF 15 AC C5 43 00: call dword ptr [0x43c5ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, -1
        setne cl
        mov eax, ecx
        cmp eax, edi
        ; Exact mapped bytes 74 2F: je 0x410ef8
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [esp + 16h]
        push edx
        ; Exact mapped bytes FF 15 CC C5 43 00: call dword ptr [0x43c5cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B D8: mov bx, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd8
        mov eax, dword ptr [esp + 18h]
        and ebx, 0ffffh
        push eax
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes FF 15 C8 C5 43 00: call dword ptr [0x43c5c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        lea ecx, [esp + 38h]
        ; Exact mapped bytes E8 3E CE 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x410efc
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 34h]
        push ebp
        mov ebp, dword ptr [esp + 38h]
        xor ecx, ecx
        mov edi, dword ptr [ebp - 8]
        test edi, edi
        ; Exact mapped bytes 7E 1B: jle 0x410f29
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 0F BE 04 29: movsx eax, byte ptr [ecx + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x29
        lea ebx, [eax*8]
        sub ebx, eax
        lea edx, [edx + ebx*4]
        add edx, eax
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C E9: jl 0x410f0e
        __asm _emit 0x7c
        __asm _emit 0xe9
        mov ebx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + 0d4h]
        push 98h
        mov ecx, eax
        shl ecx, 4
        add ecx, eax
        mov eax, ebx
        shl eax, 5
        sub eax, ebx
        add eax, edx
        lea edi, [eax + ecx]
        ; Exact mapped bytes E8 A0 C9 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov byte ptr [esp + 30h], 1
        pop ebp
        ; Exact mapped bytes 74 0E: je 0x410f6b
        __asm _emit 0x74
        __asm _emit 0x0e
        push 800h
        mov ecx, eax
        ; Exact mapped bytes E8 17 07 00 00: call 0x411680
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x410f6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c8h], eax
        mov edx, dword ptr [eax]
        push 0
        push edi
        mov ecx, eax
        mov byte ptr [esp + 34h], 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0c8h]
        mov dword ptr [esi + 0cch], 1
        mov dword ptr [esi + 0d0h], 0
        mov eax, edi
        mov ebx, dword ptr [ecx + 4]
        xor edx, edx
        div ebx
        mov dword ptr [esp + 2ch], 0ffffffffh
        lea eax, [edx + edx*2]
        lea edx, [edx + eax*4]
        mov eax, edi
        mov dword ptr [esi + 0d8h], edx
        mov ecx, dword ptr [ecx + 4]
        xor edx, edx
        div ecx
        lea ecx, [esp + 34h]
        mov eax, edx
        shl eax, 4
        add eax, edx
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 D3 CB 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        pop ebx
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esi + 0cch], edi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
