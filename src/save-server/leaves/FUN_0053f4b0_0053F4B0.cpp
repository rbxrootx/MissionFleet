// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053F4B0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0053f4b0_0053F4B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 11: je 0x53f4d9
        __asm _emit 0x74
        __asm _emit 0x11
        push 1fh
        push 6739a4h
        ; Exact mapped bytes E8 6C 98 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f4d9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53f4bc
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x53f4f6
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 6739a4h
        ; Exact mapped bytes E8 4F 98 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f4f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x53f4df
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 75 11: jne 0x53f516
        __asm _emit 0x75
        __asm _emit 0x11
        push 21h
        push 6739a4h
        ; Exact mapped bytes E8 2F 98 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f516
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53f4fc
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        ; Exact mapped bytes E8 1C CD F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes E8 EB 7D F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3F AA F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xaa
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 80h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        ; Exact mapped bytes E8 C4 7D F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 7ch]
        push eax
        ; Exact mapped bytes E8 15 AA F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xaa
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 94h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 BF CC F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcc
        __asm _emit 0xf8
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
