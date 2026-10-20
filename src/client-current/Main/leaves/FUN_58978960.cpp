// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58978960 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_58978960() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        test ebx, ebx
        mov ebp, dword ptr [esi + 0ch]
        ; Exact mapped bytes 75 17: jne 0x5897898a
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 28h
        mov eax, dword ptr [esi + 20h]
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov eax, dword ptr [esp + 18h]
        mov edi, 1
        mov ecx, ebx
        add ebp, ebx
        shl edi, cl
        mov ecx, 18h
        sub ecx, ebp
        dec edi
        and edi, eax
        shl edi, cl
        mov ecx, dword ptr [esi + 8]
        or edi, ecx
        cmp ebp, 8
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 7C 5C: jl 0x58978a0f
        __asm _emit 0x7c
        __asm _emit 0x5c
        mov eax, dword ptr [esi]
        xor ebx, ebx
        mov bl, byte ptr [esp + 16h]
        mov byte ptr [eax], bl
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        inc ecx
        dec eax
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 75 0D: jne 0x589789d8
        __asm _emit 0x75
        __asm _emit 0x0d
        push esi
        ; Exact mapped bytes E8 5F 00 00 00: call 0x58978a30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test al, al
        ; Exact mapped bytes 74 44: je 0x58978a1c
        __asm _emit 0x74
        __asm _emit 0x44
        cmp ebx, 0ffh
        ; Exact mapped bytes 75 20: jne 0x58978a00
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [esi]
        mov byte ptr [ecx], 0
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        inc ecx
        dec eax
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 75 0D: jne 0x58978a00
        __asm _emit 0x75
        __asm _emit 0x0d
        push esi
        ; Exact mapped bytes E8 37 00 00 00: call 0x58978a30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test al, al
        ; Exact mapped bytes 74 1C: je 0x58978a1c
        __asm _emit 0x74
        __asm _emit 0x1c
        sub ebp, 8
        shl edi, 8
        cmp ebp, 8
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 7D A4: jge 0x589789b3
        __asm _emit 0x7d
        __asm _emit 0xa4
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], ebp
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
    }
}
