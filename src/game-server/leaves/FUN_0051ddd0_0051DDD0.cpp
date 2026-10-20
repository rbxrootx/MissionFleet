// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051DDD0 .. +0x1C5 bytes.
extern "C" __declspec(naked) void FUN_0051ddd0_0051DDD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ea00h
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
        sub esp, 8
        push ebx
        push esi
        push edi
        push 173h
        push 5cb84ch
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 5F D3 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        push 586a28h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 82 D2 FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51de26
        __asm _emit 0x75
        __asm _emit 0x14
        push 174h
        push 5cb84ch
        ; Exact mapped bytes E8 DF 6B 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51de26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51de01
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D3 30 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C4 30 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 4
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x51df67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 31 01 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x51df67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x51df67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 FB 30 01 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x51df67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 32 01 00: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        cmp eax, 2eh
        ; Exact mapped bytes 74 14: je 0x51debf
        __asm _emit 0x74
        __asm _emit 0x14
        push 17dh
        push 5cb84ch
        ; Exact mapped bytes E8 46 6B 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51debf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x51de99
        __asm _emit 0x75
        __asm _emit 0xd4
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 31: je 0x51defc
        __asm _emit 0x74
        __asm _emit 0x31
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D7 30 01 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 1E FC FC FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 C3 30 01 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 18h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 00 FD FF: call 0x4edfce
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 30 01 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x51df28
        __asm _emit 0x74
        __asm _emit 0x14
        push 188h
        push 5cb84ch
        ; Exact mapped bytes E8 DD 6A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51df28
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x51df08
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 00 FD FF: call 0x4edfb0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        push 2ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 00 FD FF: call 0x4edfb0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 00 FD FF: call 0x4edfce
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 00 FD FF: call 0x4edfb0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D9 F8 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CA F8 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
