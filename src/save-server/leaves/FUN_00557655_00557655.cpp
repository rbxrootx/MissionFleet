// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557655 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_00557655_00557655() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 173h
        push 67c630h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 EC 2B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x55769d
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BD BD F4 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55769d
        __asm _emit 0x75
        __asm _emit 0x14
        push 174h
        push 67c630h
        ; Exact mapped bytes E8 A8 16 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55769d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x557674
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5576c0
        __asm _emit 0x75
        __asm _emit 0x14
        push 175h
        push 67c630h
        ; Exact mapped bytes E8 85 16 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5576c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5576a3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A1 5E FF FF: call 0x54d578
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 7D 04: jge 0x5576ea
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 66: jmp 0x557750
        __asm _emit 0xeb
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 28 F1 FF FF: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 17eh
        push 67c630h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 58 2B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2b
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 56 82 FF FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x557738
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F FE FF FF: call 0x5575a5
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x557719
        __asm _emit 0xeb
        __asm _emit 0xe1
        push 187h
        push 67c630h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 15 2B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2b
        __asm _emit 0xf8
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
