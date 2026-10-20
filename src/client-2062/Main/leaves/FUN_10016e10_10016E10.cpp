// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016E10 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_10016e10_10016E10() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 54h], ecx
        mov ecx, dword ptr [esi + 0e0h]
        mov dword ptr [esi + 0b0h], eax
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0cch], eax
        mov edx, dword ptr [ecx + 54h]
        cmp edx, eax
        ; Exact mapped bytes 74 04: je 0x10016e47
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        dec eax
        mov dword ptr [ecx + 50h], eax
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0dch]
        ; Exact mapped bytes E8 6E B7 01 00: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D DC 56 1C 10: mov ebx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 1ch]
        mov ecx, dword ptr [ebx + 14h]
        sub eax, ecx
        mov edi, dword ptr [edx + 104e0h]
        sar eax, 1
        mov ebp, dword ptr [edi + 110h]
        mov ecx, dword ptr [esi + 4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        mov edx, dword ptr [ebx + 18h]
        sub ecx, eax
        mov eax, dword ptr [edi + 50h]
        sub ecx, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, edx
        mov ebx, dword ptr [edi + 54h]
        sar eax, 1
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ebp
        sub eax, dword ptr [esi + 8]
        add eax, ebx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 C5 1A 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 9fh
        push 0
        push 1017f088h
        mov ecx, dword ptr [eax + 2cch]
        ; Exact mapped bytes E8 49 22 01 00: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        push 1
        push 1017f4ach
        mov ecx, dword ptr [ecx + 2cch]
        ; Exact mapped bytes E8 2C 22 01 00: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
