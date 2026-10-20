// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560CC7 .. +0xF3 bytes.
extern "C" __declspec(naked) void _OnCmdMsg_COleDocument__UAEHIHPAXPAUAFX_CMDHANDLERINFO___Z_00560CC7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f543h
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
        sub esp, 14h
        mov dword ptr [ebp - 20h], ecx
        push 64h
        push 67c678h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 6B 95 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x95
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x560d92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0e210h
        ; Exact mapped bytes 0F 82 86 00 00 00: jb 0x560d92
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0e21fh
        ; Exact mapped bytes 77 7D: ja 0x560d92
        __asm _emit 0x77
        __asm _emit 0x7d
        ; Exact mapped bytes E8 BC 5F F9 FF: call 0x4f6cd6
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x560d92
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0F: je 0x560d4d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], edx
        mov eax, 1
        ; Exact mapped bytes EB 5D: jmp 0x560daa
        __asm _emit 0xeb
        __asm _emit 0x5d
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C4 0A FD FF: call 0x531819
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 0e210h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A6 0A FD FF: call 0x531833
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 18: jmp 0x560daa
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4D 15 F9 FF: call 0x4f22f7
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
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
