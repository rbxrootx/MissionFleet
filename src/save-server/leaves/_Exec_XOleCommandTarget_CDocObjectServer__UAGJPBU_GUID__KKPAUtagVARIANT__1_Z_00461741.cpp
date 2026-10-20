// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461741 .. +0x7F bytes.
extern "C" __declspec(naked) void _Exec_XOleCommandTarget_CDocObjectServer__UAGJPBU_GUID__KKPAUtagVARIANT__1_Z_00461741() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        sub eax, 3ch
        mov dword ptr [ebp - 8], eax
        push 0f5h
        push 67c9d4h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 FD 8A 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 B2 02 00 00: call 0x461a32
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80004001h
        ; Exact mapped bytes 75 2B: jne 0x4617b7
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 03 00 00: call 0x461a97
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 89 FE FF FF: call 0x46163d
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
