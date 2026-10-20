// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587524C0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_587524c0() {
    __asm {
        cmp dword ptr [esp + 4], 0
        push ebx
        mov ebx, ecx
        ; Exact mapped bytes 74 4F: je 0x58752519
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 47: jbe 0x58752519
        __asm _emit 0x76
        __asm _emit 0x47
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, eax
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 1]
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 05 FE FF FF: call 0x587522f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5875250f
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D A8 45 A2 58: cmp ecx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 0A: jne 0x58752507
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 B8 AC 00 00 00 00: cmp word ptr [eax + 0xac], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 08: jl 0x5875250f
        __asm _emit 0x7c
        __asm _emit 0x08
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A1 7F 00 00: call 0x5875a4b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 60h
        sub edi, 1
        ; Exact mapped bytes 75 C9: jne 0x587524e0
        __asm _emit 0x75
        __asm _emit 0xc9
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
