// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DA18 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_0042da18_0042DA18() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov ebx, ecx
        test esi, esi
        ; Exact mapped bytes 75 09: jne 0x42da2d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebx], eax
        ; Exact mapped bytes EB 68: jmp 0x42da95
        __asm _emit 0xeb
        __asm _emit 0x68
        push edi
        push 40h
        pop edi
        cmp esi, edi
        ; Exact mapped bytes 7F 0F: jg 0x42da44
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov ecx, 44dc90h
        ; Exact mapped bytes E8 3F 9D FE FF: call 0x41777e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax + 8], edi
        ; Exact mapped bytes EB 3D: jmp 0x42da81
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edi, 80h
        cmp esi, edi
        ; Exact mapped bytes 7F 07: jg 0x42da54
        __asm _emit 0x7f
        __asm _emit 0x07
        mov ecx, 44dc68h
        ; Exact mapped bytes EB E6: jmp 0x42da3a
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edi, 100h
        cmp esi, edi
        ; Exact mapped bytes 7F 07: jg 0x42da64
        __asm _emit 0x7f
        __asm _emit 0x07
        mov ecx, 44dc40h
        ; Exact mapped bytes EB D6: jmp 0x42da3a
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edi, 200h
        cmp esi, edi
        ; Exact mapped bytes 7F 07: jg 0x42da74
        __asm _emit 0x7f
        __asm _emit 0x07
        mov ecx, 44dc18h
        ; Exact mapped bytes EB C6: jmp 0x42da3a
        __asm _emit 0xeb
        __asm _emit 0xc6
        lea eax, [esi + 0dh]
        push eax
        ; Exact mapped bytes E8 6F FE FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [eax + 8], esi
        mov dword ptr [eax], 1
        and byte ptr [eax + esi + 0ch], 0
        mov dword ptr [eax + 4], esi
        add eax, 0ch
        mov dword ptr [ebx], eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
