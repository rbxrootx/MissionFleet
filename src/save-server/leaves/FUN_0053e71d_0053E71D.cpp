// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053E71D .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0053e71d_0053E71D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 0F: je 0x53e742
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        cmp dword ptr [edx + 10h], 5
        ; Exact mapped bytes 74 16: je 0x53e758
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 1C 1F 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 08: jne 0x53e758
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C FF FF FF: call 0x53e6b4
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 31: je 0x53e795
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 FA 1E 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x53e786
        __asm _emit 0x74
        __asm _emit 0x14
        push 179h
        push 6722d0h
        ; Exact mapped bytes E8 BF A5 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53e786
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x53e764
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 3ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
