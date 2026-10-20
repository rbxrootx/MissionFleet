// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051863B .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_0051863b_0051863B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 6B D2 F4 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 28h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 80h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x51867d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes E8 3B 94 01 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 4cd820h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 515900h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 52: je 0x5186fb
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 C5 15 FC FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5186d3
        __asm _emit 0x75
        __asm _emit 0x14
        push 536h
        push 674cach
        ; Exact mapped bytes E8 72 06 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5186d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x5186a9
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 C3 C6 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        or al, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 30: je 0x518731
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8ch
        ; Exact mapped bytes E8 6D 15 FC FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51872b
        __asm _emit 0x75
        __asm _emit 0x14
        push 53bh
        push 674cach
        ; Exact mapped bytes E8 1A 06 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51872b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x518701
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 30: je 0x518767
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 90h
        ; Exact mapped bytes E8 37 15 FC FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x518761
        __asm _emit 0x75
        __asm _emit 0x14
        push 53dh
        push 674cach
        ; Exact mapped bytes E8 E4 05 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518761
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x518737
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes E8 31 63 FB FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x51877f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        or ecx, 20h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5187a2
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [eax + 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
