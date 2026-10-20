// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057866F .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_0057866f_0057866F() {
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
        ; Exact mapped bytes 75 11: jne 0x578693
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 5d1160h
        ; Exact mapped bytes E8 72 C3 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578693
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x578679
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5786b0
        __asm _emit 0x75
        __asm _emit 0x11
        push 47h
        push 5d1160h
        ; Exact mapped bytes E8 55 C3 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5786b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x578699
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 93 77 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5786d8
        __asm _emit 0x75
        __asm _emit 0x11
        push 48h
        push 5d1160h
        ; Exact mapped bytes E8 2D C3 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5786d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x5786b6
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 54 20 5E 00: call dword ptr [0x5e2054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x5e
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
