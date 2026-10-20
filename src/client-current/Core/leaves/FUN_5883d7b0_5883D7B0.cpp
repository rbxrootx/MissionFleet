// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D7B0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5883d7b0_5883D7B0() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 8], -1
        ; Exact mapped bytes 75 04: jne 0x5883d7bd
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        push edi
        push dword ptr [esi + 384ch]
        ; Exact mapped bytes 8B 3D F0 42 89 58: mov edi, dword ptr [0x588942f0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push -0ah
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5883d7e0
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [esi + 3850h]
        push -0bh
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5883d7e4
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x5883d819
        __asm _emit 0xeb
        __asm _emit 0x35
        push ebx
        xor ebx, ebx
        push ebx
        push ebx
        push 1
        push ebx
        ; Exact mapped bytes FF 15 58 42 89 58: call dword ptr [0x58894258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 14h], eax
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x5883d812
        __asm _emit 0x74
        __asm _emit 0x19
        lea edi, [esi + 4]
        push edi
        push ebx
        push esi
        push 5883ccd2h
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 F8 43 89 58: call dword ptr [0x588943f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi], eax
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5883d816
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x5883d818
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, dword ptr [edi]
        pop ebx
        pop edi
        pop esi
        ret
    }
}
