// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506E70 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58506e70_58506E70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax - 20h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx - 20h], 588a3cech
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 20h]
        mov eax, dword ptr [edx + 4]
        sub eax, 20h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 20h]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 8
        ; Exact mapped bytes E8 5E 00 00 00: call 0x58506f10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 8
        ; Exact mapped bytes E8 13 00 00 00: call 0x58506ed0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
