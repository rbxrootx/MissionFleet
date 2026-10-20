// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785510 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_58785510_58785510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x58785524
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x58785625
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 01 00 00: call 0x58785630
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC F5 FF FF: call 0x58784ae0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], eax
        mov dword ptr [ecx + 6ch], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 14 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x14
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0E: je 0x5878555c
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 45: je 0x58785599
        __asm _emit 0x74
        __asm _emit 0x45
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 3F: je 0x58785599
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes EB 78: jmp 0x587855d4
        __asm _emit 0xeb
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 26 D0 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 F4 CF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 85 FB FF FF: call 0x58785110
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [eax + 78h], edx
        ; Exact mapped bytes EB 3B: jmp 0x587855d4
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 69 D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x69
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 6A D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B8 F8 FF FF: call 0x58784e80
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ecx + 78h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 21: je 0x587855fe
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 01 D1 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E3 F5 FF FF: call 0x58784be0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 2ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7F 09 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 30h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6C 09 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
