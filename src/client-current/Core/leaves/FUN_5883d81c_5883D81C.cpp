// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D81C .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_5883d81c_5883D81C() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 3868h]
        mov edx, dword ptr [ebp + 10h]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp eax, 619h
        ; Exact mapped bytes 74 5C: je 0x5883d893
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp eax, 61ah
        ; Exact mapped bytes 74 55: je 0x5883d893
        __asm _emit 0x74
        __asm _emit 0x55
        cmp eax, 61bh
        ; Exact mapped bytes 74 4E: je 0x5883d893
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp eax, 61ch
        ; Exact mapped bytes 74 47: je 0x5883d893
        __asm _emit 0x74
        __asm _emit 0x47
        cmp eax, 61dh
        ; Exact mapped bytes 74 40: je 0x5883d893
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ecx + 3864h], edi
        ; Exact mapped bytes 75 1F: jne 0x5883d87a
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp eax, esi
        ; Exact mapped bytes 75 1B: jne 0x5883d87a
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [ecx + 3870h], edx
        ; Exact mapped bytes 75 13: jne 0x5883d87a
        __asm _emit 0x75
        __asm _emit 0x13
        inc dword ptr [ecx + 386ch]
        cmp dword ptr [ecx + 386ch], 2
        ; Exact mapped bytes 76 0B: jbe 0x5883d881
        __asm _emit 0x76
        __asm _emit 0x0b
        mov al, 1
        ; Exact mapped bytes EB 21: jmp 0x5883d89b
        __asm _emit 0xeb
        __asm _emit 0x21
        and dword ptr [ecx + 386ch], 0
        mov dword ptr [ecx + 3864h], edi
        mov dword ptr [ecx + 3868h], esi
        mov dword ptr [ecx + 3870h], edx
        push edx
        push esi
        push edi
        ; Exact mapped bytes E8 AF FA FF FF: call 0x5883d34a
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
