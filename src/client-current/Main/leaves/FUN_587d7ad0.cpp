// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D7AD0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_587d7ad0() {
    __asm {
        sub esp, 8
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        mov dword ptr [esp + 4], ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x587d7b79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 48h]
        push ebx
        push ebp
        shr edx, 0ah
        push esi
        push edi
        ; Exact mapped bytes 66 89 91 22 0E 00 00: mov word ptr [ecx + 0xe22], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [eax + 0b40h]
        lea esi, [eax + 0ac2h]
        lea ebp, [ecx + 0e28h]
        lea edi, [ecx + 0eaah]
        lea edx, [ecx + 0f2ch]
        add eax, 0bc4h
        mov dword ptr [esp + 10h], 20h
        mov ecx, dword ptr [ebx]
        mov dword ptr [ebp], ecx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx - 4], ecx
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 4E FE: xor cx, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4e
        __asm _emit 0xfe
        add ebx, 4
        ; Exact mapped bytes 66 89 4F FE: mov word ptr [edi - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0xfe
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 0E: xor cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x0e
        add ebp, 4
        ; Exact mapped bytes 66 89 0F: mov word ptr [edi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0f
        add eax, 8
        add edx, 8
        add esi, 4
        add edi, 4
        sub dword ptr [esp + 10h], 1
        ; Exact mapped bytes 75 C0: jne 0x587d7b23
        __asm _emit 0x75
        __asm _emit 0xc0
        mov edx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [edx + 0e24h], 1
        pop ebx
        add esp, 8
        ret
        mov dword ptr [ecx + 0e24h], 1
        add esp, 8
        ret
    }
}
