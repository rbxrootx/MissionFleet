// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546E93 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00546e93_00546E93() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 1b7h
        push 5c8c2ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B0 42 FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x546eca
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b8h
        push 5c8c2ch
        ; Exact mapped bytes E8 3B DB FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546eca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x546eb0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 00 00 00: call 0x546ef9
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
