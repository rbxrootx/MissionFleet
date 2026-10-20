// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550356 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_00550356_00550356() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 145h
        push 5cf710h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 EB AD FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x550392
        __asm _emit 0x75
        __asm _emit 0x14
        push 146h
        push 5cf710h
        ; Exact mapped bytes E8 73 46 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550392
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x550375
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55039f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x550398
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x5503ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x5503a5
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x5503b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x5503b2
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        cmp dword ptr [ebp + 8], 0
        setge al
        dec eax
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 09: je 0x550406
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 1D F6 FF FF: call 0x54fa23
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 14: je 0x550420
        __asm _emit 0x74
        __asm _emit 0x14
        push 153h
        push 5cf710h
        ; Exact mapped bytes E8 E5 45 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550420
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x550406
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
