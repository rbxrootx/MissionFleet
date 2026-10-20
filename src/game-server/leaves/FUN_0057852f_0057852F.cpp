// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057852F .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_0057852f_0057852F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 5d1178h
        push 5d11b0h
        ; Exact mapped bytes E8 CD 76 F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x578565
        __asm _emit 0x74
        __asm _emit 0x11
        push 22h
        push 5d1160h
        ; Exact mapped bytes E8 A0 C4 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578565
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x57854b
        __asm _emit 0x75
        __asm _emit 0xe0
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
