// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D2F0 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_1005d2f0_1005D2F0() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov dword ptr [esp + 4], ecx
        mov esi, dword ptr [eax + 30h]
        test esi, esi
        ; Exact mapped bytes 74 70: je 0x1005d372
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [esi + 48h]
        push ebx
        shr edx, 0ah
        push ebp
        push edi
        ; Exact mapped bytes 66 89 91 8C 0D 00 00: mov word ptr [ecx + 0xd8c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0a4ch]
        lea edx, [ecx + 0e94h]
        add esi, 94ch
        lea edi, [ecx + 0e14h]
        mov ebp, 20h
        mov ecx, dword ptr [esi + 80h]
        mov ebx, 2
        mov dword ptr [edi - 80h], ecx
        mov ecx, dword ptr [eax]
        add eax, 4
        mov dword ptr [edx], ecx
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 66 81 F1 AA 00: xor cx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        add edx, 4
        ; Exact mapped bytes 66 89 0F: mov word ptr [edi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0f
        add esi, 2
        add edi, 2
        dec ebx
        ; Exact mapped bytes 75 E2: jne 0x1005d33d
        __asm _emit 0x75
        __asm _emit 0xe2
        dec ebp
        ; Exact mapped bytes 75 D1: jne 0x1005d32f
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [esp + 10h]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr [edx + 0d90h], 1
        pop esi
        pop ecx
        ret
        mov dword ptr [ecx + 0d90h], 1
        pop esi
        pop ecx
        ret
    }
}
