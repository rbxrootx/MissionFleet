// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C9AA .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_0055c9aa_0055C9AA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 FE FF FF: call 0x55c7cf
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 67b250h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A BE FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B C0 FC FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 67b264h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F BE FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 C1 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 67b278h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 BE FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED BF FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 67b28ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 BE FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 BE FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 67b2a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E BE FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 C0 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 67b2b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 BD FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C BF FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 67b2cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 BD FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AA C0 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 67b2e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA BD FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 BF FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 55c710h
        ; Exact mapped bytes 75 0F: jne 0x55cab3
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67b2f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A BD FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55cac0
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67b32ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B BD FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 67b360h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 BD FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D BF FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67b370h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 BD FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
