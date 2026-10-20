// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4640 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_587b4640() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 88h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        xor ebx, ebx
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 05: jne 0x587b465d
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        mov ecx, edi
        ; Exact mapped bytes E8 EC D1 FF FF: call 0x587b1850
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 74 19: je 0x587b4681
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [edi + 2ech]
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [edi + 2ech]
        push edx
        push eax
        ; Exact mapped bytes E8 BF CF FE FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        xor dword ptr [edi + 2ech], 0aaaaaaaah
        mov eax, dword ptr [edi + 2ech]
        lea esi, [edi + 2ech]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 91 C9 FF FF: call 0x587b1030
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 228h]
        and ecx, 0fh
        cmp eax, ecx
        mov dword ptr [esi], eax
        ; Exact mapped bytes 7D 02: jge 0x587b46b1
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, eax
        xor eax, 0aaaaaaaah
        mov dword ptr [edi + 0e0h], ecx
        mov dword ptr [esi], eax
        test ebx, ebx
        ; Exact mapped bytes 74 29: je 0x587b46eb
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push esi
        ; Exact mapped bytes E8 11 CF FE FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edi + 138h]
        push 0
        xor eax, 0aaaaaaaah
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 F8 09 00: call 0x58853f90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
