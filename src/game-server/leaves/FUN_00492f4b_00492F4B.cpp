// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00492F4B .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_00492f4b_00492F4B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x492f75
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 B4 00 00 00: call dword ptr [eax + 0xb4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        push 58e4f0h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 3C: jl 0x492fd6
        __asm _emit 0x7c
        __asm _emit 0x3c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x492fb4
        __asm _emit 0x75
        __asm _emit 0x14
        push 367h
        push 5ca8a4h
        ; Exact mapped bytes E8 51 1A 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1a
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492fb4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x492f9a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
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
