// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005372AD .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_005372ad_005372AD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5372d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c4h
        push 581fc0h
        ; Exact mapped bytes E8 2F D7 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5372d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5372b9
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 4]
        push edx
        push 2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 60 21 5E 00: call dword ptr [0x5e2160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
