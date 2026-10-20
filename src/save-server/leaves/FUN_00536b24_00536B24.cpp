// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536B24 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00536b24_00536B24() {
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
        ; Exact mapped bytes 75 14: jne 0x536b4b
        __asm _emit 0x75
        __asm _emit 0x14
        push 3a6h
        push 636640h
        ; Exact mapped bytes E8 FA 21 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x536b4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x536b2e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 0E FB FF: call 0x4e7a4d
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
