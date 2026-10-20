// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004012F2 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_004012f2_004012F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 0cb4h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1b8h], 1
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 31 00 00: call 0x4044a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 13 31 00 00: call 0x404440
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
