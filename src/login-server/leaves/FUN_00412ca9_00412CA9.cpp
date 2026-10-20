// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412CA9 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_00412ca9_00412CA9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        cmp dword ptr [esi + 0e8h], ebx
        lea edi, [esi + 0e8h]
        ; Exact mapped bytes 75 0E: jne 0x412cd0
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes E8 5E 13 00 00: call 0x414025
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 89 13 00 00: call 0x414057
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi], ebx
        ; Exact mapped bytes 7E 18: jle 0x412cea
        __asm _emit 0x7e
        __asm _emit 0x18
        push dword ptr [esi + 14h]
        push ebx
        push dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 FF BD 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 94h], ebx
        push dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0ch]
        mov ecx, esi
        push ebx
        ; Exact mapped bytes E8 87 13 00 00: call 0x41407f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FB 02: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 74 18: je 0x412d16
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 FB 03: cmp bx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 74 12: je 0x412d16
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 74 0C: je 0x412d16
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 FB 04: cmp bx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x412d16
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 FB 06: cmp bx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x06
        ; Exact mapped bytes 75 1E: jne 0x412d34
        __asm _emit 0x75
        __asm _emit 0x1e
        test byte ptr [esi + 2ch], 10h
        ; Exact mapped bytes 74 18: je 0x412d34
        __asm _emit 0x74
        __asm _emit 0x18
        lea eax, [ebp - 4]
        lea edi, [esi + 0b8h]
        push eax
        push edi
        push dword ptr [ebp + 8]
        mov ecx, esi
        push ebx
        ; Exact mapped bytes E8 5B 14 00 00: call 0x41418d
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x412d49
        __asm _emit 0xeb
        __asm _emit 0x15
        lea edi, [esi + 0b8h]
        mov ecx, esi
        push edi
        push dword ptr [ebp + 8]
        push ebx
        ; Exact mapped bytes E8 CA 13 00 00: call 0x414110
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push dword ptr [edi]
        mov eax, dword ptr [esi]
        mov ecx, esi
        push dword ptr [ebp + 8]
        push ebx
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 4C: call dword ptr [eax + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x4c
        xor eax, eax
        cmp dword ptr [esi + 14h], eax
        ; Exact mapped bytes 76 1D: jbe 0x412d7d
        __asm _emit 0x76
        __asm _emit 0x1d
        cmp dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes 75 15: jne 0x412d7d
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes 75 0D: jne 0x412d7d
        __asm _emit 0x75
        __asm _emit 0x0d
        test byte ptr [esi + 2dh], 2
        ; Exact mapped bytes 75 07: jne 0x412d7d
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 13 21 00 00: call 0x414e90
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
