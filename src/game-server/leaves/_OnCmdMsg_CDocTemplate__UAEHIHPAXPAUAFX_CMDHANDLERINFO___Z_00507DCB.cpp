// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507DCB .. +0x70 bytes.
extern "C" __declspec(naked) void _OnCmdMsg_CDocTemplate__UAEHIHPAXPAUAFX_CMDHANDLERINFO___Z_00507DCB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        push 583058h
        ; Exact mapped bytes E8 1E 33 FF FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 0ch], -4
        ; Exact mapped bytes 75 26: jne 0x507e17
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x507e17
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 1B: jmp 0x507e32
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F0 04 FF FF: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
