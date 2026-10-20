// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471162 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_00471162_00471162() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 89 FD FF: call 0x449aab
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x471205
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 95 FD FF: call 0x44a69b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4711b5
        __asm _emit 0x74
        __asm _emit 0x29
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 7F B2 FD FF: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 89 FD FF: call 0x449ae6
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 55: jmp 0x47120a
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 91 FD FF: call 0x44a390
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4711da
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002c002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 60 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x4711f1
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 60 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 65 FD FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 64 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x47120a
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CC 75 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
