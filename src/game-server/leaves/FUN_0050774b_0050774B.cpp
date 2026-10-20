// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050774B .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_0050774b_0050774B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0aeh
        push 5ca348h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F8 39 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 14: je 0x507785
        __asm _emit 0x74
        __asm _emit 0x14
        push 0afh
        push 5ca348h
        ; Exact mapped bytes E8 80 D2 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507785
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x507768
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
