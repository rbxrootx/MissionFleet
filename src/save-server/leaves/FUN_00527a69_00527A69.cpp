// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527A69 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00527a69_00527A69() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 41h
        push 6345fch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DD 27 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x527aa6
        __asm _emit 0x75
        __asm _emit 0x11
        push 42h
        push 6345fch
        ; Exact mapped bytes E8 9F 12 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527aa6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x527a83
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov eax, dword ptr [eax + 10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
