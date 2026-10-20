// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052AE6E .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_0052ae6e_0052AE6E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 2F: jne 0x52aeb0
        __asm _emit 0x75
        __asm _emit 0x2f
        push 8
        ; Exact mapped bytes E8 73 C5 FC FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52aea0
        __asm _emit 0x75
        __asm _emit 0x14
        push 20dh
        push 5c8fcch
        ; Exact mapped bytes E8 65 9B 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52aea0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x52ae81
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], 582e84h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x52aed8
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x52aed8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        or ah, 40h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x52aef0
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 2ch]
        or ah, 2
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], eax
        mov eax, 1
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
