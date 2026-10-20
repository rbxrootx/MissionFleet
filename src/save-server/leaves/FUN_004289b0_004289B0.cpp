// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004289B0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_004289b0_004289B0() {
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
        ; Exact mapped bytes E8 E0 CE 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 86 8D FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        cmp dword ptr [ebp - 80h], -1
        ; Exact mapped bytes 74 49: je 0x428a47
        __asm _emit 0x74
        __asm _emit 0x49
        push 78h
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 88 88 FD FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 28: jne 0x428a43
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 64h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7C 1C: jl 0x428a3f
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 64h]
        sub ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 64h], ecx
        lea edx, [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 9D 88 FD FF: call 0x4012d5
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 0A: jmp 0x428a49
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x428a49
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x428a49
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0c0h
        cmp ebp, esp
        ; Exact mapped bytes E8 97 C3 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc3
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
