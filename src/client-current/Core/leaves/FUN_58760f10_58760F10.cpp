// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760F10 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_58760f10_58760F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f58h]
        mov dword ptr [ebp - 8], ecx
        push 101h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7E 46 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 40000000h
        ; Exact mapped bytes 75 57: jne 0x58760f93
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f58h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E 4F D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 5A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5a
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 17: je 0x58760f7a
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 115ch]
        mov dword ptr [ebp - 10h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 50 D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1160h]
        mov dword ptr [ebp - 14h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 00 50 D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5B: jmp 0x58760fee
        __asm _emit 0xeb
        __asm _emit 0x5b
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 55: jne 0x58760fee
        __asm _emit 0x75
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f58h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 4F D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 5A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5a
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 17: je 0x58760fd7
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 115ch]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BA 4F D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1160h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A3 4F D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
