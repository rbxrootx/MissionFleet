// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005370E6 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_005370e6_005370E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x53710f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d7h
        push 636640h
        ; Exact mapped bytes E8 36 1C FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53710f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5370f2
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 8C B5 68 00: call dword ptr [0x68b58c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53713e
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d8h
        push 636640h
        ; Exact mapped bytes E8 07 1C FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53713e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x537115
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes D9 45 FC: fld dword ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xfc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
