// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053524B .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0053524b_0053524B() {
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
        ; Exact mapped bytes 75 14: jne 0x535272
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c2h
        push 636640h
        ; Exact mapped bytes E8 D3 3A FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535272
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x535255
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 E0 BC 68 00: call dword ptr [0x68bce0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
