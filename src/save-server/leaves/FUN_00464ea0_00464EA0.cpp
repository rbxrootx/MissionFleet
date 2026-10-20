// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464EA0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00464ea0_00464EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
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
        mov dword ptr [ebp - 4], 464ecch
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BE E5 01 00: call 0x48348a
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        and ecx, 0fffffffdh
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
