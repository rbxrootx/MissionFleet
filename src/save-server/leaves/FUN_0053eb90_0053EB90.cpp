// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053EB90 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_0053eb90_0053EB90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 53ebe0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 4E 00 00: call 0x543a5c
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x53ebc6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aeh
        push 671fe0h
        ; Exact mapped bytes E8 7F A1 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53ebc6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53ebac
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
