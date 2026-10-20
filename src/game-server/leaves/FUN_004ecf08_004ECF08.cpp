// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECF08 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004ecf08_004ECF08() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 E3 00 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 77 14: ja 0x4ecf37
        __asm _emit 0x77
        __asm _emit 0x14
        push 17fh
        push 5c7e38h
        ; Exact mapped bytes E8 CE 7A 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecf37
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ecf1a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x4ecf63
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ecf63
        __asm _emit 0x75
        __asm _emit 0x14
        push 180h
        push 5c7e38h
        ; Exact mapped bytes E8 A2 7A 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecf63
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4ecf3d
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
