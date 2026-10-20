// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004017B9 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_004017b9_004017B9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4017d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 41 2D 00 00: call 0x404520
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 28: jge 0x40180c
        __asm _emit 0x7d
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 4D 2D 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 30h], 1
        ; Exact mapped bytes 75 11: jne 0x40180a
        __asm _emit 0x75
        __asm _emit 0x11
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 32 B8 00 00: call 0x40d03c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BF: jmp 0x4017cb
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov esp, ebp
        pop ebp
        ret
    }
}
