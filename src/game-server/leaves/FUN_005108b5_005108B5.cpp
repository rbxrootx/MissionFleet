// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005108B5 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_005108b5_005108B5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 193h
        push 5c84b0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8E A8 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x5108e3
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 40h]
        ; Exact mapped bytes 7C 14: jl 0x5108f7
        __asm _emit 0x7c
        __asm _emit 0x14
        push 194h
        push 5c84b0h
        ; Exact mapped bytes E8 0E 41 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5108f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5108d2
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + ecx + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
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
