// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427990 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00427990_00427990() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        xor ebx, ebx
        push edi
        mov eax, dword ptr [esi + 0ch]
        mov ecx, eax
        and ecx, 3
        cmp cl, 2
        ; Exact mapped bytes 75 37: jne 0x4279dd
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 66 A9 08 01: test ax, 0x108
        __asm _emit 0x66
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 31: je 0x4279dd
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [esi + 8]
        mov edi, dword ptr [esi]
        sub edi, eax
        test edi, edi
        ; Exact mapped bytes 7E 26: jle 0x4279dd
        __asm _emit 0x7e
        __asm _emit 0x26
        push edi
        push eax
        push dword ptr [esi + 10h]
        ; Exact mapped bytes E8 3F F0 FF FF: call 0x426a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp eax, edi
        ; Exact mapped bytes 75 0E: jne 0x4279d6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 0ch]
        test al, 80h
        ; Exact mapped bytes 74 0E: je 0x4279dd
        __asm _emit 0x74
        __asm _emit 0x0e
        and al, 0fdh
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4279dd
        __asm _emit 0xeb
        __asm _emit 0x07
        or dword ptr [esi + 0ch], 20h
        or ebx, 0ffffffffh
        mov eax, dword ptr [esi + 8]
        and dword ptr [esi + 4], 0
        mov dword ptr [esi], eax
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret
    }
}
