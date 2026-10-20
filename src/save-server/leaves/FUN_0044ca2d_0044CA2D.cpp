// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044CA2D .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0044ca2d_0044CA2D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 18: je 0x44ca58
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 50h]
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 14: je 0x44ca75
        __asm _emit 0x74
        __asm _emit 0x14
        push 181h
        push 676dcch
        ; Exact mapped bytes E8 D0 C2 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44ca75
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44ca58
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 48h], eax
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
