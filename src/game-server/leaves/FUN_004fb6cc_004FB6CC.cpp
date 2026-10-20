// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB6CC .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_004fb6cc_004FB6CC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0
        ; Exact mapped bytes E8 B4 FE FF FF: call 0x4fb590
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x4fb723
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 1A F9 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1C: je 0x4fb71d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 11: je 0x4fb71d
        __asm _emit 0x74
        __asm _emit 0x11
        push 48h
        push 5c76b8h
        ; Exact mapped bytes E8 E8 92 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb71d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4fb6fb
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 8]
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
