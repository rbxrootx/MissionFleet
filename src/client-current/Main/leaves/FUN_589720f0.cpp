// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589720F0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_589720f0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x589720ff
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        pop esi
        ret
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes 8B 3D 44 C3 98 58: mov edi, dword ptr [0x5898c344]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 2D CC C2 98 58: mov ebp, dword ptr [0x5898c2cc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xcc
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebx, eax
        mov eax, dword ptr [esi + 4]
        push 2
        push 0
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esi + 4]
        push 0
        push ebx
        push edx
        mov edi, eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 20h
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    }
}
