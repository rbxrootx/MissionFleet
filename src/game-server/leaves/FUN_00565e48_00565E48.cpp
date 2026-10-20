// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565E48 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_00565e48_00565E48() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5802eah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58b5ach
        mov dword ptr [ebp - 4], 1
        push 2bh
        push 5d0c78h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D9 52 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0a0h], 0
        ; Exact mapped bytes 74 11: je 0x565ea4
        __asm _emit 0x74
        __asm _emit 0x11
        push 2dh
        push 5d0c78h
        ; Exact mapped bytes E8 61 EB FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x565ea4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x565e87
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8C 55 FA FF: call 0x50b43e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 C4 CC FC FF: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x565ed2
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 5d0c78h
        ; Exact mapped bytes E8 33 EB FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x565ed2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x565eb2
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 04 00 00: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 15 65 FE FF: call 0x54c3fd
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 52 79 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 23 AC FE FF: call 0x550b2c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
