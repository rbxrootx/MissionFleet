// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D480 .. +0x69 bytes.
extern "C" __declspec(naked) void _SyncAfter_XNotifyDBEvents_COleControlSite__UAGJKKQAUtagDBNOTIFYREASON___Z_0041D480() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 14h]
        push edi
        mov edi, dword ptr [ebp + 8]
        push 6
        push esi
        push dword ptr [ebp + 10h]
        mov ecx, edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9C 00 00 00: call 0x41d537
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 44: jl 0x41d4e3
        __asm _emit 0x7c
        __asm _emit 0x44
        mov eax, dword ptr [esi]
        mov esi, dword ptr [edi - 4ch]
        test esi, esi
        ; Exact mapped bytes 74 39: je 0x41d4e1
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dword ptr [esi + 44h], 0
        ; Exact mapped bytes 75 33: jne 0x41d4e1
        __asm _emit 0x75
        __asm _emit 0x33
        cmp eax, 1fh
        ; Exact mapped bytes 74 2E: je 0x41d4e1
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp eax, 1eh
        ; Exact mapped bytes 74 29: je 0x41d4e1
        __asm _emit 0x74
        __asm _emit 0x29
        test byte ptr [ebp + 0ch], 3
        ; Exact mapped bytes 74 23: je 0x41d4e1
        __asm _emit 0x74
        __asm _emit 0x23
        cmp eax, 2
        ; Exact mapped bytes 74 1E: je 0x41d4e1
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp eax, 3
        ; Exact mapped bytes 74 19: je 0x41d4e1
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, esi
        mov dword ptr [esi + 44h], 1
        ; Exact mapped bytes E8 EA E7 FF FF: call 0x41bcc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        and dword ptr [esi + 44h], 0
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
