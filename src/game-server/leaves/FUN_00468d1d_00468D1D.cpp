// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468D1D .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_00468d1d_00468D1D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 21 FE FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 370h
        lea ecx, [esi + eax + 16bdch]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 6D 0D FC FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x468ea4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 21 FE FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 370h
        lea edx, [esi + eax + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x468ea4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 28h]
        ; Exact mapped bytes 0F 82 B5 00 00 00: jb 0x468ea4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 74 47: je 0x468e5f
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        test ecx, ecx
        ; Exact mapped bytes 75 6C: jne 0x468ea4
        __asm _emit 0x75
        __asm _emit 0x6c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 0ch
        ; Exact mapped bytes 77 45: ja 0x468ea4
        __asm _emit 0x77
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 68h]
        and eax, dword ptr [ecx + edx + 2b8h]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 1E: jne 0x468ea4
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, 1
        mov ecx, dword ptr [ebp + 14h]
        shl edx, cl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 528h]
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 528h], ecx
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 31 F9 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
