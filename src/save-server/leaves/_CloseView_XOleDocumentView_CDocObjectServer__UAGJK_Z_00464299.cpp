// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464299 .. +0x4A bytes.
extern "C" __declspec(naked) void _CloseView_XOleDocumentView_CDocObjectServer__UAGJK_Z_00464299() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 8], eax
        push 16dh
        push 67cd04h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 A5 5F 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x5f
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
