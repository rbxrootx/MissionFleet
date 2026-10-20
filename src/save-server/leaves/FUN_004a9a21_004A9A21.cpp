// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9A21 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004a9a21_004A9A21() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 108h], ecx
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a9a65
        __asm _emit 0x75
        __asm _emit 0x14
        push 12dh
        push 672a58h
        ; Exact mapped bytes E8 E0 F2 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a9a65
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4a9a3d
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 100h
        ; Exact mapped bytes 7C 14: jl 0x4a9a88
        __asm _emit 0x7c
        __asm _emit 0x14
        push 12eh
        push 672a58h
        ; Exact mapped bytes E8 BD F2 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a9a88
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4a9a6b
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        or edx, 1000000h
        push edx
        push 412h
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 2E 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 104h]
        or al, 1
        mov dword ptr [ebp - 104h], eax
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
