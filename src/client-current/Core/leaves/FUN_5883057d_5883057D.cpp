// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883057D .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5883057d_5883057D() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [ebx], edi
        ; Exact mapped bytes 74 33: je 0x588305be
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes E8 70 98 CD FF: call 0x58509e00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x98
        __asm _emit 0xcd
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 74 2A: je 0x588305be
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp byte ptr [edi], 0
        push esi
        mov esi, edi
        ; Exact mapped bytes 74 06: je 0x588305a2
        __asm _emit 0x74
        __asm _emit 0x06
        inc esi
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 FA: jne 0x5883059c
        __asm _emit 0x75
        __asm _emit 0xfa
        sub esi, edi
        inc esi
        push esi
        ; Exact mapped bytes E8 65 90 02 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebx], eax
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x588305bd
        __asm _emit 0x74
        __asm _emit 0x0b
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 D6 C2 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        pop esi
        pop edi
        mov eax, ebx
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
