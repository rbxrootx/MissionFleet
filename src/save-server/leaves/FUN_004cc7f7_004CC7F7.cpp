// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC7F7 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_004cc7f7_004CC7F7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE 84 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 43: jle 0x4cc853
        __asm _emit 0x7e
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 84 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6D FE FF FF: call 0x4cc690
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 87 FD FF FF: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C CE F7 FF: call 0x449650
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 B0 8A F9 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5E 84 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 14: jle 0x4cc874
        __asm _emit 0x7e
        __asm _emit 0x14
        push 0c0h
        push 6714ach
        ; Exact mapped bytes E8 D1 C4 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc874
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4cc853
        __asm _emit 0x75
        __asm _emit 0xd9
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
