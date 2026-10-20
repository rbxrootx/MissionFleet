// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AEEE0 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_004aeee0_004AEEE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        ; Exact mapped bytes A1 F8 13 5D 00: mov eax, dword ptr [0x5d13f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4aef08
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 73 34: jae 0x4aef42
        __asm _emit 0x73
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 38h]
        push ecx
        ; Exact mapped bytes E8 B2 A4 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 68h]
        push ecx
        ; Exact mapped bytes E8 9D A4 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea edx, [eax + esi + 2]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BD: jmp 0x4aeeff
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C2 B2 FF FF: call 0x4aa210
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x4aeffb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4aef76
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 73 70: jae 0x4aefec
        __asm _emit 0x73
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax], 3ah
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 38h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 A1 AE FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 28 A4 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx], 3ah
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 68h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 6A AE FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 F1 A3 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        add edx, eax
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 81: jmp 0x4aef6d
        __asm _emit 0xeb
        __asm _emit 0x81
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
