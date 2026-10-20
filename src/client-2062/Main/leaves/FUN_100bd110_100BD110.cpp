// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BD110 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_100bd110_100BD110() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 18h]
        mov esi, ecx
        push edi
        push -1
        push ebp
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 83 6B 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov ebx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 02 6D 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        add ebx, -0ah
        cmp eax, ebx
        ; Exact mapped bytes 75 0B: jne 0x100bd150
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 40 76 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov eax, dword ptr [ecx + 88h]
        dec eax
        push eax
        ; Exact mapped bytes E8 ED 75 04 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 194h]
        push edi
        push ebp
        ; Exact mapped bytes E8 20 C1 04 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esi + 194h]
        mov dword ptr [esi + 6ch], edi
        mov dword ptr [esi + 70h], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
