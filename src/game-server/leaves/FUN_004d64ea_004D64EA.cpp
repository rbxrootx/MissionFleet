// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D64EA .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004d64ea_004D64EA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 14: je 0x4d6513
        __asm _emit 0x74
        __asm _emit 0x14
        push 4c2h
        push 5c64b4h
        ; Exact mapped bytes E8 F2 E4 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6513
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d64f6
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d6533
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c3h
        push 5c64b4h
        ; Exact mapped bytes E8 D2 E4 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6533
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d6519
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB B3 05 00: call 0x5318fc
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d6559
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c4h
        push 5c64b4h
        ; Exact mapped bytes E8 AC E4 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6559
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4d6539
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E5 9C 00 00: call 0x4e0250
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 64 27 FF FF: call 0x4c8cd8
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        cmp dword ptr [edx + 4], 0
        setne al
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
