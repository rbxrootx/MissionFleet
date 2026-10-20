// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DAEAD .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_004daead_004DAEAD() {
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
        ; Exact mapped bytes 75 14: jne 0x4daed4
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e9h
        push 5835a8h
        ; Exact mapped bytes E8 31 9B 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4daed4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4daeb7
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 74 1E 5E 00: call dword ptr [0x5e1e74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
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
