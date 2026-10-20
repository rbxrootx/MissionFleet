// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413FA0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00413fa0_00413FA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 1C: jle 0x413fe3
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 85 1C 05 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 06: jmp 0x413fe9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 F7 0D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
