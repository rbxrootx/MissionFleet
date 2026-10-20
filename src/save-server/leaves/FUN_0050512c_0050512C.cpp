// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050512C .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0050512c_0050512C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 639f0ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 75 11: jne 0x505159
        __asm _emit 0x75
        __asm _emit 0x11
        push 40h
        push 677edch
        ; Exact mapped bytes E8 EC 3B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505159
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x50513f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 19: je 0x505184
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push -1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 E9 3F 00 00: call 0x50916d
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
