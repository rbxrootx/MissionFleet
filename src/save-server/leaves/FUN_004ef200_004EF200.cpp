// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF200 .. +0x23C bytes.
extern "C" __declspec(naked) void FUN_004ef200_004EF200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 78h], ecx
        mov eax, dword ptr [ebp - 78h]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 05: je 0x4ef21a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 1B 02 00 00: jmp 0x4ef435
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 68h], 1
        mov edx, dword ptr [ebp - 78h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 7C 09: jl 0x4ef236
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 78h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 7D 14: jge 0x4ef24a
        __asm _emit 0x7d
        __asm _emit 0x14
        push 264h
        push 677c28h
        ; Exact mapped bytes E8 FB 9A 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ef24a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4ef224
        __asm _emit 0x75
        __asm _emit 0xd4
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 6F 2F 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 32 D8 03 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 1E: je 0x4ef28e
        __asm _emit 0x74
        __asm _emit 0x1e
        lea edx, [ebp - 5ch]
        push edx
        push 0
        push 368h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B6 C3 03 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4ef28e
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0C 29 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 04 29 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 51: je 0x4ef2f5
        __asm _emit 0x74
        __asm _emit 0x51
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 E6 FC FF FF: call 0x4eef9a
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x4ef2f3
        __asm _emit 0x75
        __asm _emit 0x3b
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 07 2F 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 8F C8 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7E 12: jle 0x4ef2e4
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 7E 0C: jle 0x4ef2e4
        __asm _emit 0x7e
        __asm _emit 0x0c
        push 0
        push 3
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 E4 3D FE FF: call 0x4d30c8
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [eax + 68h], 0
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x4ef435
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x4ef313
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 FE FB FF FF: call 0x4eeeff
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 54h]
        sub edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 50h]
        sub eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 87 28 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2B 2B 04 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 77 28 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 3F FD FF FF: call 0x4ef08a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 09: je 0x4ef35a
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 09: je 0x4ef369
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 52 F6 FF FF: call 0x4ee9d7
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], 3
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 27 3D FE FF: call 0x4d30c8
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 38: je 0x4ef3df
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 4ch]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        push 1
        lea edx, [ebp - 34h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 68 3D FE FF: call 0x4d3131
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4ef3df
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 4ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 3D 3C FE FF: call 0x4d301c
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 DB 3C FE FF: call 0x4d30c8
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 38: je 0x4ef42b
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 50h]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        push 1
        lea edx, [ebp - 34h]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 1C 3D FE FF: call 0x4d3131
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4ef42b
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 48h]
        push eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 F1 3B FE FF: call 0x4d301c
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 68h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
