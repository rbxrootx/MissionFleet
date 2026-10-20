// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005468D9 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_005468d9_005468D9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 124h
        push 5c8c2ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6A 48 FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 49: je 0x546948
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x546924
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 5c8c2ch
        ; Exact mapped bytes E8 E1 E0 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546924
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5468ff
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 52 FF FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 425h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 55 52 FF FF: call 0x53bba9
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x52
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
