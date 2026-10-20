// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7891 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_004e7891_004E7891() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 124h
        push 5c8f3ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B0 38 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 93 85 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e78db
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 5c8f3ch
        ; Exact mapped bytes E8 2A D1 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e78db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4e78b6
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0D: jne 0x4e78f9
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 3B: jmp 0x4e7934
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 4D 85 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7921
        __asm _emit 0x75
        __asm _emit 0x14
        push 130h
        push 5c8f3ch
        ; Exact mapped bytes E8 E4 D0 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7921
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4e78f9
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 0E: jne 0x4e794d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 3B: jmp 0x4e7988
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 FA 84 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7974
        __asm _emit 0x75
        __asm _emit 0x14
        push 139h
        push 5c8f3ch
        ; Exact mapped bytes E8 91 D0 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7974
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4e794d
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC F8 FF FF: call 0x4e7280
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
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
