// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A740 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_5879a740_5879A740() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        cmp al, 4
        ; Exact mapped bytes 75 4E: jne 0x5879a795
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, dword ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 48: je 0x5879a795
        __asm _emit 0x74
        __asm _emit 0x48
        shr eax, 8
        test al, 1
        ; Exact mapped bytes 75 29: jne 0x5879a77d
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, edx
        push esi
        lea esi, [ecx + 1]
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5879a760
        __asm _emit 0x75
        __asm _emit 0xf9
        mov eax, dword ptr [esp + 8]
        sub ecx, esi
        add ecx, edx
        pop esi
        mov dword ptr [eax], edx
        mov eax, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        mov al, 1
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edx]
        add edx, 4
        mov eax, dword ptr [esp + 4]
        add ecx, edx
        mov dword ptr [eax], edx
        mov eax, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        mov al, 1
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
