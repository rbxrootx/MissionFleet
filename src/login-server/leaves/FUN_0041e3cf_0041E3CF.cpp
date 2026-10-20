// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E3CF .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0041e3cf_0041E3CF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 41e3f7h
        push 0
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 A9 00 00: call 0x428df0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 4]
        and al, 0fdh
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 8]
        mov dword ptr [ebx], eax
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
