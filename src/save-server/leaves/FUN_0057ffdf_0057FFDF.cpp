// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057FFDF .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0057ffdf_0057FFDF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 16fh
        push 67849ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 64 A2 F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x580019
        __asm _emit 0x75
        __asm _emit 0x14
        push 170h
        push 67849ch
        ; Exact mapped bytes E8 2C 8D FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580019
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x57fffc
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x58002d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA A9 FC FF: call 0x54a9d7
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 63fc30h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A AA FC FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xaa
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
