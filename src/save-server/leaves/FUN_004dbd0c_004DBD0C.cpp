// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DBD0C .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_004dbd0c_004DBD0C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d898h
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
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 08 B9 FE FF: call 0x4c7640
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 F4 B8 FE FF: call 0x4c7640
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 638e04h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4dbd70
        __asm _emit 0x75
        __asm _emit 0x11
        push 68h
        push 67683ch
        ; Exact mapped bytes E8 D5 CF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dbd70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4dbd59
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 17: je 0x4dbd93
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 74 11: je 0x4dbd93
        __asm _emit 0x74
        __asm _emit 0x11
        push 69h
        push 67683ch
        ; Exact mapped bytes E8 B2 CF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dbd93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4dbd76
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        push 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 44 B9 FE FF: call 0x4c76ec
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 44h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
