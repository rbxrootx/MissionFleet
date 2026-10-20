// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863BD30 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5863bd30_5863BD30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 7d0h
        ; Exact mapped bytes 73 0C: jae 0x5863bd55
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5863bdef
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0bb8h
        ; Exact mapped bytes 73 0C: jae 0x5863bd6a
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5863bdef
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fa0h
        ; Exact mapped bytes 73 09: jae 0x5863bd7c
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 3
        ; Exact mapped bytes EB 73: jmp 0x5863bdef
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp dword ptr [ebp + 8], 1388h
        ; Exact mapped bytes 73 09: jae 0x5863bd8e
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 4
        ; Exact mapped bytes EB 61: jmp 0x5863bdef
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp dword ptr [ebp + 8], 1770h
        ; Exact mapped bytes 73 09: jae 0x5863bda0
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 5
        ; Exact mapped bytes EB 4F: jmp 0x5863bdef
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp + 8], 1b58h
        ; Exact mapped bytes 73 09: jae 0x5863bdb2
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 6
        ; Exact mapped bytes EB 3D: jmp 0x5863bdef
        __asm _emit 0xeb
        __asm _emit 0x3d
        cmp dword ptr [ebp + 8], 1f40h
        ; Exact mapped bytes 73 09: jae 0x5863bdc4
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 7
        ; Exact mapped bytes EB 2B: jmp 0x5863bdef
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp + 8], 2328h
        ; Exact mapped bytes 73 09: jae 0x5863bdd6
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 8
        ; Exact mapped bytes EB 19: jmp 0x5863bdef
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp + 8], 2710h
        ; Exact mapped bytes 73 09: jae 0x5863bde8
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 9
        ; Exact mapped bytes EB 07: jmp 0x5863bdef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0ah
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C 23 ED FF: call 0x5850e150
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x23
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
