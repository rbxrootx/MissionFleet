// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512FF8 .. +0x127 bytes.
extern "C" __declspec(naked) void _OnCmdMsg_CFrameWnd__UAEHIHPAXPAUAFX_CMDHANDLERINFO___Z_00512FF8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cdb8h
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
        ; Exact mapped bytes E8 2E 85 F3 FF: call 0x44b550
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 81 0A 00 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3D: je 0x513077
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
        ; Exact mapped bytes 74 1E: je 0x513077
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 21 85 F3 FF: call 0x44b590
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x51310f
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
        ; Exact mapped bytes E8 30 43 FC FF: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5130ae
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E7 84 F3 FF: call 0x44b590
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 61: jmp 0x51310f
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes E8 BD E9 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x5130f6
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
        ; Exact mapped bytes 74 1B: je 0x5130f6
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 9F 84 F3 FF: call 0x44b590
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes EB 19: jmp 0x51310f
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 84 84 F3 FF: call 0x44b590
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0xf3
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
