// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E48C .. +0x2AB bytes.
extern "C" __declspec(naked) void FUN_0051e48c_0051E48C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ea56h
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
        sub esp, 220h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 22ch], ecx
        push 0
        push 0
        push 6
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 E4 1D FB FF: call 0x4d02b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 29 2A 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 8F C6 FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51e509
        __asm _emit 0x75
        __asm _emit 0x14
        push 241h
        push 5cb84ch
        ; Exact mapped bytes E8 FC 64 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e509
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x51e4e2
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 178h]
        or eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 178h], eax
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 DE 29 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 20ch]
        ; Exact mapped bytes E8 CF 29 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 33: je 0x51e575
        __asm _emit 0x74
        __asm _emit 0x33
        push 249h
        push 5cb84ch
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        ; Exact mapped bytes E8 0B CC FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 20ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 1ach]
        push ecx
        lea edx, [ebp - 214h]
        push edx
        ; Exact mapped bytes E8 5D F8 FF FF: call 0x51ddd0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7D: jmp 0x51e5f2
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 22ch]
        add ecx, 4
        ; Exact mapped bytes E8 0B 47 01 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 21ch], 1
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 74 56: je 0x51e5f2
        __asm _emit 0x74
        __asm _emit 0x56
        lea eax, [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        add ecx, 4
        ; Exact mapped bytes E8 FF 46 01 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 21ch]
        neg edx
        sbb edx, edx
        lea eax, [ebp - 20ch]
        and edx, eax
        push edx
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        lea edx, [ebp - 1ach]
        push edx
        lea eax, [ebp - 214h]
        push eax
        ; Exact mapped bytes E8 EA F7 FF FF: call 0x51ddd0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes EB A1: jmp 0x51e593
        __asm _emit 0xeb
        __asm _emit 0xa1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0D 29 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        push 0f002h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 75 C5 FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51e623
        __asm _emit 0x75
        __asm _emit 0x14
        push 25ch
        push 5cb84ch
        ; Exact mapped bytes E8 E2 63 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e623
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51e5fe
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 10h]
        push edx
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 96 F9 FC FF: call 0x4edfce
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 6B F9 FC FF: call 0x4edfb0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5cb910h
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 00 F9 FC FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 4E F9 FC FF: call 0x4edfb0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        add eax, 1
        mov dword ptr [ebp - 198h], eax
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 2E 29 01 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1a0h], eax
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 1D 29 01 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 17ch], eax
        push 104h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 F9 FC FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 0A 1E FB FF: call 0x4d04bb
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 FA FC FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        xor ecx, ecx
        cmp dword ptr [ebp - 210h], 1
        sete cl
        mov dword ptr [ebp - 228h], ecx
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6D F1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 20ch]
        ; Exact mapped bytes E8 5E F1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 4F F1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 40 F1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 C2 30 FB FF: call 0x4d17e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x30
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 228h]
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
