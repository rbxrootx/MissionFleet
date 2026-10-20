// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053ACD9 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0053acd9_0053ACD9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x53ad02
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d7h
        push 581fc0h
        ; Exact mapped bytes E8 03 9D FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53ad02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53ace5
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 20 20 5E 00: call dword ptr [0x5e2020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53ad31
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d8h
        push 581fc0h
        ; Exact mapped bytes E8 D4 9C FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53ad31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x53ad08
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes D9 45 FC: fld dword ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xfc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
