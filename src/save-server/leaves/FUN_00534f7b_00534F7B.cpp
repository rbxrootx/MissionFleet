// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534F7B .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00534f7b_00534F7B() {
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
        ; Exact mapped bytes 75 14: jne 0x534fa2
        __asm _emit 0x75
        __asm _emit 0x14
        push 2aeh
        push 636640h
        ; Exact mapped bytes E8 A3 3D FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534fa2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534f85
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
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 39 65 F1 FF: call 0x44b510
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x65
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
