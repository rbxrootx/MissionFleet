// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516366 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_00516366_00516366() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 DE EB 02 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 36: jne 0x5163be
        __asm _emit 0x75
        __asm _emit 0x36
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 14: je 0x5163b8
        __asm _emit 0x74
        __asm _emit 0x14
        push 222h
        push 5c8b74h
        ; Exact mapped bytes E8 4D E6 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5163b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x516398
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 19: je 0x5163e0
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 CB 54 01 00: call 0x52b8a1
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 26 C4 FD FF: call 0x4f280e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
