// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005361B3 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_005361b3_005361B3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5361da
        __asm _emit 0x75
        __asm _emit 0x14
        push 351h
        push 636640h
        ; Exact mapped bytes E8 6B 2B FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5361da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5361bd
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 E8 B4 68 00: call dword ptr [0x68b4e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
