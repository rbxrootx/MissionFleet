// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F180 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_0041f180_0041F180() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579fe9h
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
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 60 04 00 00: call 0x41f620
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x41f200
        __asm _emit 0x74
        __asm _emit 0x3c
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C0 FC FF FF: call 0x41ee90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 27 FC FF FF: call 0x41ee00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x41f200
        __asm _emit 0x75
        __asm _emit 0x1e
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F2 FC FF FF: call 0x41eee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 09 FC FF FF: call 0x41ee00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x41f244
        __asm _emit 0x74
        __asm _emit 0x44
        lea edx, [ebp + 10h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 F4 FB FF FF: call 0x41ee00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x41f234
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 5D FB FF FF: call 0x41ed80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0E 04 00 00: call 0x41f640
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x41f200
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x41f2c5
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F4 9D 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 35 14 00 00: call 0x420690
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0A 0D 00 00: call 0x41ff70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 22 14 00 00: call 0x420690
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 3C 2F 5D 00: mov ecx, dword ptr [0x5d2f3c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0ch], 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A8 13 00 00: call 0x420630
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C8 13 00 00: call 0x420660
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E4 FB FF FF: call 0x41ee90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5E 9E 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 07 95 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
