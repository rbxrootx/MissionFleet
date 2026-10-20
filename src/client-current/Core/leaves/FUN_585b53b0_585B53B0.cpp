// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B53B0 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_585b53b0_585B53B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 6D: je 0x585b5430
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A A7 EF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa7
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x585b5430
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 6B C0 F8 FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 EE F5 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        imul edx, dword ptr [eax + 78h], 3e8h
        cmp esi, edx
        ; Exact mapped bytes 77 33: ja 0x585b5430
        __asm _emit 0x77
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 26 FF FF: call 0x585a7ac0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 50 F6 EC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 96 FC FF: call 0x5857eac0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x585b5453
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes E8 BB 1D F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 7
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 28 39 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x39
        __asm _emit 0xf2
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE BC FF FF: call 0x585b1130
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
