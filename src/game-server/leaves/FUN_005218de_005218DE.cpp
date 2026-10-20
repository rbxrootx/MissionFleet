// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005218DE .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_005218de_005218DE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 11: jne 0x521905
        __asm _emit 0x75
        __asm _emit 0x11
        push 23h
        push 5ccaf0h
        ; Exact mapped bytes E8 00 31 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521905
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5218e8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 84h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
