// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470003 .. +0x1C7 bytes.
extern "C" __declspec(naked) void FUN_00470003_00470003() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bca8h
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
        sub esp, 64h
        push edi
        push ecx
        lea edi, [ebp - 70h]
        mov ecx, 19h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 6ch], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CC 0E 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x470196
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 63 13 00 00: call 0x4713c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 44h
        push 0
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 06 93 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 105h
        lea eax, [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 1A F3 05 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 28 16 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 A7 9D 03 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 44h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 5B 12 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 67: je 0x470135
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 47 12 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1b0h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 2A 12 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [edx + 1b0h], eax
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        push 44h
        lea edx, [ebp - 54h]
        push edx
        push 0
        push 105h
        push 80018006h
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 F6 11 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 FD 70 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 44h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 5bb1f0h
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 02 E8 05 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 10h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 60h], esp
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0E D3 07 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        push 8
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 ED 48 FE FF: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BB D6 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes EB 19: jmp 0x4701af
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 68h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A0 D6 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        add esp, 70h
        cmp ebp, esp
        ; Exact mapped bytes E8 1C 86 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
