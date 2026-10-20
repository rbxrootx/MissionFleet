// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004743F2 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_004743f2_004743F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 39 60 FA FF: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 65 60 FA FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 74 63 FA FF: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x4744b7
        __asm _emit 0x74
        __asm _emit 0x62
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B3 62 FA FF: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 35: je 0x4744a7
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 54h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 0E E2 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8B 62 FA FF: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 89: jmp 0x474440
        __asm _emit 0xeb
        __asm _emit 0x89
        mov eax, 1
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 1A 43 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
