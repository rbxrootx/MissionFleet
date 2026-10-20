// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005370E0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_005370e0_005370E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x5370f9
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x53710d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b1h
        push 581fc0h
        ; Exact mapped bytes E8 F8 D8 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53710d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x5370ea
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 C0 21 5E 00: call dword ptr [0x5e21c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 CB FC FF: call 0x503d0a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcb
        __asm _emit 0xfc
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
