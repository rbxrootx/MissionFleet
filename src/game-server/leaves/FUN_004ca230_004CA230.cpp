// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CA230 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_004ca230_004CA230() {
    __asm {
        push ebx
        push esi
        push edi
        push ebp
        xor ebp, ebp
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ebx, eax
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 3C 05 5E 00: cmp dword ptr [0x5e053c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7E 63: jle 0x4ca2b4
        __asm _emit 0x7e
        __asm _emit 0x63
        lea eax, [ebp*4]
        cmp dword ptr [eax + eax*4 + 5e0544h], ebx
        lea esi, [eax + eax*4]
        ; Exact mapped bytes 75 47: jne 0x4ca2ab
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [esi + 5e054ch]
        dec eax
        mov dword ptr [esi + 5e054ch], eax
        ; Exact mapped bytes 75 38: jne 0x4ca2ab
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [esi + 5e0548h]
        push eax
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 0D 3C 05 5E 00: dec dword ptr [0x5e053c]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B 2D 3C 05 5E 00: cmp ebp, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x4ca2ab
        __asm _emit 0x7d
        __asm _emit 0x1d
        lea edi, [esi + 5e0540h]
        lea eax, [edi + 14h]
        mov ecx, 5
        mov esi, eax
        inc ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edi, eax
        ; Exact mapped bytes 3B 2D 3C 05 5E 00: cmp ebp, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7C E9: jl 0x4ca294
        __asm _emit 0x7c
        __asm _emit 0xe9
        inc ebp
        ; Exact mapped bytes 3B 2D 3C 05 5E 00: cmp ebp, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7C 9D: jl 0x4ca251
        __asm _emit 0x7c
        __asm _emit 0x9d
        push 5e04c0h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    }
}
