// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58661780 .. +0x20E bytes.
extern "C" __declspec(naked) void FUN_58661780_58661780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 8], ecx
        push 5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 E0 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 12 32 E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x32
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x586617c9
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 78 E0 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 E9 31 E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x586617f2
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4F E0 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe0
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 C0 31 E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x31
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5866181b
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 26 E0 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe0
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 97 31 E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x31
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58661844
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FD DF E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xdf
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 154h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 154h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 158h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 158h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 164h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 164h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 160h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 160h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 15ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 15ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 16ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 170h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 DF 88 E4 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 174h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3B E3 E3 FF: call 0x5849fc70
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe3
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 6D 55 FD FF: call 0x58636eb0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 7F 53 FD FF: call 0x58636cd0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 B1 51 FD FF: call 0x58636b10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 43 66 FD FF: call 0x58637fb0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 25 6A FD FF: call 0x586383a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 E7 6C FD FF: call 0x58638670
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
