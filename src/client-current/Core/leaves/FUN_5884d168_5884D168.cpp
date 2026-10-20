// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D168 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5884d168_5884D168() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 64 8B 35 00 00 00 00: mov esi, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 4], 5884d193h
        push 0
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 D8 42 89 58: call dword ptr [0x588942d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 4]
        and eax, 0fffffffdh
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 64 8B 3D 00 00 00 00: mov edi, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 8]
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 64 89 1D 00 00 00 00: mov dword ptr fs:[0], ebx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
