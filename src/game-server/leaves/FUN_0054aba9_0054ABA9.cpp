// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054ABA9 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_0054aba9_0054ABA9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x54abd0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c3h
        push 5cc7f0h
        ; Exact mapped bytes E8 35 9E FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54abd0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x54abb3
        __asm _emit 0x75
        __asm _emit 0xdd
        push 5cc8f8h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        ; Exact mapped bytes E8 D6 FE FF FF: call 0x54aabd
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x54abf9
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes E8 DD 36 FE FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x54abfb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
