// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4DDC .. +0x205 bytes.
extern "C" __declspec(naked) void FUN_004a4ddc_004A4DDC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fc62h
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], 80004003h
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x4a4fc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2F: jne 0x4a4e47
        __asm _emit 0x75
        __asm _emit 0x2f
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4a4e2a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 10: jae 0x4a4e42
        __asm _emit 0x73
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax + edx*8 + 4], 0
        ; Exact mapped bytes EB DF: jmp 0x4a4e21
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes E9 81 01 00 00: jmp 0x4a4fc8
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 E5 FB FF FF: call 0x4a4a40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 09: jne 0x4a4e71
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 08: jmp 0x4a4e79
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x4a4e8b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 1C: jae 0x4a4eaf
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + edx*8]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 46 FD FF FF: call 0x4a4bf3
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D3: jmp 0x4a4e82
        __asm _emit 0xeb
        __asm _emit 0xd3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x4a4fb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        add eax, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x4a4fb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x4a4fb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 58h], 0
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 14: je 0x4a4f09
        __asm _emit 0x74
        __asm _emit 0x14
        push 9ch
        push 5d01fch
        ; Exact mapped bytes E8 FC FA 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a4f09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a4eef
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 1
        push ecx
        lea edx, [ebp - 60h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 66 8F 02 00: call 0x4cde8b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 08 8B 04 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 02 89 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0E C0 08 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx + 4], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4A C0 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 09: jne 0x4a4f72
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 36: jmp 0x4a4fa8
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 2F 48 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], esp
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        ; Exact mapped bytes E8 1B C0 FE FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        add edx, 0ch
        push edx
        ; Exact mapped bytes FF 15 C0 22 5E 00: call dword ptr [0x5e22c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 E8 01 00 00: call 0x4a51b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        lea esp, [ebp - 7ch]
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
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
