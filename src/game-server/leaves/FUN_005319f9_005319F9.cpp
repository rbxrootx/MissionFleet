// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005319F9 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_005319f9_005319F9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 FE FF FF: call 0x5318fc
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x531a23
        __asm _emit 0x75
        __asm _emit 0x14
        push 156h
        push 5820d4h
        ; Exact mapped bytes E8 E2 2F 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x531a23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x531a03
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x531a46
        __asm _emit 0x74
        __asm _emit 0x14
        push 157h
        push 5820d4h
        ; Exact mapped bytes E8 BF 2F 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x531a46
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x531a29
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 3ch], ecx
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
