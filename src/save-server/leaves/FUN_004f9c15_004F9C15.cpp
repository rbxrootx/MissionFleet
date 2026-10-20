// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9C15 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_004f9c15_004F9C15() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 1a7h
        push 674fe8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2E 06 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x4f9c43
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 44h]
        ; Exact mapped bytes 7C 14: jl 0x4f9c57
        __asm _emit 0x7c
        __asm _emit 0x14
        push 1a8h
        push 674fe8h
        ; Exact mapped bytes E8 EE F0 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9c57
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4f9c32
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + ecx + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + ecx]
        mov dword ptr [edx], eax
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
