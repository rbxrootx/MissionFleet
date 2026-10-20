// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052B8D9 .. +0x127 bytes.
extern "C" __declspec(naked) void _OnCmdMsg_CFrameWnd__UAEHIHPAXPAUAFX_CMDHANDLERINFO___Z_0052B8D9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ded8h
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
        sub esp, 24h
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CD 36 F6 FF: call 0x48efd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 81 0A 00 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3D: je 0x52b958
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x52b958
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C0 36 F6 FF: call 0x48f010
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x52b9f0
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AF C9 FC FF: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x52b98f
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 86 36 F6 FF: call 0x48f010
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 61: jmp 0x52b9f0
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes E8 6C 9B 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x52b9d7
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x52b9d7
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3E 36 F6 FF: call 0x48f010
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes EB 19: jmp 0x52b9f0
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 23 36 F6 FF: call 0x48f010
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
