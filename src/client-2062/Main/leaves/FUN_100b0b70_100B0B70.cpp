// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0B70 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_100b0b70_100B0B70() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        push edi
        mov esi, dword ptr [eax + 24h]
        mov eax, dword ptr [eax + 2ch]
        mov edi, ecx
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [esp + 14h]
        xor ebx, ebx
        mov edx, dword ptr [edi + 17ch]
        sub edx, eax
        test esi, esi
        mov dword ptr [edi + 17ch], edx
        ; Exact mapped bytes 74 40: je 0x100b0bdd
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, eax
        push ebp
        shl ecx, 5
        add ecx, eax
        lea ebp, [eax + ecx*2]
        mov ecx, dword ptr [esi + 0ch]
        push ebp
        ; Exact mapped bytes E8 CF E2 04 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 17ch]
        lea edx, [eax + 7]
        cmp ebx, edx
        ; Exact mapped bytes 7D 0D: jge 0x100b0bcb
        __asm _emit 0x7d
        __asm _emit 0x0d
        cmp ebx, eax
        ; Exact mapped bytes 7C 09: jl 0x100b0bcb
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [esi + 0ch]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 09: jmp 0x100b0bd4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov esi, dword ptr [esi + 8]
        inc ebx
        test esi, esi
        ; Exact mapped bytes 75 CC: jne 0x100b0ba8
        __asm _emit 0x75
        __asm _emit 0xcc
        pop ebp
        mov edx, dword ptr [edi + 17ch]
        xor ecx, ecx
        cmp edx, ecx
        mov edx, dword ptr [edi + 0b4h]
        mov eax, 1
        ; Exact mapped bytes 75 05: jne 0x100b0bf9
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes EB 03: jmp 0x100b0bfc
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [esp + 0ch]
        mov esi, dword ptr [edi + 17ch]
        add edx, -7
        cmp esi, edx
        ; Exact mapped bytes 7C 10: jl 0x100b0c1d
        __asm _emit 0x7c
        __asm _emit 0x10
        mov eax, dword ptr [edi + 0b8h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [eax + 50h], ecx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0b8h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [ecx + 50h], eax
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
