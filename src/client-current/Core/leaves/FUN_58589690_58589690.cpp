// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58589690 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58589690_58589690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0b8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA C9 EF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc9
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B7 1A 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1a
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B 5D F1 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x5d
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
