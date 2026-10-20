// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568039 .. +0x100 bytes.
extern "C" __declspec(naked) void _MessagePending_XMessageFilter_COleMessageFilter__UAGKPAUHTASK____KK_Z_00568039() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        sub eax, 3ch
        mov dword ptr [ebp - 20h], eax
        push 12dh
        push 5ce570h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 05 31 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 0F 86 8F 00 00 00: jbe 0x5680f9
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x5680f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x5680f9
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 66: je 0x5680f9
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 2ch], 1
        push 3
        push 209h
        push 200h
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5680bb
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB E2: jmp 0x56809d
        __asm _emit 0xeb
        __asm _emit 0xe2
        push 3
        push 108h
        push 100h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5680d9
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB E2: jmp 0x5680bb
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 2ch], 0
        mov eax, 1
        ; Exact mapped bytes EB 3A: jmp 0x568133
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 07: je 0x568109
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 2A: jmp 0x568133
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 2
        push 0
        push 0
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x56812e
        __asm _emit 0x74
        __asm _emit 0x0f
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
