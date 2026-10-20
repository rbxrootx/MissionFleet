// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C74D3 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004c74d3_004C74D3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B0 2E 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        push 6747f0h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 6747e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 13 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8F 15 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3C 13 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 E8 05 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4c7572
        __asm _emit 0x7e
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 59 00 06 00: call 0x52757c
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 46: je 0x4c7572
        __asm _emit 0x74
        __asm _emit 0x46
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F FE FF FF: call 0x4c735f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 FC: mov ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        push eax
        push 674800h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 6747fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 12 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C2 15 06 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 12 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 52 14 06 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x4c7526
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 674808h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 12 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
