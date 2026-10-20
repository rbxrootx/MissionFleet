// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526343 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00526343_00526343() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 34h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 88h
        push eax
        ; Exact mapped bytes E8 14 30 F8 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], 34h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], 8
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        ; Exact mapped bytes E8 26 AC 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0a4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        ; Exact mapped bytes E8 B5 A7 FC FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5263d1
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        or ch, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 23: je 0x5263fa
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        or eax, 18000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 24: je 0x526424
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 0b4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        or edx, 20000h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], edx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 24: je 0x52644e
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        or ecx, 180000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 7ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
