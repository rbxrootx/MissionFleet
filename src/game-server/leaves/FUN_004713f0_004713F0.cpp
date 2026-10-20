// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004713F0 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_004713f0_004713F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bd1ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        push 0ffffh
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 14h
        ; Exact mapped bytes E8 58 FA F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0ffffh
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 38h
        ; Exact mapped bytes E8 41 FA F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 0ffffh
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 5ch
        ; Exact mapped bytes E8 2D FA F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 581c98h
        push 16h
        push 5bb20ch
        push 0ch
        ; Exact mapped bytes E8 B5 BB 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 15: je 0x4714a3
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A2 71 FF FF: call 0x468640
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4714aa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], edx
        push 17h
        push 5bb20ch
        push 48ch
        ; Exact mapped bytes E8 65 BB 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 15: je 0x4714f3
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A2 2D F9 FF: call 0x404290
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x4714fa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 48 01 00 00: call 0x471665
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 A5 72 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
