// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AEDB0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_004aedb0_004AEDB0() {
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
        ; Exact mapped bytes EB 09: jmp 0x4aedd8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 33: jae 0x4aee11
        __asm _emit 0x73
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 E3 A5 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 1ch]
        push ecx
        ; Exact mapped bytes E8 CE A5 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea edx, [eax + esi + 2]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BE: jmp 0x4aedcf
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F3 B3 FF FF: call 0x4aa210
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x4aeec9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4aee45
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 6F: jae 0x4aeeba
        __asm _emit 0x73
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax], 3ah
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 D3 AF FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 5A A5 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa5
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
        mov eax, dword ptr [edx + ecx*4 + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 9C AF FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 23 A5 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        add edx, eax
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 82: jmp 0x4aee3c
        __asm _emit 0xeb
        __asm _emit 0x82
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
