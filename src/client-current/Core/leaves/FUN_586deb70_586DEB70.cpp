// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DEB70 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_586deb70_586DEB70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 54h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        ; Exact mapped bytes E8 60 AB E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xab
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, eax
        sub esi, 9
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c4h]
        ; Exact mapped bytes E8 CD 20 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 46: jle 0x586debf4
        __asm _emit 0x7e
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4a4h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        sub esi, 0eh
        mov edi, dword ptr [ebp - 0ch]
        imul edi, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c4h]
        ; Exact mapped bytes E8 18 AB E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xab
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 9
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 10h], esi
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3D 6B 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes E8 EE AA E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xaa
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, eax
        sub esi, 6
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 5B 20 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 46: jle 0x586dec66
        __asm _emit 0x7e
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4a8h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        sub esi, 0eh
        mov edi, dword ptr [ebp - 0ch]
        imul edi, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c8h]
        ; Exact mapped bytes E8 A6 AA E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xaa
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 6
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 18h], esi
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CB 6A 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
