// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A861 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_0050a861_0050A861() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x50a961
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 52 84 FC FF: call 0x4d2cd1
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 130h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x50a961
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 39: jne 0x50a8e0
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 148h
        ; Exact mapped bytes E8 F5 BA 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 26: jge 0x50a8e0
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0cch
        ; Exact mapped bytes E8 A0 F5 FF FF: call 0x509e7b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C1: jmp 0x50a8a1
        __asm _emit 0xeb
        __asm _emit 0xc1
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x50a8fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 37dh
        push 6791a4h
        ; Exact mapped bytes E8 4B E4 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a8fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x50a8e0
        __asm _emit 0x75
        __asm _emit 0xe0
        push 636f08h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 F8 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50a925
        __asm _emit 0x75
        __asm _emit 0x14
        push 37eh
        push 6791a4h
        ; Exact mapped bytes E8 20 E4 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a925
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x50a900
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x50a948
        __asm _emit 0x75
        __asm _emit 0x14
        push 37fh
        push 6791a4h
        ; Exact mapped bytes E8 FD E3 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a948
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x50a92b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB 14: jmp 0x50a975
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A0 2A 02 00: call 0x52d415
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
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
