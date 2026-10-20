// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58648A00 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_58648a00_58648A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58648a1b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 240h]
        ; Exact mapped bytes E8 C7 0C EE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0xee
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 3E 01 00 00: jge 0x58648b70
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C2 81 17 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x58648b6b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 20ch]
        ; Exact mapped bytes E8 27 CD E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xcd
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F5 26 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x26
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        push 588af3b4h
        ; Exact mapped bytes E8 4A 95 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x95
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4C 81 17 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58648b18
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20ch]
        mov dword ptr [ebp - 28h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 20ch]
        ; Exact mapped bytes E8 AB CC E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xcc
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 79 26 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x26
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 40 7E 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 28 7E 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 10 7E 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 02 00 00: call 0x58648e10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x58648b70
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A2 FE FF FF: jmp 0x58648a12
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
