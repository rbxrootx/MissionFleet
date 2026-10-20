// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578574 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00578574_00578574() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 5d11b4h
        push 5d11e8h
        ; Exact mapped bytes E8 88 76 F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5785aa
        __asm _emit 0x74
        __asm _emit 0x11
        push 27h
        push 5d1160h
        ; Exact mapped bytes E8 5B C4 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5785aa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x578590
        __asm _emit 0x75
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
