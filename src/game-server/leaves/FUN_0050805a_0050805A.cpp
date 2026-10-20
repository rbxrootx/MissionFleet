// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050805A .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_0050805a_0050805A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x508085
        __asm _emit 0x75
        __asm _emit 0x11
        push 41h
        push 5cb374h
        ; Exact mapped bytes E8 80 C9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508085
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x508064
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 2C: jne 0x5080c0
        __asm _emit 0x75
        __asm _emit 0x2c
        push 8
        ; Exact mapped bytes E8 60 F3 FE FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5080b0
        __asm _emit 0x75
        __asm _emit 0x11
        push 45h
        push 5cb374h
        ; Exact mapped bytes E8 55 C9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5080b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x508094
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], 582e84h
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 30: je 0x5080f9
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 800000h
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x5080f9
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 2ch]
        or ah, 2
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        and eax, 0ff7fffffh
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], eax
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
