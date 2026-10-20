// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00558C05 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_00558c05_00558C05() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 173h
        push 5cfe58h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 3C 25 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x25
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x558c4d
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FD 71 F7 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x71
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x558c4d
        __asm _emit 0x75
        __asm _emit 0x14
        push 174h
        push 5cfe58h
        ; Exact mapped bytes E8 B8 BD FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558c4d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x558c24
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x558c70
        __asm _emit 0x75
        __asm _emit 0x14
        push 175h
        push 5cfe58h
        ; Exact mapped bytes E8 95 BD FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558c70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x558c53
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 81 5E FF FF: call 0x54eb08
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 7D 04: jge 0x558c9a
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 66: jmp 0x558d00
        __asm _emit 0xeb
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E F1 FF FF: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 17eh
        push 5cfe58h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 A8 24 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 82 FF FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x558ce8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F FE FF FF: call 0x558b55
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x558cc9
        __asm _emit 0xeb
        __asm _emit 0xe1
        push 187h
        push 5cfe58h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 65 24 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, 1
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
