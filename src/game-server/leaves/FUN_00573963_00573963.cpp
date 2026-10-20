// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573963 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_00573963_00573963() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8C 23 00 00: call 0x575d00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x57398e
        __asm _emit 0x75
        __asm _emit 0x14
        push 180h
        push 5cbcc4h
        ; Exact mapped bytes E8 77 10 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57398e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x573974
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 04: je 0x5739a2
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1F: jmp 0x5739c1
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        sub eax, 10h
        mov dword ptr [ebp - 4], eax
        push 18dh
        push 5cbcc4h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A2 77 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
