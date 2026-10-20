// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587949E0 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_587949e0() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 1
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x58794a8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 8C 90 00 00 00: jl 0x58794a8e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 0F 8C 85 00 00 00: jl 0x58794a8e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 13 05 00: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x58794a8e
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [esi + 9ch], 0
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 7E 63: jle 0x58794a8e
        __asm _emit 0x7e
        __asm _emit 0x63
        mov edi, dword ptr [esp + 1ch]
        lea ebx, [esi + 78h]
        mov ecx, dword ptr [esi + 10h]
        add ecx, dword ptr [ebx]
        mov edx, dword ptr [esp + 20h]
        add ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebx - 4]
        add eax, dword ptr [edx]
        mov ebp, dword ptr [edi]
        add eax, dword ptr [esi + 0ch]
        push 101h
        push 100h
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ebp
        mov ebp, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ebp
        mov ebp, dword ptr [edi + 8]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        mov dword ptr [edx + 8], ebp
        mov ebp, dword ptr [edi + 0ch]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [edx + 0ch], ebp
        ; Exact mapped bytes E8 E6 F2 16 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf2
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        inc eax
        add ebx, 8
        cmp eax, dword ptr [esi + 9ch]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7C A4: jl 0x58794a32
        __asm _emit 0x7c
        __asm _emit 0xa4
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
