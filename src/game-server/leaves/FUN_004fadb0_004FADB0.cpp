// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FADB0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_004fadb0_004FADB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4fadd7
        __asm _emit 0x75
        __asm _emit 0x11
        push 17h
        push 5c73e4h
        ; Exact mapped bytes E8 2E 9C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fadd7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4fadbd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 7F 11: jg 0x4fadf7
        __asm _emit 0x7f
        __asm _emit 0x11
        push 18h
        push 5c73f0h
        ; Exact mapped bytes E8 0E 9C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fadf7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4faddd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 12: je 0x4fae18
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 7E 09: jle 0x4fae18
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F1 21 FF FF: call 0x4ed009
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x21
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
