// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB899 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_004eb899_004EB899() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EA F9 00 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c7d98h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c7d90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 92 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 99 94 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 46 92 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 66 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 56: jle 0x4eb937
        __asm _emit 0x7e
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 38 7F 04 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 45: je 0x4eb937
        __asm _emit 0x74
        __asm _emit 0x45
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 FE FF FF: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5c7da8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 5c7da4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 91 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CD 94 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 ED 91 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BF 94 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B5: jmp 0x4eb8ec
        __asm _emit 0xeb
        __asm _emit 0xb5
        push 5c7db0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 91 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
