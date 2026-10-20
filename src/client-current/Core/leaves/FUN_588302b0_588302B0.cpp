// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588302B0 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_588302b0_588302B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        push esi
        push edi
        test edx, edx
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x5883036f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        bsr eax, edx
        mov dword ptr [ebp - 8], eax
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x588302ed
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 0F 10 04 07: movups xmm0, xmmword ptr [edi + eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x07
        add edi, eax
        ; Exact mapped bytes 0F 57 41 10: xorps xmm0, xmmword ptr [ecx + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 38 17 C0: ptest xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0xc0
        ; Exact mapped bytes 75 5C: jne 0x58830349
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, dword ptr [ecx + 24h]
        lea edx, [edi + 10h]
        mov esi, dword ptr [ecx + 20h]
        sub eax, 10h
        sub eax, 4
        ; Exact mapped bytes 72 13: jb 0x58830311
        __asm _emit 0x72
        __asm _emit 0x13
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [esi]
        ; Exact mapped bytes 75 10: jne 0x58830316
        __asm _emit 0x75
        __asm _emit 0x10
        add edx, 4
        add esi, 4
        sub eax, 4
        ; Exact mapped bytes 73 EF: jae 0x58830300
        __asm _emit 0x73
        __asm _emit 0xef
        cmp eax, -4
        ; Exact mapped bytes 74 48: je 0x5883035e
        __asm _emit 0x74
        __asm _emit 0x48
        mov cl, byte ptr [edx]
        cmp cl, byte ptr [esi]
        ; Exact mapped bytes 75 27: jne 0x58830343
        __asm _emit 0x75
        __asm _emit 0x27
        cmp eax, -3
        ; Exact mapped bytes 74 3D: je 0x5883035e
        __asm _emit 0x74
        __asm _emit 0x3d
        mov cl, byte ptr [edx + 1]
        cmp cl, byte ptr [esi + 1]
        ; Exact mapped bytes 75 1A: jne 0x58830343
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp eax, -2
        ; Exact mapped bytes 74 30: je 0x5883035e
        __asm _emit 0x74
        __asm _emit 0x30
        mov cl, byte ptr [edx + 2]
        cmp cl, byte ptr [esi + 2]
        ; Exact mapped bytes 75 0D: jne 0x58830343
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp eax, -1
        ; Exact mapped bytes 74 23: je 0x5883035e
        __asm _emit 0x74
        __asm _emit 0x23
        mov al, byte ptr [edx + 3]
        cmp al, byte ptr [esi + 3]
        ; Exact mapped bytes 74 1B: je 0x5883035e
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea edx, [ebp + 8]
        btr dword ptr [edx], eax
        mov edx, dword ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 74 19: je 0x5883036f
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x588302d0
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov dword ptr [eax], edi
        mov al, 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
