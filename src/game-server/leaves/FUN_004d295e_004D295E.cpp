// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D295E .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_004d295e_004D295E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 75 1B: jne 0x4d2992
        __asm _emit 0x75
        __asm _emit 0x1b
        push 5c4bbch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 AA 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        or ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 33: jmp 0x4d29c5
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 68h]
        push eax
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F AF 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        or ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
