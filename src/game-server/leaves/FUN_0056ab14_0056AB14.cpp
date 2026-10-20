// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AB14 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0056ab14_0056AB14() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 28bh
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2F 06 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x56ab4b
        __asm _emit 0x75
        __asm _emit 0x14
        push 28ch
        push 5d053ch
        ; Exact mapped bytes E8 BA 9E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ab4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56ab31
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0f08ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 FE FF FF: call 0x56aa45
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
