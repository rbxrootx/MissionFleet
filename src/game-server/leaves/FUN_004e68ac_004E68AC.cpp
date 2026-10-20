// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E68AC .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_004e68ac_004E68AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fah
        push 5c7c98h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 95 48 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e68e5
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0fbh
        push 5c7c98h
        ; Exact mapped bytes E8 20 E1 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e68e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e68cb
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x4e6905
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0fch
        push 5c7c98h
        ; Exact mapped bytes E8 00 E1 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6905
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e68eb
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 13: jl 0x4e6929
        __asm _emit 0x7c
        __asm _emit 0x13
        push -1
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C4 F8 FF FF: call 0x4e61eb
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 65: jmp 0x4e698e
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A5 F8 FF FF: call 0x4e61eb
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp + 8]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        lea eax, [edx + eax*4]
        push eax
        ; Exact mapped bytes E8 1E 5F FC FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        push edx
        ; Exact mapped bytes E8 94 FB FF FF: call 0x4e651f
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4e69b0
        __asm _emit 0x7e
        __asm _emit 0x14
        push 113h
        push 5c7c98h
        ; Exact mapped bytes E8 55 E0 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e69b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4e698e
        __asm _emit 0x75
        __asm _emit 0xd8
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
