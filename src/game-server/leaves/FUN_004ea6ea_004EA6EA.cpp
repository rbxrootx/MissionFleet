// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EA6EA .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004ea6ea_004EA6EA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 99 0B 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c5d68h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c5d60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 A4 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 48 A6 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F5 A3 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 78 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4ea789
        __asm _emit 0x7e
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 56 91 04 00: call 0x533890
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 46: je 0x4ea789
        __asm _emit 0x74
        __asm _emit 0x46
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 FC FF FF: call 0x4ea448
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5c5d78h
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        push ecx
        push 5c5d74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 A3 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 19 A5 04 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9B A3 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 14 A6 04 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x4ea73d
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 5c5d80h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 A3 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa3
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
