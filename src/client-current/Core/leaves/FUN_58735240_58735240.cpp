// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735240 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58735240_58735240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x5873525e
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 26 BA 11 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5873527c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 19: jae 0x5873529d
        __asm _emit 0x73
        __asm _emit 0x19
        ; Exact mapped bytes E8 E3 B9 11 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB D6: jmp 0x58735273
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
