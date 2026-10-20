// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BCC90 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_588bcc90() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 3d4h]
        push edi
        ; Exact mapped bytes E8 D1 B4 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        mov edi, eax
        ; Exact mapped bytes E8 C4 B4 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 7
        cmp edi, eax
        ; Exact mapped bytes 7D 64: jge 0x588bcd17
        __asm _emit 0x7d
        __asm _emit 0x64
        push ebx
        lea ebx, [esi + edi*4 + 240h]
        ; Exact mapped bytes EB 03: jmp 0x588bccc0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 0ach]
        cmp edi, eax
        ; Exact mapped bytes 7D 4B: jge 0x588bcd16
        __asm _emit 0x7d
        __asm _emit 0x4b
        cmp dword ptr [ebx], 0
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes 74 14: je 0x588bccea
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes E8 95 B4 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, edi
        sub ecx, eax
        mov eax, dword ptr [esi + ecx*4 + 78h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 16: jmp 0x588bcd00
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes E8 81 B4 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, edi
        sub edx, eax
        mov eax, dword ptr [esi + edx*4 + 78h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3d4h]
        inc edi
        add ebx, 4
        ; Exact mapped bytes E8 61 B4 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 7
        cmp edi, eax
        ; Exact mapped bytes 7C AA: jl 0x588bccc0
        __asm _emit 0x7c
        __asm _emit 0xaa
        pop ebx
    }
}
