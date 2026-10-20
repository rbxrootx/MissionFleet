// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887031F .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5887031f_5887031F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp esi, -2
        ; Exact mapped bytes 75 0D: jne 0x5887033d
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 3A 21 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes EB 59: jmp 0x58870396
        __asm _emit 0xeb
        __asm _emit 0x59
        test esi, esi
        ; Exact mapped bytes 78 45: js 0x58870386
        __asm _emit 0x78
        __asm _emit 0x45
        ; Exact mapped bytes 3B 35 B0 9B 96 58: cmp esi, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 3D: jae 0x58870386
        __asm _emit 0x73
        __asm _emit 0x3d
        mov eax, esi
        mov edx, esi
        and eax, 3fh
        sar edx, 6
        imul ecx, eax, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        test byte ptr [eax + ecx + 28h], 1
        ; Exact mapped bytes 74 22: je 0x58870386
        __asm _emit 0x74
        __asm _emit 0x22
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1]
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 10h], esi
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F9 FE FF FF: call 0x5887027d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x58870399
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes E8 E4 20 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 15 0C FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop esi
        leave
        ret
    }
}
