// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427C3A .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_00427c3a_00427C3A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 10h]
        lea eax, [ebp - 5ch]
        push 1
        mov dword ptr [ebp - 0ch], eax
        xor eax, eax
        pop edx
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp + 10h], edi
        mov cl, byte ptr [edi]
        cmp cl, 20h
        ; Exact mapped bytes 74 0F: je 0x427c8b
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp cl, 9
        ; Exact mapped bytes 74 0A: je 0x427c8b
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 0ah
        ; Exact mapped bytes 74 05: je 0x427c8b
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 0dh
        ; Exact mapped bytes 75 03: jne 0x427c8e
        __asm _emit 0x75
        __asm _emit 0x03
        inc edi
        ; Exact mapped bytes EB E7: jmp 0x427c75
        __asm _emit 0xeb
        __asm _emit 0xe7
        push 4
        pop esi
        mov bl, byte ptr [edi]
        inc edi
        cmp eax, 0bh
        ; Exact mapped bytes 0F 87 77 02 00 00: ja 0x427f14
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 DB 80 42 00: jmp dword ptr [eax*4 + 0x4280db]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x80
        __asm _emit 0x42
        __asm _emit 0x00
        cmp bl, 31h
        ; Exact mapped bytes 7C 0C: jl 0x427cb5
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp bl, 39h
        ; Exact mapped bytes 7F 07: jg 0x427cb5
        __asm _emit 0x7f
        __asm _emit 0x07
        push 3
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x427ed2
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 1D D0 AE 44 00: cmp bl, byte ptr [0x44aed0]
        __asm _emit 0x3a
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x427cc4
        __asm _emit 0x75
        __asm _emit 0x07
        push 5
        ; Exact mapped bytes E9 46 02 00 00: jmp 0x427f0a
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        sub eax, 2bh
        ; Exact mapped bytes 74 1E: je 0x427cea
        __asm _emit 0x74
        __asm _emit 0x1e
        dec eax
        dec eax
        ; Exact mapped bytes 74 0E: je 0x427cde
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 3
        ; Exact mapped bytes 0F 85 D4 02 00 00: jne 0x427fad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x427d6d
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov dword ptr [ebp - 28h], 8000h
        pop eax
        ; Exact mapped bytes EB A7: jmp 0x427c91
        __asm _emit 0xeb
        __asm _emit 0xa7
        and dword ptr [ebp - 28h], 0
        push 2
        pop eax
        ; Exact mapped bytes EB 9E: jmp 0x427c91
        __asm _emit 0xeb
        __asm _emit 0x9e
        cmp bl, 31h
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 7C 05: jl 0x427d00
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp bl, 39h
        ; Exact mapped bytes 7E AE: jle 0x427cae
        __asm _emit 0x7e
        __asm _emit 0xae
        ; Exact mapped bytes 3A 1D D0 AE 44 00: cmp bl, byte ptr [0x44aed0]
        __asm _emit 0x3a
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x427dc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 2bh
        ; Exact mapped bytes 74 31: je 0x427d42
        __asm _emit 0x74
        __asm _emit 0x31
        cmp bl, 2dh
        ; Exact mapped bytes 74 2C: je 0x427d42
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp bl, 30h
        ; Exact mapped bytes 74 52: je 0x427d6d
        __asm _emit 0x74
        __asm _emit 0x52
        cmp bl, 43h
        ; Exact mapped bytes 0F 8E 89 02 00 00: jle 0x427fad
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 45h
        ; Exact mapped bytes 7E 12: jle 0x427d3b
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp bl, 63h
        ; Exact mapped bytes 0F 8E 7B 02 00 00: jle 0x427fad
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 65h
        ; Exact mapped bytes 0F 8F 72 02 00 00: jg 0x427fad
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x427f0a
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec edi
        push 0bh
        ; Exact mapped bytes E9 C0 01 00 00: jmp 0x427f0a
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 31h
        ; Exact mapped bytes 7C 09: jl 0x427d58
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp bl, 39h
        ; Exact mapped bytes 0F 8E 56 FF FF FF: jle 0x427cae
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3A 1D D0 AE 44 00: cmp bl, byte ptr [0x44aed0]
        __asm _emit 0x3a
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 59 FF FF FF: je 0x427cbd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp bl, 30h
        ; Exact mapped bytes 0F 85 B5 01 00 00: jne 0x427f22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x427c91
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 39 15 CC AE 44 00: cmp dword ptr [0x44aecc], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x427d90
        __asm _emit 0x7e
        __asm _emit 0x11
        movzx eax, bl
        push esi
        push eax
        ; Exact mapped bytes E8 7B A9 FF FF: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 1
        pop edx
        ; Exact mapped bytes EB 0E: jmp 0x427d9e
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D C0 AC 44 00: mov ecx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        movzx eax, bl
        mov al, byte ptr [ecx + eax*2]
        and eax, esi
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x427dc0
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 73 10: jae 0x427db8
        __asm _emit 0x73
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 0ch]
        inc dword ptr [ebp - 4]
        sub bl, 30h
        inc dword ptr [ebp - 0ch]
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 03: jmp 0x427dbb
        __asm _emit 0xeb
        __asm _emit 0x03
        inc dword ptr [ebp - 8]
        mov bl, byte ptr [edi]
        inc edi
        ; Exact mapped bytes EB B7: jmp 0x427d77
        __asm _emit 0xeb
        __asm _emit 0xb7
        ; Exact mapped bytes 3A 1D D0 AE 44 00: cmp bl, byte ptr [0x44aed0]
        __asm _emit 0x3a
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 67: jne 0x427e2f
        __asm _emit 0x75
        __asm _emit 0x67
        mov eax, esi
        ; Exact mapped bytes E9 C2 FE FF FF: jmp 0x427c91
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 75 0D: jne 0x427de8
        __asm _emit 0x75
        __asm _emit 0x0d
    }
}
