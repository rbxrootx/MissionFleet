// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541854 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_00541854_00541854() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 0f0h
        push 675764h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 ED 89 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x89
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x54189b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 10h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x54189b
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f1h
        push 675764h
        ; Exact mapped bytes E8 AA 74 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54189b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x541873
        __asm _emit 0x75
        __asm _emit 0xd2
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 19 0B FF FF: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C2 68 FE FF: call 0x528174
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 40ffffh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 64h], ecx
        cmp dword ptr [ebp + 24h], 0e800h
        ; Exact mapped bytes 75 0F: jne 0x5418d9
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 8
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffbf0000h
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        or ecx, 4eh
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        or edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 10h], edx
        push 1000h
        ; Exact mapped bytes E8 2B 3A F9 FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x541918
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ffh
        push 675764h
        ; Exact mapped bytes E8 2D 74 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541918
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x5418f6
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E8 2D FB FF FF: call 0x541450
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 70 57 67 00 FF: cmp dword ptr [0x675770], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x541940
        __asm _emit 0x75
        __asm _emit 0x14
        push 101h
        push 675764h
        ; Exact mapped bytes E8 05 74 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541940
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x541923
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 0B FC FF FF: call 0x541556
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 74 57 67 00 FF: cmp dword ptr [0x675774], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x541968
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 675764h
        ; Exact mapped bytes E8 DD 73 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541968
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54194b
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 51 08 FF FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 25 0B FF FF: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        push 6757ach
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 14 EC F8 FF: call 0x4d05b3
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5419a7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 47: jmp 0x5419ee
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F4 00 00 00: call 0x541add
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
