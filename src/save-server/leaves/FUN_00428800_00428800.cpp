// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428800 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00428800_00428800() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c0h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0c0h]
        mov ecx, 30h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 78h
        push 0
        lea eax, [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 90 D0 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 36 8F FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        cmp dword ptr [ebp - 80h], -1
        ; Exact mapped bytes 74 46: je 0x428894
        __asm _emit 0x74
        __asm _emit 0x46
        push 78h
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 38 8A FD FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 25: jne 0x428890
        __asm _emit 0x75
        __asm _emit 0x25
        push 24h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 86 CA 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 4C 8A FD FF: call 0x4012d5
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 06: jmp 0x428896
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x428896
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0c0h
        cmp ebp, esp
        ; Exact mapped bytes E8 4A C5 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
