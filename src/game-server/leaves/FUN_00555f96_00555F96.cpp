// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555F96 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_00555f96_00555F96() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 564h
        push 5cfa08h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AD 51 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x555fd0
        __asm _emit 0x75
        __asm _emit 0x14
        push 565h
        push 5cfa08h
        ; Exact mapped bytes E8 35 EA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555fd0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x555fb3
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 73 9E F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555ffb
        __asm _emit 0x75
        __asm _emit 0x14
        push 566h
        push 5cfa08h
        ; Exact mapped bytes E8 0A EA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555ffb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x555fd6
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x556041
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 30 E5 58 00: mov ecx, dword ptr [0x58e530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 8B 15 34 E5 58 00: mov edx, dword ptr [0x58e534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes 8B 0D 38 E5 58 00: mov ecx, dword ptr [0x58e538]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes 8B 15 3C E5 58 00: mov edx, dword ptr [0x58e53c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax + 0ch], edx
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
