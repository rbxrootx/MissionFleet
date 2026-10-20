// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005181E4 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_005181e4_005181E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 69 B8 FB FF: call 0x4d3a62
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x518202
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 59: jmp 0x51825b
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x518221
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D C0 FB FF: call 0x4d427c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 3A: jmp 0x51825b
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D E4 6D 68 00: mov ecx, dword ptr [0x686de4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 D4 6D 68 00: mov edx, dword ptr [0x686dd4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 71 33 01 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 FB C0 FB FF: call 0x4d4343
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x518256
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E 75 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x51825b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes A1 D4 6D 68 00: mov eax, dword ptr [0x686dd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
