// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001CC80 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_1001cc80_1001CC80() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 6ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x1001cd90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov dword ptr [esi + 60h], edi
        mov ebx, dword ptr [eax + 50h]
        lea ecx, [esp + 10h]
        mov ebp, dword ptr [ebx]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        mov eax, dword ptr [esp + 30h]
        push eax
        mov ecx, ebx
        ; Exact mapped bytes FF 55 04: call dword ptr [ebp + 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, 1eh
        ; Exact mapped bytes 7D 09: jge 0x1001ccd0
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, 1eh
        mov dword ptr [esp + 10h], ecx
        mov edx, dword ptr [esi + 14h]
        mov ebp, dword ptr [esp + 14h]
        lea eax, [edx + ecx + 0ah]
        mov edx, dword ptr [esi + 18h]
        mov dword ptr [esi + 1ch], eax
        lea eax, [edx + ebp + 6]
        mov dword ptr [esi + 20h], eax
        mov ebx, dword ptr [edi + 14h]
        mov edx, dword ptr [edi + 1ch]
        mov eax, ebx
        sub eax, edx
        add eax, ecx
        cdq
        sub eax, edx
        mov edx, eax
        mov eax, dword ptr [edi + 4]
        sar edx, 1
        sub eax, edx
        add eax, ebx
        cmp eax, 0ah
        ; Exact mapped bytes 7F 07: jg 0x1001cd0e
        __asm _emit 0x7f
        __asm _emit 0x07
        mov eax, 0ah
        ; Exact mapped bytes EB 1E: jmp 0x1001cd2c
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 34 93 1C 10: mov edx, dword ptr [0x101c9334]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ebx, [eax + ecx]
        mov edx, dword ptr [edx + 60h]
        lea ebp, [edx - 5]
        cmp ebx, ebp
        ; Exact mapped bytes 7C 07: jl 0x1001cd28
        __asm _emit 0x7c
        __asm _emit 0x07
        sub edx, ecx
        sub edx, 14h
        mov eax, edx
        mov ebp, dword ptr [esp + 14h]
        mov ecx, dword ptr [edi + 18h]
        mov edx, dword ptr [edi + 8]
        add ecx, edx
        sub ecx, ebp
        sub ecx, 0fh
        cmp ecx, 0ah
        ; Exact mapped bytes 7F 07: jg 0x1001cd45
        __asm _emit 0x7f
        __asm _emit 0x07
        mov ecx, 0ah
        ; Exact mapped bytes EB 1A: jmp 0x1001cd5f
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 34 93 1C 10: mov edx, dword ptr [0x101c9334]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edi, [ecx + ebp]
        mov edx, dword ptr [edx + 64h]
        lea ebx, [edx - 14h]
        cmp edi, ebx
        ; Exact mapped bytes 7C 07: jl 0x1001cd5f
        __asm _emit 0x7c
        __asm _emit 0x07
        sub edx, ebp
        sub edx, 14h
        mov ecx, edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 68 1F 0E 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        or byte ptr [esi + 24h], 4
        mov dword ptr [esi + 68h], 0
        mov esi, dword ptr [esi + 64h]
        pop edi
        pop ebp
        pop ebx
        mov eax, dword ptr [esi + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1001cd90
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1001cd90
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
