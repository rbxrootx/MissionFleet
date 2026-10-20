// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DBF0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0040dbf0_0040DBF0() {
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
        mov eax, dword ptr [ebp + 8]
        push eax
        push 684ba0h
        ; Exact mapped bytes E8 55 7D 05 00: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 C5 71 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
