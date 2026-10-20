// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504A9F .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00504a9f_00504A9F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        push edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 D0 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 32 D0 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 08 00 00: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
