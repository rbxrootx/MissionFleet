// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057FF48 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_0057ff48_0057FF48() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57ff77
        __asm _emit 0x75
        __asm _emit 0x14
        push 15ch
        push 67849ch
        ; Exact mapped bytes E8 CE 8D FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57ff77
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x57ff54
        __asm _emit 0x75
        __asm _emit 0xd7
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5B 24 00 00: call 0x5823e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 1F: je 0x57ffad
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 74 14: je 0x57ffad
        __asm _emit 0x74
        __asm _emit 0x14
        push 163h
        push 67849ch
        ; Exact mapped bytes E8 98 8D FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57ffad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x57ff85
        __asm _emit 0x75
        __asm _emit 0xd2
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x57ffba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x57ffb3
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 10h
        ; Exact mapped bytes E8 28 24 00 00: call 0x582400
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x24
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
