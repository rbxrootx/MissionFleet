// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005380AB .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_005380ab_005380AB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5380d4
        __asm _emit 0x75
        __asm _emit 0x14
        push 259h
        push 581fc0h
        ; Exact mapped bytes E8 31 C9 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5380d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5380b7
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 08 1F 5E 00: call dword ptr [0x5e1f08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x538103
        __asm _emit 0x75
        __asm _emit 0x14
        push 25bh
        push 581fc0h
        ; Exact mapped bytes E8 02 C9 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x538103
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x5380da
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 D8 FF FF: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
