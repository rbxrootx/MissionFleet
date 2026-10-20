// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005704C0 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_005704c0_005704C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 580151h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4F 21 FE FF: call 0x552638
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 20h
        ; Exact mapped bytes E8 37 51 FC FF: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 30h
        ; Exact mapped bytes E8 01 0A FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 3ch
        ; Exact mapped bytes E8 BB 2A 00 00: call 0x572fd0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 6ch
        ; Exact mapped bytes E8 EC 2A 00 00: call 0x573010
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 70h
        ; Exact mapped bytes E8 01 2B 00 00: call 0x573030
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], 58b044h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x57054e
        __asm _emit 0x74
        __asm _emit 0x10
        push 1eh
        push 5d0930h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 12 AC F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 2ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 64h], 1
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 1
        mov dword ptr [ebp - 14h], 0ffffffffh
        ; Exact mapped bytes 66 C7 45 E0 03 00: mov word ptr [ebp - 0x20], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 20h
        lea edx, [ebp - 20h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 3ch
        ; Exact mapped bytes E8 8B 23 FF FF: call 0x56295b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 1ch], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x5705f2
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 11: je 0x57060e
        __asm _emit 0x74
        __asm _emit 0x11
        push 3ch
        push 5d0930h
        ; Exact mapped bytes E8 F7 43 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57060e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x5705f2
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 4D DC FB FF: call 0x52e266
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 24h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
