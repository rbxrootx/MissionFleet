// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053850D .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0053850d_0053850D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x538534
        __asm _emit 0x75
        __asm _emit 0x14
        push 27ch
        push 581fc0h
        ; Exact mapped bytes E8 D1 C4 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x538534
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x538517
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E0 E1 FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 E1 FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 1C 1F 5E 00: call dword ptr [0x5e1f1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
