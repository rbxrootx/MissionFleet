// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A74C0 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_587a74c0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, 0b40h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esi + eax + 34ch]
        test ecx, ecx
        ; Exact mapped bytes 74 43: je 0x587a7527
        __asm _emit 0x74
        __asm _emit 0x43
        movzx ecx, byte ptr [ecx]
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 3A: jne 0x587a7527
        __asm _emit 0x75
        __asm _emit 0x3a
        movzx ecx, word ptr [esi + eax + 2ceh]
        movzx edx, word ptr [esi + eax + 2cch]
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [edi + esi - 0b38h]
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 D9 AC 00 00: call 0x587b21f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi - 0b38h]
        push 0
        ; Exact mapped bytes E8 7B AD 00 00: call 0x587b22a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x587a7555
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + eax + 34ch]
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x587a7555
        __asm _emit 0x74
        __asm _emit 0x23
        movzx ecx, byte ptr [ecx]
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 75 1A: jne 0x587a7555
        __asm _emit 0x75
        __asm _emit 0x1a
        movzx eax, word ptr [esi + eax + 2cch]
        mov ecx, dword ptr [edi + esi - 0b38h]
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 BB D3 00 00: call 0x587b4910
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        cmp esi, 0bc0h
        ; Exact mapped bytes 0F 8C 6C FF FF FF: jl 0x587a74d0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ret
    }
}
