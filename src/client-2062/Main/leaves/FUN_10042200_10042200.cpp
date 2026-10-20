// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042200 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_10042200_10042200() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016e6fbh
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, 0f4241h
        mov ebp, 4
        mov esi, dword ptr [edi + 8]
        mov eax, dword ptr [edi + 0ch]
        cmp esi, eax
        ; Exact mapped bytes 74 3F: je 0x10042271
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 28h], ebx
        ; Exact mapped bytes 74 08: je 0x10042241
        __asm _emit 0x74
        __asm _emit 0x08
        add esi, ebp
        cmp esi, eax
        ; Exact mapped bytes 75 F3: jne 0x10042232
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 30: jmp 0x10042271
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1004224d
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 0ch]
        lea eax, [esi + 4]
        cmp eax, ecx
        ; Exact mapped bytes 74 0D: je 0x10042264
        __asm _emit 0x74
        __asm _emit 0x0d
        sub esi, eax
        mov edx, dword ptr [eax]
        mov dword ptr [esi + eax], edx
        add eax, ebp
        cmp eax, ecx
        ; Exact mapped bytes 75 F5: jne 0x10042259
        __asm _emit 0x75
        __asm _emit 0xf5
        mov eax, dword ptr [edi + 0ch]
        add eax, -4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [edi + 0ch], eax
        push 0f8h
        ; Exact mapped bytes E8 25 A5 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa5
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 11: je 0x1004229f
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esp + 28h]
        push ecx
        push ebx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 A3 E3 FF FF: call 0x10040640
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100422a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [edi + 10h]
        lea esi, [edi + 4]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 20h], 0ffffffffh
        mov eax, dword ptr [esi + 8]
        sub edx, eax
        mov edi, eax
        sar edx, 2
        cmp edx, 1
        ; Exact mapped bytes 0F 83 A2 00 00 00: jae 0x10042368
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100422d9
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        mov ebx, eax
        ; Exact mapped bytes 77 05: ja 0x100422de
        __asm _emit 0x77
        __asm _emit 0x05
        mov ebx, 1
        mov ecx, esi
        ; Exact mapped bytes E8 2B FA FF FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        ; Exact mapped bytes 79 02: jns 0x100422ef
        __asm _emit 0x79
        __asm _emit 0x02
        xor eax, eax
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 A8 A4 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa4
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 26 FA FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esp + 10h]
        mov ecx, esi
        push edx
        push 1
        push eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes E8 43 FA FF FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esi + 8]
        add eax, 4
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 FF F9 FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 90 C8 05 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes E8 3B A4 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa4
        __asm _emit 0x12
        __asm _emit 0x00
        lea edx, [ebx + ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes E8 B7 F9 FF FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebx + eax*4 + 4]
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x100423f2
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 73 43: jae 0x100423b7
        __asm _emit 0x73
        __asm _emit 0x43
        lea edx, [edi + 4]
        mov ecx, esi
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 AF F9 FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        lea ecx, [esp + 10h]
        mov edx, eax
        push ecx
        sub edx, edi
        mov ecx, 1
        sar edx, 2
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 F9 FF FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 46: je 0x100423ef
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        add eax, ebp
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x100423a9
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 38: jmp 0x100423ef
        __asm _emit 0xeb
        __asm _emit 0x38
        push eax
        push eax
        add eax, -4
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 6C F9 FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        lea eax, [ecx - 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0C: je 0x100423da
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, ebp
        sub ecx, ebp
        cmp eax, edi
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 75 F4: jne 0x100423ce
        __asm _emit 0x75
        __asm _emit 0xf4
        lea ecx, [edi + 4]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 0C: je 0x100423ef
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        add eax, ebp
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x100423e3
        __asm _emit 0x75
        __asm _emit 0xf4
        add dword ptr [esi + 8], ebp
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
