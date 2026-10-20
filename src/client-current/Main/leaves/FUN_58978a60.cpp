// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58978A60 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_58978a60() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes E8 85 00 00 00: call 0x58978af0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test al, al
        ; Exact mapped bytes 75 02: jne 0x58978a74
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        mov eax, dword ptr [esi]
        mov byte ptr [eax], 0ffh
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        inc ecx
        dec eax
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 75 0F: jne 0x58978a96
        __asm _emit 0x75
        __asm _emit 0x0f
        push esi
        ; Exact mapped bytes E8 A3 FF FF FF: call 0x58978a30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test al, al
        ; Exact mapped bytes 75 02: jne 0x58978a96
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        mov cl, byte ptr [esp + 0ch]
        mov edx, dword ptr [esi]
        sub cl, 30h
        mov byte ptr [edx], cl
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        inc ecx
        dec eax
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 75 0F: jne 0x58978abe
        __asm _emit 0x75
        __asm _emit 0x0f
        push esi
        ; Exact mapped bytes E8 7B FF FF FF: call 0x58978a30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test al, al
        ; Exact mapped bytes 75 02: jne 0x58978abe
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        mov ecx, dword ptr [esi + 20h]
        xor eax, eax
        mov edx, dword ptr [ecx + 0e4h]
        test edx, edx
        ; Exact mapped bytes 7E 18: jle 0x58978ae5
        __asm _emit 0x7e
        __asm _emit 0x18
        lea ecx, [esi + 10h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [esi + 20h]
        inc eax
        add ecx, 4
        cmp eax, dword ptr [edx + 0e4h]
        ; Exact mapped bytes 7C EB: jl 0x58978ad0
        __asm _emit 0x7c
        __asm _emit 0xeb
        mov al, 1
        pop esi
        ret
    }
}
