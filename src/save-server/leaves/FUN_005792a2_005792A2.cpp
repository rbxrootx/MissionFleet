// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005792A2 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_005792a2_005792A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 640cd0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 17 FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5792d8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a7h
        push 67d108h
        ; Exact mapped bytes E8 6D FA FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5792d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5792be
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
