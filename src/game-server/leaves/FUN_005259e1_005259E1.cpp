// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005259E1 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_005259e1_005259E1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E D0 FC FF: call 0x4f2a61
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 28h
        ; Exact mapped bytes 74 14: je 0x525a1f
        __asm _emit 0x74
        __asm _emit 0x14
        push 4f9h
        push 5c8174h
        ; Exact mapped bytes E8 E6 EF 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525a1f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x525a02
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 40h]
        and eax, 8
        cmp eax, 8
        ; Exact mapped bytes 74 14: je 0x525a47
        __asm _emit 0x74
        __asm _emit 0x14
        push 4fah
        push 5c8174h
        ; Exact mapped bytes E8 BE EF 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525a47
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x525a25
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
