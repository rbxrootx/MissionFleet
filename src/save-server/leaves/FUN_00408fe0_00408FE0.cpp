// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408FE0 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_00408fe0_00408FE0() {
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
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 84 FF FF: call 0x4014d8
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 04: jne 0x40900e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x409027
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA FF 01 00: call 0x428fd4
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x409025
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x409027
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 BC BD 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbd
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
