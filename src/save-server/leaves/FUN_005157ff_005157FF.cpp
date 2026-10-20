// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005157FF .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_005157ff_005157FF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F D2 FB FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x515825
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x51583f
        __asm _emit 0x75
        __asm _emit 0x14
        push 86ah
        push 673dc0h
        ; Exact mapped bytes E8 06 35 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51583f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x515825
        __asm _emit 0x75
        __asm _emit 0xe0
        push 636f38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 49 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51586a
        __asm _emit 0x75
        __asm _emit 0x14
        push 86bh
        push 673dc0h
        ; Exact mapped bytes E8 DB 34 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51586a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x515845
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
