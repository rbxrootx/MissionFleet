// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EA370 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_100ea370_100EA370() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        test bl, bl
        ; Exact mapped bytes 74 5C: je 0x100ea3d8
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [esi + 1008h]
        push edi
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 32: jle 0x100ea3bb
        __asm _emit 0x7e
        __asm _emit 0x32
        xor eax, eax
        mov eax, dword ptr [esi + eax*4 + 158h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x100ea3a9
        __asm _emit 0x74
        __asm _emit 0x13
        test bl, 1
        ; Exact mapped bytes 74 0E: je 0x100ea3a9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 5c44h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 27 95 F5 FF: call 0x100438d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x95
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1008h]
        inc edi
        mov eax, edi
        and eax, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 7C D0: jl 0x100ea38b
        __asm _emit 0x7c
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 11: jne 0x100ea3d8
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 18 5E F5 FF: call 0x100401f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xff
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
