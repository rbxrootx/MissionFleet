// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E0350 .. +0x1AB bytes.
extern "C" __declspec(naked) void FUN_586e0350_586E0350() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c635h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 6ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 48 97 DC FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 588b2484h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 34 97 DC FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 0
        lea ecx, [ebp - 40h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A2 E7 E3 FF: call 0x5851eb50
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe7
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], -1
        ; Exact mapped bytes 74 4C: je 0x586e0403
        __asm _emit 0x74
        __asm _emit 0x4c
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 21 46 DA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0xda
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A4 AC E2 FF: call 0x5850b070
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        lea eax, [ebp - 28h]
        push eax
        push 588b2490h
        ; Exact mapped bytes E8 15 1C E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 D8 0D E2 FF: call 0x585011c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0xe2
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 26 4F DE FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x4f
        __asm _emit 0xde
        __asm _emit 0xff
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 2E 99 DC FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x99
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 35 59 DE FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x59
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 4c4h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F4 00 0E 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ecx + 4c4h]
        ; Exact mapped bytes E8 35 08 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [edx + 4c4h]
        ; Exact mapped bytes E8 A5 92 E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 0ah
        cmp esi, eax
        ; Exact mapped bytes 75 3B: jne 0x586e048d
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 4c4h]
        ; Exact mapped bytes E8 50 13 0E 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 4c4h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 4c4h]
        ; Exact mapped bytes E8 76 92 E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 04 11 0E 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 4c0h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 27 50 0E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x50
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 4c0h]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 FD 33 E5 FF: call 0x585338c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x33
        __asm _emit 0xe5
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 61 98 DC FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x98
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 52 98 DC FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x98
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 5B 0B 15 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x15
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
