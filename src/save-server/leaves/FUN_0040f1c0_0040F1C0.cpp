// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F1C0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_0040f1c0_0040F1C0() {
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
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E F2 0B 00: call 0x4ce3f7
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 633b2ch
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 EE 5B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
