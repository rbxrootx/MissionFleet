// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005491E0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_005491e0_005491E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 549230h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4B F9 FF FF: call 0x548b44
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x549216
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ceh
        push 5c5af0h
        ; Exact mapped bytes E8 EF B7 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549216
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5491fc
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
