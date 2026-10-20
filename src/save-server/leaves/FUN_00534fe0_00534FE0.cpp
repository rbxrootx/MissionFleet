// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534FE0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00534fe0_00534FE0() {
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
        ; Exact mapped bytes 75 14: jne 0x535007
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b1h
        push 636640h
        ; Exact mapped bytes E8 3E 3D FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535007
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534fea
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 1ch]
        or edx, 3
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes E8 4E DB FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 CF 64 F1 FF: call 0x44b510
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
