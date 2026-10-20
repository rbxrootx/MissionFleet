// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057B28B .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_0057b28b_0057B28B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 75 07: jne 0x57b2b4
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 80004005h
        ; Exact mapped bytes EB 39: jmp 0x57b2ed
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x57b2d1
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b8h
        push 67d108h
        ; Exact mapped bytes E8 74 DA FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57b2d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x57b2b4
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
