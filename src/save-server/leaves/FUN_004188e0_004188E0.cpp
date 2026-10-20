// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004188E0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_004188e0_004188E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 8B FE FF: call 0x4014d8
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D 88 FE FF: call 0x401159
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x41891c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 8A FE FF: call 0x40138e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x418942
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 0
        push 80016000h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 17 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB CF: jmp 0x418911
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 9C C4 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
