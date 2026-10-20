// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B030 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_0040b030_0040B030() {
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
        push 900h
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 63 A8 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 2A: je 0x40b090
        __asm _emit 0x74
        __asm _emit 0x2a
        push 900h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 1D 62 FF FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x40b08c
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 06: jmp 0x40b092
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x40b092
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 51 9D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
