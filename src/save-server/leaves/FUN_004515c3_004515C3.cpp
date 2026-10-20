// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004515C3 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_004515c3_004515C3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58de5bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 C0 FD 06 00: call 0x4c13e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 34h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 44h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 48h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 63960ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4516ae
        __asm _emit 0x75
        __asm _emit 0x14
        push 7bbh
        push 67702ch
        ; Exact mapped bytes E8 97 76 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4516ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x451694
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
