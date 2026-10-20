// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005441A0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_005441a0_005441A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 5441f0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2B FA FF FF: call 0x543be4
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5441d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ceh
        push 671fe0h
        ; Exact mapped bytes E8 6F 4B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5441d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5441bc
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
