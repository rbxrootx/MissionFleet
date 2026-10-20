// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F4ED0 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_584f4ed0_584F4ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a32d0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ef4h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584f4f01
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 11h
        ; Exact mapped bytes 7D 13: jge 0x584f4f1a
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0e28h], 0
        ; Exact mapped bytes EB DE: jmp 0x584f4ef8
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584f4f2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 11h
        ; Exact mapped bytes 7D 23: jge 0x584f4f55
        __asm _emit 0x7d
        __asm _emit 0x23
        push 0c0h
        push 0
        imul eax, dword ptr [ebp - 0ch], 0c0h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes E8 C0 7E 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7e
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB CE: jmp 0x584f4f23
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ef8h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
