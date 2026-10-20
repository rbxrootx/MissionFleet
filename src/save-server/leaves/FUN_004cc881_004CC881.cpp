// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC881 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_004cc881_004CC881() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 84 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7F 10: jg 0x4cc8a8
        __asm _emit 0x7f
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 84 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 14: jle 0x4cc8bc
        __asm _emit 0x7e
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 FD FF FF: call 0x4cc690
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD FC FF FF: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 83 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 14: jle 0x4cc8dd
        __asm _emit 0x7e
        __asm _emit 0x14
        push 0cah
        push 6714ach
        ; Exact mapped bytes E8 68 C4 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc8dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4cc8bc
        __asm _emit 0x75
        __asm _emit 0xd9
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
