// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052465B .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_0052465b_0052465B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        and al, 0feh
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x524684
        __asm _emit 0x74
        __asm _emit 0x14
        push 288h
        push 5c8174h
        ; Exact mapped bytes E8 81 03 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524684
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x524667
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x5246b3
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 97 B7 FA FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb7
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5246b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 289h
        push 5c8174h
        ; Exact mapped bytes E8 52 03 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5246b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x52468a
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 4A: jne 0x52470c
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 FA FF FF: call 0x5241be
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 78h
        ; Exact mapped bytes E8 21 94 FC FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 78h
        ; Exact mapped bytes E8 C3 C8 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        and al, 0feh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        or eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 15: jmp 0x524721
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 46fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B8 74 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
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
