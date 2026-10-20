// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423260 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_00423260_00423260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push -1
        push -1
        push 0
        push 28h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 B6 00 00: call 0x42e900
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6342a0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ca0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ca4h], 3e8h
        mov esi, esp
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 25 1B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ca8h], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 0C 1B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
