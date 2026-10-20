// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443EF0 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_00443ef0_00443EF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 83 F9 00 00 00: jae 0x444009
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 6D: je 0x443f96
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3E 28 00 00: call 0x446780
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 30: je 0x443f94
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 18h]
        shl edx, 2
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 80h
        ; Exact mapped bytes 76 0E: jbe 0x443f84
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 2A 85 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x443f94
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 DF 01 FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 4D: jmp 0x443fe3
        __asm _emit 0xeb
        __asm _emit 0x4d
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3A: je 0x443fd6
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 80h
        ; Exact mapped bytes 76 11: jbe 0x443fbf
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 A9 84 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 0F: jmp 0x443fce
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 F8 FF FE FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x443fdd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*4]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*4]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 8], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
