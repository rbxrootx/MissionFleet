// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DC40 .. +0x52 bytes.
extern "C" __declspec(naked) void _HideApplication_CWinApp__QAEXXZ_0050DC40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 26h
        push 5c60a8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 06 D5 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 C8 16 FE FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 C0 EA 02 00: call 0x53c734
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        push 13h
        push 0
        push 0
        push 0
        push 0
        push 5de480h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 02 16 FE FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
