// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515E65 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_00515e65_00515E65() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d4cdh
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
        sub esp, 28h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7F EE 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 F5 E3 02 00: call 0x544295
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x515ec2
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 32 6A FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x515f93
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3D EE 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F3 55 FC FF: call 0x4db4d2
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x515f11
        __asm _emit 0x74
        __asm _emit 0x2b
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 45 F1 00 00: call 0x525038
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x515f11
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 5D: je 0x515f6e
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7C 51 FC FF: call 0x4db099
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7C EE 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B1 56 FC FF: call 0x4db5e8
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 46 53 FC FF: call 0x4db285
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 89 52 FC FF: call 0x4db1d7
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 92 69 FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 83 69 FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes EB 25: jmp 0x515f93
        __asm _emit 0xeb
        __asm _emit 0x25
        mov dword ptr [ebp - 34h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6B 69 FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5C 69 FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
