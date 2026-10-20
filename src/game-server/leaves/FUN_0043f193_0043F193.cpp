// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F193 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_0043f193_0043F193() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 40cf0h
        ; Exact mapped bytes E8 14 0F 00 00: call 0x4400e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 40cf0h
        ; Exact mapped bytes E8 3D 0F 00 00: call 0x440120
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 8]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 0C 11 00 00: call 0x440300
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x43f229
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 7B 10 00 00: call 0x440280
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        push 0
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 97 10 00 00: call 0x4402b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x43f227
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 A9 00 00: call 0x449c1e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BF: jmp 0x43f1e8
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EF 20 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF FE 00 00: call 0x44f0e7
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E0 20 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 FF 00 00: call 0x44f1ce
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D1 20 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C3 FC 00 00: call 0x44ef19
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C2 20 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B FD 00 00: call 0x44f000
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 40ca8h], 0
        ; Exact mapped bytes 74 27: je 0x43f298
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 40ca8h]
        mov ecx, dword ptr [eax + 214h]
        ; Exact mapped bytes E8 BB 10 00 00: call 0x440340
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 64h
        ; Exact mapped bytes 7E 0E: jle 0x43f298
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 B3 3A 04 00: call 0x482d4b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 3ch]
        push eax
        ; Exact mapped bytes E8 5C 62 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 25 95 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5E 0D 00 00: call 0x440020
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 13 95 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
