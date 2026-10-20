// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428C20 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00428c20_00428C20() {
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
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 25: je 0x428c68
        __asm _emit 0x74
        __asm _emit 0x25
        push 1ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 78h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 C7 88 FD FF: call 0x401528
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x428c6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 79 C1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
