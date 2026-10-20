// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005004FD .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_005004fd_005004FD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 04 FD FF: call 0x4d0991
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 1D: je 0x500535
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 75 14: jne 0x500535
        __asm _emit 0x75
        __asm _emit 0x14
        push 3dah
        push 6756ach
        ; Exact mapped bytes E8 10 88 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500535
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x50050f
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 40ffffh
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 64h]
        ; Exact mapped bytes 74 14: je 0x500563
        __asm _emit 0x74
        __asm _emit 0x14
        push 3dbh
        push 6756ach
        ; Exact mapped bytes E8 E2 87 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500563
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x50053b
        __asm _emit 0x75
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
