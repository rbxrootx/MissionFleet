// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534929 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00534929_00534929() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x534950
        __asm _emit 0x75
        __asm _emit 0x14
        push 27ch
        push 636640h
        ; Exact mapped bytes E8 F5 43 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534950
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534933
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1C E2 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 E2 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 88 B4 68 00: call dword ptr [0x68b488]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
