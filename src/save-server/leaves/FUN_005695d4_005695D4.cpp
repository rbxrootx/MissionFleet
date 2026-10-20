// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005695D4 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_005695d4_005695D4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 45 FD FF: call 0x53dbde
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 24h]
        cmp edx, dword ptr [ecx + 20h]
        ; Exact mapped bytes 76 14: jbe 0x569608
        __asm _emit 0x76
        __asm _emit 0x14
        push 2d9h
        push 67b070h
        ; Exact mapped bytes E8 3D F7 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569608
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x5695e6
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 1D: jne 0x569634
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x569634
        __asm _emit 0x74
        __asm _emit 0x14
        push 2dah
        push 67b070h
        ; Exact mapped bytes E8 11 F7 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569634
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x56960e
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
