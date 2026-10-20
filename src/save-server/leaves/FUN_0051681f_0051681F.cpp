// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051681F .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_0051681f_0051681F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 A6 FB FF: call 0x4d0eb7
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x51684d
        __asm _emit 0x74
        __asm _emit 0x14
        push 1dah
        push 674cach
        ; Exact mapped bytes E8 F8 24 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51684d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x516829
        __asm _emit 0x75
        __asm _emit 0xd6
        xor eax, eax
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
