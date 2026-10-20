// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557F13 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_00557f13_00557F13() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 13bh
        push 5cfa14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 30 32 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557f4d
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 5cfa14h
        ; Exact mapped bytes E8 B8 CA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557f4d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557f30
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        neg eax
        sbb eax, eax
        inc eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
