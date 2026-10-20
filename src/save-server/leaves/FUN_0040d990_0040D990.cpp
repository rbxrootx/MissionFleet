// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D990 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_0040d990_0040D990() {
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
        push 1
        push 0
        push 3eeh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 84 0C 00: call 0x4d5e75
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 12 0C 00: call 0x4cebd2
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 17 74 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
