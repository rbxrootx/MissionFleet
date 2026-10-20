// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DC310 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_588dc310() {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov ebx, 80000000h
        xor esi, esi
        lea edi, [ebp + 17ch]
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588dc369
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 75 37: jne 0x588dc369
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [esp + 18h]
        ; Exact mapped bytes 75 2E: jne 0x588dc369
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, ebx
        not eax
        and dword ptr [ebp + 344h], eax
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 94 48 ED FF: call 0x587b0be0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 4], ebp
        ; Exact mapped bytes 75 12: jne 0x588dc369
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 20c9ch]
        push esi
        ; Exact mapped bytes E8 27 93 EC FF: call 0x587a5690
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x93
        __asm _emit 0xec
        __asm _emit 0xff
        inc esi
        shr ebx, 1
        add edi, 4
        cmp esi, 20h
        ; Exact mapped bytes 7C AF: jl 0x588dc323
        __asm _emit 0x7c
        __asm _emit 0xaf
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
