// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E3C70 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_586e3c70_586E3C70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 68h]
        mov dword ptr [ebp - 8], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + edx + 94h], 373h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0a8h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 19 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x19
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + edx + 94h], 373h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0a8h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BB 19 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x19
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
