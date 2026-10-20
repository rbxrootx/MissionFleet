// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDD9F .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004cdd9f_004CDD9F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4cddc3
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d8h
        push 67154ch
        ; Exact mapped bytes E8 82 AF 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cddc3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cdda9
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4cddd7
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 9C 3D 06 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 4ch], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 00 00 00: call 0x4cdecb
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
