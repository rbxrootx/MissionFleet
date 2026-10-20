// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5201 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_004f5201_004F5201() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f5227
        __asm _emit 0x75
        __asm _emit 0x14
        push 95ch
        push 5c5574h
        ; Exact mapped bytes E8 DE F7 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f5227
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f520d
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 81 3D EC E8 5D 00 33 03 00 00: cmp dword ptr [0x5de8ec], 0x333
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 04: jae 0x4f523d
        __asm _emit 0x73
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5B: jmp 0x4f5298
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 28: je 0x4f5274
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x4f5274
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp + 8], 2
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 1ch
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 A4 25 5E 00: call dword ptr [0x5e25a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
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
